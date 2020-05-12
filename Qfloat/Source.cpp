#include <iostream>
#include "FileProces.h"
using namespace std;


int main(int argc, char* args[])
{
	WorkWithFile(args[1], args[2], args[3]);

	cout << "====================================" << endl;
	cout << "=   BIEU DIEN VA TINH TOAN SO HOC  =" << endl;
	cout << "=       BANG QFLOAT 16 BYTE        =" << endl;
	cout << "=                                  =" << endl;
	cout << "=      Nhom wearethesame 18/2      =" << endl;
	cout << "====================================" << endl;
	int stt;
	Qfloat X;
	string tmp;
	while (true)
	{
		cout << "\nMenu chuc nang chinh" << endl;
		cout << "0.  Thoat\n"
			<< "1.  Nhap so thuc he 10\n"
			<< "2.  Xuat so thuc he 10\n"
			<< "3.  Doi so thuc he 10 sang he 2\n"
			<< "4.  Doi so thuc he 2 sang he 10\n";

		cout << "Ban chon: ";
		cin >> stt;
		switch (stt) {
		case(0):
			return 0;
		case(1):
			ScanQFloat(X);
			cout << "Da luu vao Qfloat" << endl;
			break;
		case(2):
			cout << "QFloat vua nhap: ";
			PrintQfloat(X);
			break;
		case(3):
			ScanQFloat(X);
			cout << "128bit Floating point: " << GetBin(X) << endl;
			break;
		case(4):
		{
			cout << "Nhap chuoi bit: ";
			string a;
			cin >> a;
			ScanQfloat(X, a);
			cout << "Decimal: " << GetFloat(X) << endl;
			break; 
		}
		default:
			break;
		}
	}
	return 0;
}