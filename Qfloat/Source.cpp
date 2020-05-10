#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Qfloat.h"

using namespace std;


int main()
{
	srand(time(NULL));
	Qfloat a;
	bool* c = new bool[128];
	for (int i = 0; i < 128; i++)
	{
		c[i] = 0;
	}
	c[0] = 0;
	c[1] = 1;
	c[15] = 1;
	c[16] = 1;
	c[18] = 1;
	setBitQfloat(a, c);
	PrintQfloat(a);
	return 0;
}