#include <iostream>
#include <fstream>
#include "const.h"
#include "ram.h"

void saveToFile ()
{
    int *tmp = new int[g_size];
    ramRead (tmp);
    std::ofstream file ("ssd.txt");

    for (int i = 0; i < g_size; ++i)
    {
        file << *(tmp + i) << " ";
    }   
    file.close ();
    std::cout << "Saved" << std::endl << std::endl;

    delete[] tmp;
    tmp = nullptr;
}

void loadFromFile ()
{
    int *tmp = new int[g_size];
    std::ifstream file ("ssd.txt");
    if (file.is_open ())
    {
        for (int i = 0; i < g_size; ++i)
        {
            file >> *(tmp + i);
        }   
        ramWrite (tmp);
        std::cout << "Loaded" << std::endl << std::endl;
    }
    else
    {
        std::cout << "File not found" << std::endl << std::endl;
    }  
    delete[] tmp;
    tmp = nullptr;
}