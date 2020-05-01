#include "QInt.h"
QInt& QInt::operator=(const QInt& b)
{
	for (int i = 0; i < 4; i++)
	{
		data[i] = b.data[i];
	}
	return *this;
}

QInt operator-(const QInt a)
{
	QInt result;
	for (int i = 0; i < 4; i++)
	{
		result.data[i] = a.data[i] * (-1);
	}
	return result;
}
bool operator<(const QInt& a, const QInt& b)
{
	for (int i = 3; i >= 0; i--)
	{
		if (a.data[i] < b.data[i])
		{
			return true;
		}
		else if (a.data[i] > b.data[i])
		{
			return false;
		}
		else if (a.data[i] == b.data[i])
		{
			continue;
		}
	}
	return false;
}
bool operator==(const QInt& a, const QInt& b)
{
	for (int i = 3; i >= 0; i--)
	{
		if (a.data[i] < b.data[i])
		{
			return false;
		}
		else if (a.data[i] > b.data[i])
		{
			return false;
		}
		else if (a.data[i] == b.data[i])
		{
			continue;
		}
	}
	return true;
}

bool operator>(const QInt& a, const QInt& b)
{
	for (int i = 3; i >= 0; i--)
	{
		if (a.data[i] < b.data[i])
		{
			return false;
		}
		else if (a.data[i] > b.data[i])
		{
			return true;
		}
		else if (a.data[i] == b.data[i])
		{
			continue;
		}
	}
	return false;
}
bool operator<(const QInt& a, const QInt& b)
{
	for (int i = 3; i >= 0; i--)
	{
		if (a.data[i] < b.data[i])
		{
			return true;
		}
		else if (a.data[i] > b.data[i])
		{
			return false;
		}
		else if (a.data[i] == b.data[i])
		{
			continue;
		}
	}
	return false;
}
bool operator>=(const QInt& a, const QInt& b)
{
	for (int i = 3; i >= 0; i--)
	{
		if (a.data[i] < b.data[i])
		{
			return false;
		}
		else if (a.data[i] > b.data[i])
		{
			return true;
		}
		else if (a.data[i] == b.data[i])
		{
			continue;
		}
	}
	return true;
}
bool operator<=(const QInt& a, const QInt& b)
{
	for (int i = 3; i >= 0; i--)
	{
		if (a.data[i] < b.data[i])
		{
			return true;
		}
		else if (a.data[i] > b.data[i])
		{
			return false;
		}
		else if (a.data[i] == b.data[i])
		{
			continue;
		}
	}
	return true;
}