#include <iostream>
#include "QInt.h"
#include "QFloat.h"
#include <ctime>
#include <cstdlib>
#include "BigNumber.h"
using namespace std;


int main()
{
	cout << "====================================" << endl;
	cout << "=   BIEU DIEN VA TINH TOAN SO HOC  =" << endl;
	cout << "=         BANG QINT 16 BYTE        =" << endl;
	cout << "=                                  =" << endl;
	cout << "=      Nhom wearethesame 18/2      =" << endl;
	cout << "====================================" << endl;
	int stt;
	QInt bai1va2;
	while (true)
	{
		cout << "\nMenu chuc nang chinh" << endl;
		cout << "0.  Thoat\n"
			<< "1.  Nhap so nguyen he 10\n"
			<< "2.  Xuat so nguyen he 10\n"
			<< "3.  Doi so he 10 sang he 2\n"
			<< "4.  Doi so he 2 sang he 10\n"
			<< "5.  Doi so he 10 sang he 16\n"
			<< "6.  Doi so he 10 sang he 16\n"
			<< "7.  Cac operator toan tu\n"
			<< "8.  Cac toan tu so sanh va gan\n"
			<< "9.  Cac toan tu AND, OR, XOR va NOT\n"
			<< "10. Cac phep dich va xoay\n"
			<< "-------------------------------\n";
		cout << "Ban chon: ";
		cin >> stt;
		switch (stt) {
		case(0):
			return 0;
		case(1):
			ScanQInt(bai1va2);
			cout << "Da luu vao QInt" << endl;
			break;
		case(2):
			cout << "QInt vua nhap: ";
			PrintQInt(bai1va2);
			break;
		case(3):
			//Them chuc nang
			break;
		case(4):
			//Them chuc nang
			break;
		case(5):
			//Them chuc nang
			break;
		case(6):
			//Them chuc nang
			break;
		case(7):
			//Them chuc nang
			break;
		case(8):
			//Them chuc nang
			break;
		case(9):
			//Them chuc nang
			break;
		case(10):
			//Them chuc nang
			break;
		default:
			break;
		}
	}
	return 0;

}