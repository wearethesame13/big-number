#include "QInt.h"
QInt::QInt()
{
	for (int i = 0; i < 3; i++)
	{
		data[i] = 0;
	}
}
QInt::~QInt()
{

}
QInt& QInt::operator=(const QInt b)
{
	for (int i = 0; i < 4; i++)
	{
		data[i] = b.data[i];
	}
	return *this;
}
QInt QInt::TwoComplement(const QInt a)
{
	for (int i = 0; i < 4; i++)
	{
		data[i] = (-1) * data[i];
	}
}
QInt TwoCompliment(const QInt a)
{
	QInt result;
	for (int i = 0; i < 4; i++)
	{
		result.data[i] = ~a.data[i];
	}
	QInt bit1;
	bit1.data[3] = 1;
	return result + bit1;
}
bool operator<(const QInt a, const QInt b)
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
bool operator==(const QInt a, const QInt b)
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
bool operator>(const QInt a, const QInt b)
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
bool operator<=(const QInt a, const QInt b)
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
bool operator>=(const QInt a, const QInt b)
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
QInt operator+(const QInt a, const QInt b)
{
	int nho = 0;
	QInt result;

	for (int i = 127; i >= 0; i--)
	{
		int t = (int)getBitInt(a.data[i / 32], i % 32) + getBitInt(b.data[i / 32], i % 32) + nho;
		if (t == 3)
		{
			(1 << (i % 32)) | result.data[i / 32];
			nho = 1;
		}
		if (t == 2)
		{
			(~(1 << (i % 32))) | result.data[i / 32];
			nho = 1;
		}
		if (t == 1)
		{
			(1 << (i % 32)) | result.data[i / 32];
			nho = 0;
		}
		if (t == 0)
		{
			(~(1 << (i % 32))) | result.data[i / 32];
			nho = 0;
		}
	}
	if (nho == 1)
	{
		cout << "Xay ra hien tuong tran so" << endl;
	}
	return result;
}
QInt operator-(const QInt a, const QInt b)
{
	return a + TwoCompliment(b); // cộng với bù 2 của b
}
QInt operator/(QInt Q, QInt M)
{
	int k = 128;
	QInt A;
	int bit = (Q.data[0] >> 31) & 1;
	QInt num_zero;
	//TH1: Q < 0
	if (bit == 1)
	{
		for (int i = 0; i < k; i++)
		{
			A.data[i / 32] = A.data[i / 32] | (1 << (i % 32));
		}
	}
	//Th2: Q>0 Tất cả các bit bằng 0, ta không cần gán
	while (k > 0)
	{
		int bit = (Q.data[0] >> 0) & 1;
		Q = Q << 1;
		A = A << 1;
		A.data[3] = A.data[3] | bit;
		A = A - M;
		if (A < num_zero)
		{
			Q.data[3] = Q.data[3] | 0;
			A = A + M;
		}
		else
		{
			Q.data[3] = Q.data[3] | 1;
		}
		k = k - 1;
	}
	return Q;
}

QInt operator%(QInt M, QInt Q)
{
	int k = 128;
	QInt A;
	int bit = (Q.data[0] >> 31) & 1;
	QInt num_zero;
	//TH1: Q < 0
	if (bit == 1)
	{
		for (int i = 0; i < k; i++)
		{
			A.data[i / 32] = A.data[i / 32] | (1 << (i % 32));
		}
	}
	//Th2: Q>0 Tất cả các bit bằng 0, ta không cần gán
	while (k > 0)
	{
		int bit = (Q.data[0] >> 0) & 1;
		Q = Q << 1;
		A = A << 1;
		A.data[3] = A.data[3] | bit;
		A = A - M;
		if (A < num_zero)
		{
			Q.data[3] = Q.data[3] | 0;
			A = A + M;
		}
		else
		{
			Q.data[3] = Q.data[3] | 1;
		}
		k = k - 1;
	}
	return A;
}

vector<int> operator*(QInt a, QInt b)
{
	QInt num_zero;
	vector<int> result;
	int k = 128;
	QInt A;
	QInt Q = b;
	int Q0, Q1 = 0;
	if (a == num_zero || b == num_zero)
	{
		result.push_back(0);
		return result;
	}
	while (k > 0)
	{
		Q0 = getBitInt(Q.data[3], 31);
		if ((Q0 == 1) && (Q1 == 0))
		{
			A = A - a;
		}
		if ((Q0 == 0) && (Q1 == 1))
		{
			A = A + a;
		}

		Q1 = Q0;
		int lastBit = A.data[3] & 1;
		Q = Q >> 1;
		A = A >> 1;
		Q.data[0] = Q.data[0] | (lastBit << 127);
		k--;
	}

	for (int i = 0; i < k; i++)
	{
		result.push_back(getBitInt(A.data[i / 32], (i % 32)));
	}
	for (int i = 127; i < 256; i++)
	{
		result[i] = getBitInt(Q.data[(i - 128) / 32], ((i - 128) % 32));
	}
	return result;
}
