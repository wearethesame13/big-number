#include "FileProces.h"
#include "Qfloat.h"

void WorkWithFileQInt(string filename)
{
	std::fstream fin, fout;
	fin.open(filename, std::ios::in);
	fout.open("QInt_output.txt", std::ios::out);
	if (!fin)
	{
		cout << "No " << filename << " available" << endl;
		fout.close();
		return;
	}
	std::string line, output;
	while (!fin.eof()) {
		getline(fin, line);
		if (count(line.begin(), line.end(), ' ') == 2)
		{
			output = convertLineQInt(line);
		}
		else
		{
			output = operateLineQInt(line);
		}
		fout << output << endl;
	}
	fin.close();
	fout.close();
}

void WorkWithFileQfloat(string filename)
{
	std::fstream fin, fout;
	fin.open(filename, std::ios::in);
	fout.open("QFloat_output.txt", std::ios::out);
	if (!fin)
	{
		cout << "No " << filename << " available" << endl;
		fout.close();
		return;
	}
	std::string line, output;
	while (!fin.eof()) {
		getline(fin, line);
		output = convertLineQFloat(line);
		fout << output << endl;
	}
	fin.close();
	fout.close();
}

string convertLineQFloat(string line)
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

string convertLineQInt(string line)
{
	string base1, base2, num;
	QInt x;

	istringstream stream;
	stream.str(line);
	stream >> base1 >> base2 >> num;
	string result = "";

	{if (base1 == "10")
		ScanInt(x, num);
	else if (base1 == "2")
		ScanBin(x, num);
	else if (base1 == "16")
		ScanHex(x, num);
	}


	if (base2 == "2")
		result = convertDectoBin(x);
	else if (base2 == "10")
		result = convertBintoDec(x);
	else if (base2 == "16")
	{
		char* hex = DecToHex(x);
		result = hex;
	}
	else if (base2 == "~")
	{
		x = ~x;
		if (base1 == "2")
			result = convertDectoBin(x);
		else if (base1 == "10")
			result = convertBintoDec(x);
		else if (base1 == "16")
		{
			char* hex = DecToHex(x);
			result = hex;
		}

	}
	return result;
}

string operateLineQInt(string line)
{
	//xu li ket qua tu file: so sanh, tinh toan....
	
		string base, num1, num2, op;
		QInt x, y, z;
		istringstream stream;
		stream.str(line);
		stream >> base >> num1 >> op >> num2;
		bool flag = false, sosanh;
		if (base == "2")
		{
			ScanBin(x, num1);
			ScanBin(y, num2);
		}
		else if (base == "10")
		{
			ScanInt(x, num1);
			ScanInt(y, num2);
		}
		else if (base == "16")
		{
			ScanHex(x, num1);
			ScanHex(y, num2);
		}

		if (op == "+")
		{
			z = x + y;
		}
		else if (op == "-")
		{
			z = x - y;
		}
		else if (op == "*")
		{
			z = x * y;
		}
		else if (op == "/")
		{
			z = x / y;
		}
		else if (op == "&")
		{
			z = x & y;
		}
		else if (op == "|")
		{
			z = x | y;
		}
		else if (op == "^")
		{
			z = x ^ y;
		}
		else if (op == ">>")
		{
			z = x >> stoi(num2);
		}
		else if (op == "<<")
		{
			z = x << stoi(num2);
		}
		else if (op == "rol")
		{
			z = x.rol(stoi(num2));
		}
		else if (op == "ror")
		{
			z = x.ror(stoi(num2));
		}
		else if (op == "<")
		{
			sosanh = x < y;
			flag = true;
		}
		else if (op == ">")
		{
			sosanh = x > y;
			flag = true;
		}
		else if (op == "<=")
		{
			sosanh = x <= y;
			flag = true;
		}
		else if (op == ">=")
		{
			sosanh = x >= y;
			flag = true;
		}
		else if (op == "==")
		{
			sosanh = x == y;
			flag = true;
		}

		if (flag == true)
		{
			if (sosanh)
				return ("true");
			else
				return ("false");
		}

		string result = "";
		if (base == "2")
			result = convertDectoBin(z);
		else if (base == "10")
			result = convertBintoDec(z);
		else if (base == "16")
		{
			char* hex = DecToHex(z);
			result = hex;
		}


		return result;
	

}
