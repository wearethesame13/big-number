#include <iostream>
#include "QInt.h"
#include <fstream>
#include "FileProcess.h"
using namespace std;


int main(int argc, char* args[])
{
	std::fstream fin, fout;
	fin.open(args[1], std::ios::in);
	fout.open(args[2], std::ios::out);
	std::string line, output;
	while (!fin.eof()) {
		getline(fin, line);
		if (count(line.begin(), line.end(), ' ') == 2)
		{
			output = convert(line);
		}
		else
		{
			output = operate(line);
		}
		fout << output << endl;
	}
	fin.close();
	fout.close();
	// Menu
	cout << "====================================" << endl;
	cout << "=   BIEU DIEN VA TINH TOAN SO HOC  =" << endl;
	cout << "=         BANG QINT 16 BYTE        =" << endl;
	cout << "=                                  =" << endl;
	cout << "=      Nhom wearethesame 18/2      =" << endl;
	cout << "====================================" << endl;
	int stt;
	QInt bai1va2;
	string tmp;
	QInt a, b;
	QInt result;
	while (true)
	{
		cout << "\nMenu chuc nang chinh" << endl;
		cout << "0.  Thoat\n"
			<< "1.  Nhap so nguyen he 10\n"
			<< "2.  Xuat so nguyen he 10\n"
			<< "3.  Doi so he 10 sang he 2\n"
			<< "4.  Doi so he 2 sang he 10\n"
			<< "5.  Doi so he 2 sang he 16\n"
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
			cout << "Nhap day bit < 128: ";
			cin >> tmp;
			cout << BinToHex(xuLyChuoiBit(tmp)) << endl;
			break;
		case(6):
			cout << DecToHex(bai1va2) << endl;
			break;
		case(7):
			//Them chuc nang
			ScanQInt(a);
			ScanQInt(b);
			result = a / b;
			PrintQInt(result);
			break;
		case(8):
			//Them chuc nang
			ScanQInt(a);
			ScanQInt(b);
			if (a<b)
			{
				cout << "a<b";
			}
			if (a>b)
			{
				cout << "a>b";
			}
			if (a<=b)
			{
				cout << "a<=b";
			}
			if (a>=b)
			{
				cout << "a>=b";
			}
			if (a==b)
			{
				cout << "a=b";
			}
			break;
		case(9):
			//Them chuc nang
			ScanQInt(a);
			ScanQInt(b);
			cout<<"a & b = ";
			PrintQInt(a&b);
			cout<<"a | b = ";
			PrintQInt(a|b);
			cout<<"a ^ b = ";
			PrintQInt(a^b);
			cout<<"~a = ";
			PrintQInt(~a);
			break;
		case(10):
			//Them chuc nang
			ScanQInt(a);
			int n;
			cout<<"Dich phai bao nhieu bit: ";
			cin>>n;
			cout<<"a >> "<<n<<" =";
			PrintQInt(a>>n);
			cout<<"Dich trai bao nhieu bit: ";
			cin>>n;
			cout<<"a << "<<n<<" =";
			PrintQInt(a << n);
			cout<<"Xoay phai bao nhieu bit: ";
			cin>>n;
			cout<<"a ror "<<n<<" =";
			PrintQInt(a.ror(n));
			cout<<"xoay trai bao nhieu bit: ";
			cin>>n;
			cout<<"a rol "<<n<<" =";
			PrintQInt(a.rol(n));
			break;
		default:
			break;
		}
	}
	return 0;

}