#include "QFloat.h"

QFloat::QFloat()
{
	for (int i = 0; i < 4; i++)
	{
		data[i] = 0;
	}
}

QFloat::~QFloat()
{
}

void setBitQFloat(QFloat& x, bool* bit)
{
	for (int i = 0; i < 128; i++)
	{
		x.data[i / 32] = (bit[i] << (31 - i % 32)) | x.data[i / 32];
	}
}


QFloat QFloat :: ScanQFloatBase10(string str)
{
	bool* bit = StringFloatToBit(str);
	setBitQFloat(*this, bit);
}
QFloat QFloat :: ScanQFloat(string str, int base1)
{
	if(base1 == 10) ScanQFloatBase10(str);
	else {
		bool *bit = new bool[128];
		for(int index = 0; index<128; index++)
		{
			if(str[index] == '0') bit[index] = 0;
			else bit[index] = 1;
		}
		setBitQFloat(*this,bit);
	}
}
QFloat QFloat :: BinToDec(bool *bit)
{
	for (int i = 0; i < 128; i++)
	{
		this->data[i / 32] = (bit[i] << (31 - i % 32)) | this->data[i / 32];
	}
	return *this;
}

bool* DecToBin(Qfloat x)
{
	bool* result = new bool[128];
	for (int i = 0; i < 128; i++)
	{
		result[i] = getBitInt(x.data[i / 32], i % 32);
	}
	return result;
}
