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
};
void setBitQFloat(QFloat& x, bool* bit);

void ScanQFloat(QFloat& x);

