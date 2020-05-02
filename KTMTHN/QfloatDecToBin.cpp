#include "QfloatDecToBin.h"

bool* DecToBin(Qfloat x)
{
	bool* result = new bool[128];
	for (int i = 0; i < 128; i++)
	{
		result[i] = getBitInt(x.data[i / 32], i % 32);
	}
	return result;
}
