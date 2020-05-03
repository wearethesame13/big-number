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

void ScanQFloat(QFloat& x)
{
	cout << "Nhap so thuc: ";
	string BigFloat;
	cin >> BigFloat;

}
