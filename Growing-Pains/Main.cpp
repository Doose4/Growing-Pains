#include <iostream>
#include "helpers.hpp"

using namespace std;

int* resize_array(int* garden_array, int current_size)
{
    // Create a new dynamic array that is one larger than the old array
    int* new_array = new int[current_size + 1];

    // Copy the elements from the original array to the new array
    for (int i = 0; i < current_size; i++)
    {
        new_array[i] = garden_array[i];
    }

    // Delete the original array
    delete[] garden_array;

    return new_array;
}

int main()
{
    cout << endl;

    // Where we started (with a small difference)
    int size = 1;
    int* garden = new int[size];
    garden[0] = 1;

    // Where we have arrived
    bool in_progress = true;
    int plant_or_exit;

    while (in_progress)
    {
        cout << "Enter a plant or type 'exit'" << endl;
        cin >> plant_or_exit;
        //if (!isdigit(plant_or_exit)
        //{
            in_progress = false;
        //}
        //else
        //{
            garden = resize_array(garden, size);
            garden[size] = plant_or_exit;
            size = size + 1;
            print_message(plant_or_exit);
        //}
    }

    print_garden(garden, size);

    // Don't forget to free the memory
    delete[] garden;

    return 0;
}