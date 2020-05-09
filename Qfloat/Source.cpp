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
		c[i] = rand()%2 + 0;
	}
	setBitQfloat(a, c);
	PrintQfloat(a);
	return 0;
}