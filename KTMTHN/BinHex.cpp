#include "BinHex.h"

char* BinToHex(bool* bit)
{
	//Tạo mảng lưu trữ kí tự tạm thời
	std::vector<char> tmp;
	for (int i = 0; i < 128; i+=4)
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
