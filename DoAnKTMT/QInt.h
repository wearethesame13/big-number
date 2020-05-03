#pragma once
#include <iostream>
class QInt
{
public:
	int data[4];
	QInt();
	~QInt();
};

bool* DecToBin(QInt x);
void setBitQInt(QInt &x, bool* bit);
QInt BinToDec(bool* bit);
void ScanQInt(QInt& x);
void PrintQInt(QInt x);
