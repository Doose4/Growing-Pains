#include <iostream>
#include <array>

using namespace std;

class DynamicArray
{
private:
    int* arr[1];
    int* top;
    int* start;
    void resize(int new_size);

public:
    void append_element(int element);
    int get_element_at_index(int index);
    int size();
    void reset();
};