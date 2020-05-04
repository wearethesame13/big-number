#pragma once
#include <iostream>
#include "BinHex.h"
using namespace std;
class QInt
{
public:
	int data[4];
	QInt();
	~QInt();
	QInt& operator=(const QInt b);
	QInt TwoComplement(const QInt a);
	friend bool operator<(const QInt a, const QInt b);
	friend bool operator==(const QInt a, const QInt b);
	friend bool operator>(const QInt a, const QInt b);
	friend bool operator<=(const QInt a, const QInt b);
	friend bool operator>=(const QInt a, const QInt b);
	friend QInt operator+(const QInt a, const QInt b);
	friend QInt operator-(const QInt a, const QInt b);
	friend vector<int> operator*(QInt a, QInt b);
	friend QInt operator/(QInt M, QInt Q);
	friend QInt operator%(QInt M, QInt Q);
};