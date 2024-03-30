#include <string>

using namespace std;

class GeometricArray
{
private:
	int max = 1;
	int* array_pntr;
	int* top;
	int* start = top;
	int* resize_array();

public:
	explicit class GeometricArray();
	void append_element(int element);
	int get_element_at_index(int index);
	int arraysize();
	void reset();
	int maxsize();
};