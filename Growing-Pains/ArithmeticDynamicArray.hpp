#include <string>

using namespace std;

class Arithmeticarray
{
private:
	int resizing_size;
	int max = 1;
	int* array_pntr;
	int* top;
	int* start = top;
	int* resize_array();

public:
	explicit class Arithmeticarray(int element = 1);
	void append_element(int element);
	int get_element_at_index(int index);
	int arraysize();
	void reset();
	int maxsize();
};

