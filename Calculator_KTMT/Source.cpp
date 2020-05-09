#include "QInt.h"
int main()
{
	QInt a, b;
	cout << "Nhap a: ";
	string str1, str2;
	cin >> str1;
	ScanQInt(a,str1);
	cout << "Nhap a: ";
	cin >> str2;
	ScanQInt(b,str2);
	QInt result;
	result = -a;
	cout<<PrintQInt(a);
	system("pause");
	return 0;
}