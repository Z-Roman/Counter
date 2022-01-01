#include <iostream>
using namespace std;

class Counter
{
	unsigned int value_min;
	unsigned int value_max;
	unsigned int step;
	unsigned int cur_count;

public:

	int Set_min(unsigned int value_min)
	{
		this->value_min = value_min;
	}

	int Set_max(unsigned int value_max)
	{
		this->value_max = value_max;
	}

	int Set_cur_count(unsigned int cur_count)
	{
		this->cur_count = cur_count;
	}

	int Set_step(unsigned int step)
	{
		this->step = step;
	}

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

	void Print()
	{
		cout << "value_min = " << value_min << "\nvalue_max = " << value_max <<
			"\nstep = " << step << "\ncur_count = " << cur_count << "\n\n";
	}

};

int main()
{
	setlocale(0, "");

	Counter water;
	water.Print();
	Counter(0, 999, 5, 100);
	water.Print();
	
}

