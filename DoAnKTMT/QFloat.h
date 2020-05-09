#pragma once
#include "BigNumber.h"
#include <iostream>
using namespace std;
class QFloat
{
public:
	int data[4];
	QFloat();
	~QFloat();
	QFloat BinToDec(bool *bit);
	QFloat ScanQFloat(string str, int base1);
   	QFloat ScanQFloatBase10( string str);
};
void setBitQFloat(QFloat& x, bool* bit);
bool* DecToBin(Qfloat x);
