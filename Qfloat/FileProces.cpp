#include "FileProces.h"
#include "Qfloat.h"

string convert(string line)
{
	string base1, base2, num;
	Qfloat x;

	istringstream stream;
	stream.str(line);
	stream >> base1 >> base2 >> num;
	string result = "";

	if (base1 == "10")
		ScanQfloat(x, num);
	else if (base1 == "2")
		ScanBin(x, num);

	if (base2 == "2")
		result = GetBin(x);
	else if (base2 == "10")
		result = GetFloat(x);

	return result;
}