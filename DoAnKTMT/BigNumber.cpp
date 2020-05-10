#include "BigNumber.h"
#include <iostream>

//Chia 2
string div2(string obj)
{
	string result = "";
	int temp = 0;
	for (int i = 0; i < obj.length(); i++)
	{
		temp = temp * 10 + (int)obj[i] - 48;
		result = result + (char)(temp / 2 + 48);
		temp = temp - (temp / 2) * 2;
	}
	while (result[0] == '0') result.erase(result.begin());
	if (result == "") result = "0";
	return result;
}

//Xu ly bu 2
void TwoCompliment(string &StrBit) {
	for (int i = 0; i < StrBit.size(); i++)
		if (StrBit[i] == '0') StrBit[i] = '1';
		else StrBit[i] = '0';
	//Cong bit 1
	int rem = 1;
	

	for (int i = StrBit.size() - 1; i >= 0; i--)
	{
		if (StrBit[i] == '0')
		{
			StrBit[i] = '1';
			break;
		}
		else
			StrBit[i] = '0';
	}
	/*int i = StrBit.size();
	while ((rem != 0) && (i > 0))
	{
		if (StrBit[i] == '0')
		{
			StrBit[i] = '1';
			rem = 0;
		}
		else
			StrBit[i] = '0';
		i--;
	}*/
}

//Giai bu 2
void DeTwoCompliment(bool* bit)
{
	int rem = 1;
	int i = 128 - 1;
	while ((rem != 0) && (i > 0))
	{
		if (bit[i] == 0)
		{
			bit[i] = 1;
		}
		else
		{
			bit[i] = 0;
			rem = 0;
		}
		i--;
	}

	for (int j = 0; j < 128; j++)
	{
		if (bit[j] == 1)
			bit[j] = 0;
		else
			bit[j] = 1;
	}
	

}

//Doi so nguyen thanh he 2 
string StringIntToBit(string x) {

	bool negative = false;
	if (x[0] == '-')
	{
		negative = true;
		x.erase(x.begin());
	}

	string temp;
	do {
		if (((int)x[x.size() - 1] - 48) % 2 == 0)
			temp.push_back('0');
		else
			temp.push_back('1');
		x = div2(x);
	} while (x != "0");

	reverse(temp.begin(), temp.end());
	while (temp[0] == '0') temp.erase(temp.begin());
	if (temp == "") temp = "0";
	if (negative == true)
	{
		TwoCompliment(temp);
	}
	return temp;
}

//Them bit khong vao dau
bool* InsertPreBit(string Num, string tempBit)
{
	bool negative = false;
	if (Num[0] == '-')
	{
		negative = true;
	}
	bool* bit = new bool[128];
	int tempSize = tempBit.size();

	for (int i = 0; i < 128; i++)
	{

		if (i >= 128 - tempSize)
			if (tempBit[i - (128 - tempSize)] == '1')
			{
				bit[i] = 1;
				continue;
			}
			else
				bit[i] = 0;
		else if (negative)
			bit[i] = 1;
		else
			bit[i] = 0;
	}
	return bit;
}

//Nhan so lon cho 2
string multiply2(string bigNum)
{
	int temp; 
	int rem = 0;
	string result;

	for (int i = bigNum.size() - 1; i >= 0; i--)
	{
		temp =(int) (bigNum[i] - '0') * 2 + rem;
		rem = temp / 10;
		temp = temp % 10;
		result = (char)(temp + '0') + result;
	}

	if (rem)
		result = (char)(rem + '0') + result;

	return result;
}

//cong A va B duong, hoac A duong B am |A| > |B|
string add(string numA, string numB)
{
	//Neu co 1 trong 2 so am, thi so B se la so am
	bool negative = false;
	if (numB[0] == '-')
	{
		negative = true; numB[0] = '0';
	}
	while (numA.size() > numB.size()) numB = '0' + numB;
	while (numA.size() < numB.size()) numA = '0' + numA;
	int tempA, tempB, currResult;
	int rem = 0;
	string result;
	if (negative)
	{
		for (int i = numA.size() - 1; i >= 0; i--)
		{
			tempA = (int)numA[i] - '0';
			tempB = (int)numB[i] - '0';

			currResult = tempA - tempB - rem;
			rem = currResult / 10;
			currResult = currResult % 10;
			result = (char)(currResult + '0') + result;
		}

	}
	else {
		for (int i = numA.size() - 1; i >= 0; i--)
		{
			tempA = (int)numA[i] - '0';
			tempB = (int)numB[i] - '0';

			currResult = tempA + tempB + rem;
			rem = currResult / 10;
			currResult = currResult % 10;
			result = (char)(currResult + '0') + result;
		}

		if (rem) result = (char)(rem + '0') + result;
	}
	while (result[0] == '0') result.erase(result.begin());
	return result;
}

//Thuc hien nhan 2 N lan
string RepeatedMul2(string num, int time)
{
	for (int i = 0; i < time; i++)
	{
		num = multiply2(num);
	}
	return num;
}

//Doi day bit(bool) thanh bigInt(string)
string StrBitToInt(bool* bit)
{
	bool negative = false;
	if (bit[0] == 1)
	{
		negative = true;
		DeTwoCompliment(bit);
	}
	string result = "";
	string temp = "1";
	int lo = 0, hi = 0;
	for (int i = 128 - 1; i >= 0; i--)
	{
		if (bit[i] == 1)
		{
			temp = RepeatedMul2(temp, hi - lo);
			result = add(result, temp);
			lo = hi;
		}
		hi++;
	}

	if (negative)
		result = '-' + result;
	if (result == "")
		result = "0";
	return result;

}



