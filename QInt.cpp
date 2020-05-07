#include "QInt.h"
// Định nghĩa toán tử AND "&"
QInt operator&(QInt a, QInt b)
{
	
	bool* x = DecToBin(a);
	bool* y = DecToBin(b);
	bool* over = new bool[128];
	for (int index = 0; index< 128; index++)
	{
			if (x[index] == 1 && y[index] == 1) over[index] = 1;
			else over[index] = 0;
		
	}
	return BinToDec(over);
}
// Định nghĩa toán tử OR "|"
QInt operator|(QInt a, QInt b)
{
	
	bool* x = DecToBin(a);
	bool* y = DecToBin(b);
	bool* over = new bool[128];
	for (int index = 0; index < 128; index++)
	{
		if (x[index] == 0 && y[index] == 0) over[index] = 0;
		else over[index] = 1;
	}
	return BinToDec(over);
}
// Định nghĩa toán tử XOR "^"
QInt operator^(QInt a, QInt b)
{
	
	bool* x = DecToBin(a);
	bool* y = DecToBin(b);
	bool* over = new bool[128];
	for (int index = 0; index < 128; index++)
	{
		if (x[index] == y[index] ) over[index] = 0;
		else over[index] = 1;

	}
	return BinToDec(over);
}
// Định nghĩa toán tử NOT "~"
QInt operator~(QInt a)
{
	
	bool* x = DecToBin(a);
	bool* over = new bool[128];
	for (int index = 0; index < 128; index++)
	{
		if (x[index] == 1 ) over[index] = 0;
		else over[index] = 0;

	}
	return BinToDec(over);
}


// Định nghĩa toán tử dịch phải ">>"
QInt operator>>(QInt a, int n)
{
	bool* x = DecToBin(a);
	
	if (x[0] == 0)
	{
		for (int index = n; index < 128; index++)
		{
			x[index] = x[index-n];
		}
		for (int index = 0; index < n; index++)
		{
			x[index] = 0;
		}
	}
	if (x[0] == 1)
	{
		for (int index = n + 1; index < 128; index++)
		{
			x[index] = x[index - n];
		}
		for (int index = 1; index < n + 1; index++)
		{
			x[index] = 0;
		}

	}
	return BinToDec(x);
}

// Định nghĩa toán tử dịch trái "<<"
QInt operator<<(QInt a, int n)
{
	bool* x = DecToBin(a);
	if (x[0] == 0)
	{
		for (int index = 0; index < 128 -n ; index++)
		{
			x[index] = x[index + n];
		}
		for (int index = 128 - n; index < 128; index++)
		{
			x[index] = 0;
		}
	}
	if (x[0] == 1)
	{
		for (int index = 1; index < 128 - n; index++)
		{
			x[index] = x[index + n];
		}
		for (int index = 128 - n; index < 128; index++)
		{
			x[index] = 0;
		}

	}
	return BinToDec(x);
}

// Hàm xoay trái
QInt QInt::rol( int n)
{
	bool* x = DecToBin(*this);
	bool* a = new bool[n];
	for (int index = 0; index < n; index++)
	{
		a[index] = x[index];
	}
	for (int index = 0; index < 128 - n; index++)
	{
		x[index] = x[index + n];
	}
	int indexOfn = n-1;
	for (int index = 128 - n; index < 128; index++)
	{
		x[index] = a[indexOfn];
		indexOfn--;
	}
	return BinToDec(x);
}

// Hàm xoay phải
QInt QInt::ror( int n)
{
	bool* x = DecToBin(*this);
	bool* a = new bool[n];
	for (int index = 128 - n; index < 128; index++)
	{
		a[index] = x[index];
	}
	for (int index = n; index < 128; index++)
	{
		x[index] = x[index - n];
	}
	int indexOfn = n - 1;
	for (int index = 0; index < n; index++)
	{
		x[index] = a[indexOfn];
		indexOfn--;
	}
	return BinToDec(x);
}