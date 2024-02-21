#include <iostream>
#include <string>
#include <array>
#include "UpdArr.hpp"
using namespace std;



int DynamicArray::resize(int* arr, const int new_size) {
	//int* arr = new int[new_size];
	top = arr + new_size;
	start = arr;

	// Create a new dynamic array that is one larger than the old array
	int* new_array = new int[new_size];

	// Copy the elements from the original array to the new array
	for (int i = 0; i < new_size-1; i++)
	{
		new_array[i] = arr[i];
	}

	// Delete the original array
	delete[] arr;

	return new_array;
};

void DynamicArray::append_element(int element) {
	top++;
	*top = element;
	cout << "Pushed element: " << element << " onto the stack.\n";
};

int DynamicArray::get_element_at_index(int index) {
	return *top;
};

int DynamicArray::size() {
	return top - start;
};

void DynamicArray::reset(){
	top = start;
};