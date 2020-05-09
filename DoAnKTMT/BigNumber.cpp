#include "BigNumber.h"
#include <iostream>
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

string RepeatedMul2(string num, int time)
{
	for (int i = 0; i < time; i++)
	{
		num = multiply2(num);
	}
	return num;
}

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

string mul2Float(string BFloat) 
{
	//Chi nhan cho so duong va nho hon 1

	string result = "";
	int temp = 0, rem = 0;
	for (int i = BFloat.size() - 1; i >= 0; i--)
	{
		if (BFloat[i] == '.')
			break;

			temp = (int)(BFloat[i] - '0') * 2 + rem;
			rem = temp / 10;
			temp = temp % 10;
			result = (char)(temp + '0') + result;

	}
	result = "." + result;
	if (rem)
	{
		result = "1" + result;
	}
	else
	{
		result = "0" + result;
	}
	while (result[result.size() - 1] == '0') result.pop_back();
	if (result == "1.")
		result = "1.0";
	return result;

}

void BarFloat(string src, string& whole, string& dec)
{
	whole = "";
	dec = "";
	int i = 0;
	for (i; i < src.size(); i++)
	{
		if (src[i] == '.')
			break;
		else if (src[i] != '-')
			whole = whole + src[i];
	}
	i++;
	for (i; i < src.size(); i++)
		dec = dec + src[i];

	dec = "0." + dec;

	if (whole == "")
		whole = "0";
	if (dec == "0.")
		dec = "0.0";
}

string StringDecPartToBit(string decimal)
{
	//NOTE: ham doi phan nhi phan sang bit
	string result; int i = 0;
	while (decimal != "0.0" && i < 15)
	{
		decimal = mul2Float(decimal);
		if (decimal == "1.0")
		{
			result = result + "1";
			break;
		}
		else if (decimal[0] == '1')
		{
			result = result + "1";
			decimal[0] = '0';
		}
		else
			result = result + "0";

		i++;
	}
	return result;
}

bool* StringFloatToBit(string BigFloat)
{
	bool* bit = new bool[128];
	if (BigFloat != "0.0")
	{
		string whole, dec;
		BarFloat(BigFloat, whole, dec);
		string wholebit = StringIntToBit(whole);
		string decbit = StringDecPartToBit(dec);
		string FractionBit = wholebit + decbit;
		int E = wholebit.size() - 1;
		for (int i = 0; i < FractionBit.size(); i++)
		{
			if (FractionBit[i] == '1')
			{
				E = E - i;
				break;
			}
		}
		while (FractionBit[0] == '0') FractionBit.erase(FractionBit.begin());
		if (FractionBit[0] == '1') FractionBit.erase(FractionBit.begin());
		while (FractionBit.size() < 112)
		{
			FractionBit = FractionBit + "0";
		}

		string Expo = to_string(E);
		string bias = "16383";
		Expo = add(bias, Expo);
		string ExpoBit = StringIntToBit(Expo);
		while (ExpoBit.size() < 15)
		{
			ExpoBit = "0" + ExpoBit;
		}

		if (BigFloat[0] == '-')
			bit[0] = 1;
		else
			bit[0] = 0;

		for (int i = 0; i < 15; i++)
		{
			if (ExpoBit[i] == '0')
				bit[1 + i] = 0;
			else bit[1 + i] = 1;
		}

		for (int i = 0; i < 112; i++)
		{
			if (FractionBit[i] == '0')
				bit[16 + i] = 0;
			else bit[16 + i] = 1;
		}
	}
	else
	{
		for (int i = 0; i < 128; i++)
			bit[i] = 0;
	}

	return bit;
}


