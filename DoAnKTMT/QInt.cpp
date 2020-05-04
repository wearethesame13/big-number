#include "QInt.h"
#include "BigNumber.h"
QInt::QInt()
{
	for (int i = 0; i < 4; i++)
	{
		data[i] = 0;
	}
}

QInt::~QInt()
{

}

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

void ScanQInt(QInt& x)
{
	string bigInt;
	cout << "Nhap so lon: ";
	cin >> bigInt;
	bool* bit = NULL;
	bit = InsertPreBit(bigInt, StringIntToBit(bigInt));
	setBitQInt(x, bit);
	delete[] bit;
}

void PrintQInt(QInt x)
{
	bool* bit = DecToBin(x);
	string num;

	num = StrBitToInt(bit);
	cout << num << endl;
}

