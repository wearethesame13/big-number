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


void ScanQFloat(QFloat& x)
{
	cout << "Nhap so thuc: ";
	string BigFloat;
	cin >> BigFloat;
	bool* bit = StringFloatToBit(BigFloat);
	setBitQFloat(x, bit);
}
