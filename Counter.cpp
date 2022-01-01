#include <iostream>
using namespace std;

class Counter
{
	unsigned int value_min;
	unsigned int value_max;
	unsigned int step;
	unsigned int cur_count;

public:

	Counter()
	{
		value_min = 0;
		value_max = 99999;
		step = 1;
		cur_count = 0;
	}

	Counter(unsigned int value_min, unsigned int value_max, unsigned int step, unsigned int cur_count)
	{
		this->value_min = value_min;
		this->value_max = value_max;
		this->step = step;
		this->cur_count = cur_count;
	}

	int step_count()
	{
		return cur_count += step;
	}


};

int main()
{
	setlocale(0, "");

	Counter water;
	water.
}

