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
};
void setBitQFloat(QFloat& x, bool* bit);

void ScanQFloat(QFloat& x);

