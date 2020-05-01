#include "Function.h"
#include "BinHex.h"
int main()
{
	QInt a;
	a.data[0] = 0;
	a.data[1] = 0;
	a.data[2] = 0;
	a.data[3] = 0;
	char* b = DecToHex(a);
	std::cout << b;
	delete[]b;
	return 0;
}