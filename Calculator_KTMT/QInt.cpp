#include "QInt.h"
QInt::QInt()
{
	for (int i = 0; i < 4; i++)
	{
		data[i] = 0;
	}
}

QInt::~QInt()
{

}

bool* DecToBin(QInt x)
{
	bool* y = new bool[128];
	for (int i = 0; i < 128; i++)
	{
		y[i] = (x.data[i / 32] >> (31 - i % 32)) & 1;
	}
	return y;
}

void setBitQInt(QInt& x, bool* bit)
{
	for (int i = 0; i < 128; i++)
	{
		x.data[i / 32] = (bit[i] << (31 - i % 32)) | x.data[i / 32];
	}
}

QInt BinToDec(bool* bit)
{
	QInt Dec;
	for (int i = 0; i < 128; i++)
	{
		Dec.data[i / 32] = (bit[i] << (31 - i % 32)) | Dec.data[i / 32];
	}
	return Dec;
}

void ScanQInt(QInt& x, string bigInt)
{
	bool* bit = NULL;
	bit = InsertPreBit(bigInt, StringIntToBit(bigInt));
	setBitQInt(x, bit);
	delete[] bit;
}

string PrintQInt(QInt x)
{
	bool* bit = DecToBin(x);
	std::string num;
	num = StrBitToInt(bit);
	return num;
}

char* BinToHex(bool* bit)
{
	//Tạo mảng lưu trữ kí tự tạm thời
	std::vector<char> tmp;
	for (int i = 0; i < 128; i += 4)
	{
		//Xét từng nhóm 4 bit
		tmp.push_back(GroupBinToHex(&bit[i]));
	}
	//Tạo mảng kết quả
	char* result = vectorToStr(tmp);
	return result;
}

char GroupBinToHex(bool* bit)
{
	int sum = 0;
	//Chuyễn đổi dãy bit bin sang decimal
	for (int i = 0; i < 4; i++)
	{
		sum += bit[i] * pow(2, 3 - i);
	}
	//Trả về kí tự hex tương ứng
	return HexIndex(sum);
}

char HexIndex(int index)
{
	switch (index)
	{
	case 0:
		return '0';
		break;
	case 1:
		return '1';
		break;
	case 2:
		return '2';
		break;
	case 3:
		return '3';
		break;
	case 4:
		return '4';
		break;
	case 5:
		return '5';
		break;
	case 6:
		return '6';
		break;
	case 7:
		return '7';
		break;
	case 8:
		return '8';
		break;
	case 9:
		return '9';
		break;
	case 10:
		return 'A';
		break;
	case 11:
		return 'B';
		break;
	case 12:
		return 'C';
		break;
	case 13:
		return 'D';
		break;
	case 14:
		return 'E';
		break;
	case 15:
		return 'F';
		break;
	default:
		return NULL;
		break;
	}
}

char* DecToHex(QInt x)
{
	bool* groupBit = new bool[4];
	std::vector<char> tmp;
	for (int i = 0; i < 32; i++)
	{
		//Lấy từng nhóm 4 bit
		for (int j = 0; j < 4; j++)
		{
			groupBit[j] = getBitInt(x.data[(4 * i + j) / 32], (4 * i + j) % 32);
		}
		tmp.push_back(GroupBinToHex(groupBit));
	}
	delete[]groupBit;
	char* result = vectorToStr(tmp);
	return result;
}

bool getBitInt(int value, int pos)
{
	return (value >> (31 - pos)) & 1;
}

char* vectorToStr(std::vector<char> x)
{
	while (x[0] == '0')
	{
		if (x.begin() == x.end() - 1)
		{
			break;
		}
		x.erase(x.begin());
	}
	char* result = new char[x.size() + 1];
	for (int i = 0; i < x.size(); i++)
	{
		result[i] = x[i];
	}
	result[x.size()] = '\0';
	return result;
}
// Ham chuyen tu nhi phan sang thap phan
void comDecToBin(int& x, int a[32])
{
	for (int i = 0; i < 32; i++)
	{
		a[i] = 0;
	}
	int index = 0;
	do {
		a[index] = x % 2;
		x = x / 2;
		index++;

	} while (x > 0);

}
// Ham chuyen doi nhi phan sang thap phan
void comBinToDec(int& x, int a[32])
{
	x = 0;
	for (int index = 0; index < 32; index++)
	{
		x += a[index] * pow(2, index);
	}
}
// Định nghĩa toán tử AND "&"
QInt operator&(QInt a, QInt b)
{
	QInt x;
	for (int i = 0; i < 4; i++)
	{
		int aCom[32], bCom[32];
		int xCom[32];
		comDecToBin(a.data[i], aCom);
		comDecToBin(b.data[i], bCom);

		for (int index = 0; index < 32; index++)
		{
			if (a.data[index] == 1 && b.data[index] == 1) xCom[index] = 1;
			else xCom[index] = 0;
		}
		comBinToDec(x.data[i], xCom);
	}
	return x;
}
// Định nghĩa toán tử OR "|"
QInt operator|(QInt a, QInt b)
{
	QInt x;
	for (int i = 0; i < 4; i++)
	{
		int aCom[32], bCom[32];
		int xCom[32];
		comDecToBin(a.data[i], aCom);
		comDecToBin(b.data[i], bCom);

		for (int index = 0; index < 32; index++)
		{
			if (a.data[index] == 0 && b.data[index] == 0) xCom[index] = 0;
			else xCom[index] = 1;
		}
		comBinToDec(x.data[i], xCom);
	}
	return x;
}
// Định nghĩa toán tử XOR "^"
QInt operator^(QInt a, QInt b)
{
	QInt x;
	for (int i = 0; i < 4; i++)
	{
		int aCom[32], bCom[32];
		int xCom[32];
		comDecToBin(a.data[i], aCom);
		comDecToBin(b.data[i], bCom);

		for (int index = 0; index < 32; index++)
		{
			if (a.data[index] == b.data[index]) xCom[index] = 0;
			else xCom[index] = 1;
		}
		comBinToDec(x.data[i], xCom);
	}
	return x;
}
// Định nghĩa toán tử NOT "~"
QInt operator~(QInt a)
{
	QInt x;
	for (int i = 0; i < 4; i++)
	{
		int aCom[32];
		int xCom[32];
		comDecToBin(a.data[i], aCom);
		for (int index = 0; index < 32; index++)
		{
			if (a.data[index] == 1) xCom[index] = 0;
			else xCom[index] = 1;
		}
		comBinToDec(x.data[i], xCom);
	}
	return x;
}


// Định nghĩa toán tử dịch phải ">>"
QInt operator>>(QInt& a, int n)
{
	int aOver[128];
	int aCom[32];
	int index = 0;

	for (int i = 0; i < 4; i++)
	{
		comDecToBin(a.data[i], aCom);
		aOver[index++] = aCom[index % 32];

	}
	for (int i = n; i < 128; i++)
	{
		aOver[i] = aOver[i - n];
	}
	for (int i = 0; i < n; i++)
	{
		aOver[i] = 0;
	}
	int reIndex = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			aCom[j] = aOver[reIndex * i + j];
		}
		comBinToDec(a.data[i], aCom);
		reIndex++;
	}
	return a;
}

// Định nghĩa toán tử dịch trái "<<"
QInt operator<<(QInt& a, int n)
{

	int aOver[128];
	int aCom[32];
	int index = 0;

	for (int i = 0; i < 4; i++)
	{
		comDecToBin(a.data[i], aCom);
		aOver[index++] = aCom[index % 32];

	}
	for (int i = 0; i < 128 - n; i++)
	{
		aOver[i] = aOver[i + n];
	}
	for (int i = 128 - n; i < 128; i++)
	{
		aOver[i] = 0;
	}
	int reIndex = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			aCom[j] = aOver[reIndex * i + j];
		}
		comBinToDec(a.data[i], aCom);
		reIndex++;
	}
	return a;
}

// Hàm xoay phải
QInt QInt::rol()
{
	int aOver[128];
	int aCom[32];
	int index = 0;

	for (int i = 0; i < 4; i++)
	{
		comDecToBin(this->data[i], aCom);
		aOver[index++] = aCom[index % 32];

	}
	int a0 = aOver[0];
	for (int i = 0; i < 127; i++)
	{
		aOver[i] = aOver[i + 1];
	}
	aOver[127] = a0;
	int reIndex = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			aCom[j] = aOver[reIndex * i + j];
		}
		comBinToDec(this->data[i], aCom);
		reIndex++;
	}
	return *this;
}

// Hàm xoay trái
QInt QInt::ror()
{
	int aOver[128];
	int aCom[32];
	int index = 0;

	for (int i = 0; i < 4; i++)
	{
		comDecToBin(this->data[i], aCom);
		aOver[index++] = aCom[index % 32];

	}
	int a127 = aOver[127];
	for (int i = 1; i < 128; i++)
	{
		aOver[i] = aOver[i - 1];
	}
	aOver[0] = a127;
	int reIndex = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 32; j++)
		{
			aCom[j] = aOver[reIndex * i + j];
		}
		comBinToDec(this->data[i], aCom);
		reIndex++;
	}
	return *this;
}

bool* xuLyChuoiBit(std::string bo)
{
	if (bo.length() > 128)
	{
		return nullptr;
	}
	bool* result = new bool[128];
	if (bo.length() <= 128)
	{
		while (bo.length() < 128)
		{
			bo = '0' + bo;
		}
		for (int i = 0; i < 128; i++)
		{
			result[i] = bo[i] - ('0' - '\0');
		}
	}
	return result;
}

