#include "FileProcess.h"

string convert(string line)
{
	string base1, base2, num;
	QInt x;

	istringstream stream;
	stream.str(line);
	stream >> base1 >> base2 >> num;
	string result = "";

	if (base1 == "10")
		ScanInt(x, num);
	else if (base1 == "2")
		ScanBin(x, num);
	if (base2 == "2")
		result = convertDectoBin(x);
	else if (base2 == "10")
		result = convertBintoDec(x);
	return result;

}

string operate(string line)
{
	string base, num1, num2, op;
	QInt x, y;
	istringstream stream;
	stream.str(line);
	stream >> base >> num1 >>op >> num2;
	if (base == "2")
	{
		ScanBin(x, num1);
		ScanBin(y, num1);
	}
	else if (base == "10")
	{
		ScanInt(x, num1);
		ScanInt(y, num2);
	}
	string result = "";
	return result;
}
