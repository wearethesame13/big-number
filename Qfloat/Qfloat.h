#pragma once
#include "StrFloat.h"
class Qfloat
{
public:
	int data[4];
	Qfloat();
	~Qfloat();
	void setBit(int pos, bool x);
	bool getBit(int pos);
	bool checkBitScope(int l, int r, int sd);
	int getTypeOfQfloat();
};

void setBitQfloat(Qfloat& x, bool* bit);
void setBitExponent(int& intExp, bool* bit);
void PrintQfloat(Qfloat x);
