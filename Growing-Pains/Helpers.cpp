#include <iostream>
#include "helpers.hpp"

void print_garden(int* garden, int size)
{
    cout << endl;
    cout << "Printing everything in the garden now!" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << garden[i] << endl;
    }
    cout << endl;
}

void print_message(int veg)
{
    cout << veg
        << " was added!"
        << endl
        << endl;
}