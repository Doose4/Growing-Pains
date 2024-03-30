#include <iostream>
#include "GeometricDynamicArray.hpp"

GeometricArray::GeometricArray() {
    max = 1;
    array_pntr = new int[max];
    start = array_pntr;
    top = start;

}

int* GeometricArray::resize_array()
{
    // Create a new dynamic array that is one larger than the old array
    cout << "resizing array now..." << endl;
    int dif = top - start;
    max = dif* 2;
    int* new_array = new int[max];
    start = new_array;
    top = start + dif;

    // Copy the elements from the original array to the new array
    for (int i = 0; i < max; i++)
    {
        new_array[i] = array_pntr[i];
    }

    // Delete the original array
    delete[] array_pntr;

    return new_array;
}

void GeometricArray::append_element(int element) {
    int dif = top - start;
    if (dif == 0) {
        *top = element;
        cout << "Pushed element: " << element << " onto the stack.\n";
        top++;
    }
    else if (max == dif) {
        array_pntr = resize_array();
        *top = element;
        cout << "Pushed element: " << element << " onto the stack.\n";
        top++;
    }
    else {
        *top = element;
        cout << "Pushed element: " << element << " onto the stack.\n";
        top++;
    }

}

int GeometricArray::get_element_at_index(int index) {
    return *(start + index);
}

int GeometricArray::arraysize() {
    return (top - start);
}

void GeometricArray::reset() {
    top = start;
}

int GeometricArray::maxsize() {
    return max;
}