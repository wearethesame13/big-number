#include <iostream>
#include "QInt.h"
using namespace std;

bool* DecToBin(QInt x)
{
	bool *y = new bool[128];
	for (int i = 0; i < 128; i++)
	{
		y[i] = (x.data[i/32] >> (31 - i % 32)) & 1;
	}
	return y;
}

void setBitQInt(QInt &x, bool* bit)
{
	for (int i = 0; i < 128; i++)
	{
		x.data[i / 32] = (bit[i] << (31 - i % 32)) | x.data[i / 32];
	}
}

QInt BinToDec(bool* bit)
{
	QInt Dec;
	for (int i = 0; i < 128; i++)
	{
		Dec.data[i / 32] = (bit[i] << (31 - i % 32)) | Dec.data[i / 32];
	}
	return Dec;
}


int main()
{
	QInt a;
	bool b[128] = { 0 };
	for (int i = 0; i < 128; i++)
	{
		b[i] = rand() % 2 + 0;
	}
	setBitQInt(a, b);
	bool* c = NULL;
	c = DecToBin(a);
	for (int i = 0; i < 128; i++)
	{
		cout << c[i];
	}
	return 0;
}