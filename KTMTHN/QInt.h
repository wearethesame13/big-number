#pragma once
class QInt
{
public:
	int data[4];
	QInt& operator=(const QInt& b);
	friend QInt operator-(const QInt a);
	friend bool operator<(const QInt& a, const QInt& b);
	friend bool operator==(const QInt& a, const QInt& b);
	friend bool operator>(const QInt& a, const QInt& b);
	friend bool operator<=(const QInt& a, const QInt& b);
	friend bool operator>=(const QInt& a, const QInt& b);

};