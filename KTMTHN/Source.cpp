#include"BinHex.h"
#include"QfloatDecToBin.h"
#include<iostream>

int main()
{
	Qfloat a;
	a.data[0] = 0;
	a.data[1] = 255;
	a.data[2] = 0;
	a.data[3] = -1;
	bool* b = DecToBin(a);
	for (int i = 0; i < 128; i++)
	{
		std::cout << b[i];
	}
	delete[]b;
	return 0;
}