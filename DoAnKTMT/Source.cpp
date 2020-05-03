#include <iostream>
#include "QInt.h"
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{
	/*srand(time(NULL));
	QInt a;
	bool* b = new bool[128];
	for (int i = 0; i < 128; i++)
	{
		b[i] = 0;
	}
	b[127] = 1;
	b[9] = 1;
	setBitQInt(a, b);
	bool* c = NULL;
	c = DecToBin(a);
	for (int i = 0; i < 128; i++)
	{
		cout << c[i];
	}*/

	QInt x;
	ScanQInt(x);
	PrintQInt(x);
	return 0;
}