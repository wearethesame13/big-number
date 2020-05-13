#include "Qfloat.h"

Qfloat::Qfloat()
{
	for (int i = 0; i < 4; i++)
	{
		data[i] = 0;
	}
}

Qfloat BinToDecimal(bool* bit)
{
	Qfloat Dec;
	for (int i = 0; i < 128; i++)
	{
		Dec.data[i / 32] = (bit[i] << (31 - i % 32)) | Dec.data[i / 32];
	}
	return Dec;
}

Qfloat::~Qfloat()
{

}

void Qfloat::setBit(int pos, bool x)
{
	data[pos / 32] = (x << (31 - pos % 32)) | data[pos / 32];
}

bool Qfloat::getBit(int pos)
{
	bool a = 0;
	a = (data[pos / 32] >> (31 - pos % 32)) & 1;
	return a;
}

bool Qfloat::checkBitScope(int l, int r, int sd)
{
	for (int i = l; i < r; i++)
	{
		if (((int)getBit(i)) != sd)
		{
			return false;
		}
	}
	return true;
}

int Qfloat::getTypeOfQfloat()
{
	int exp = 1; //exp=0 means that numver 0; 
				 //exp=1 means standard number;
				 //exp=2 means denormalized number
				//exp=3 means Infinite
				//exp=4 means NaN
	if (checkBitScope(1, 15, 1)) //Kiểm tra bit dấu (bit từ 1 đến 15) có bằng 1. -> đúng thì kiểm tra loại Infinite hoặc NaN.
	{
		if (checkBitScope(16, 127, 0)) exp = 3;
		else exp = 4; //cout << "NaN";
	}
	else
		if (checkBitScope(1, 15, 0)) //Kiểm tra bit dấu (bit từ 1 đến 15) có bằng 0.  -> Đúng thì kiểm tra số 0 hoặc dạng không chuẩn.
		{
			if (checkBitScope(16, 127, 0)) exp = 0; //Kiểm tra bit giá trị (bit từ 16 đến 127) có bằng 0. -> Đúng là số 0, sai là dạng không chuẩn.
			else exp = 2;
		}
	return exp;
}

bool operator==(const Qfloat a, const Qfloat b)
{
	for (int i = 0; i < 4; i++)
	{
		if (a.data[i] != b.data[i])
		{
			return false;
		}
	}
	return true;
}

void setBitQfloat(Qfloat& x, bool* bit)
{
	for (int i = 0; i < 128; i++)
	{
		x.data[i / 32] = (bit[i] << (31 - i % 32)) | x.data[i / 32];
	}
}

void setBitExponent(int& intExp, bool* bit)
{
	intExp = 0;
	for (int i = 0; i < 15; i++)
	{
		intExp = (bit[i] << (14 - i)) | intExp;
	}
}

void PrintQfloat(Qfloat x)
{
	cout << GetFloat(x) << endl;
}

string GetFloat(Qfloat x)
{
	//Lấy loại của QFloat. 
	int exp = x.getTypeOfQfloat();
	StrFloat value("0.0");
	if (exp == 0)
	{
		return ("0.0");
	}
	else
	{
		if (exp == 2)
		{
			return "Denormalized";
		}
		else
		{
			if (exp == 3)
			{
				//cout << (x.checkBitScope(0, 0, 1) == true ? "-" : "") << "Infinite" << endl;
				if (x.checkBitScope(0, 0, 1))
					return "-Infinite";
				else
					return "Infinite";
			}
			else
			{
				if (exp == 4)
				{
					return "NaN";
				}
				else
				{
					int sign = x.checkBitScope(0, 1, 1); //0: (+); 1:(-)
					int base2 = 1; //Biến lưu giá trị tạm để tính 2^(x). // temporary variable constain 2^(x)
					//double base2after = 1; //temporary variable constain 2^(-x) (*)
					StrFloat base2after("1"); //Biến lưu giá trị tạm để tính 2^(-x). //temporary variable constain 2^(-x) (*)
					int Vexp = 0; //Lưu giá trị của mũ // Value of exp
					int i;

					//Tính giá trị của mũ theo số bít lưu trong QFloat
					for (i = 15; i > 0; i--) {
						if (x.getBit(i))
							Vexp = Vexp + base2;
						base2 *= 2;
					}
					//Chuyển lại theo số Bias bằng cách trừ đi lượng MAX_VALUE_EXP nếu là số dạng không chuẩn thì trừ đi MAX_VALUE_EXP – 1.
					if (Vexp != 0) Vexp = Vexp - 16383;
					else Vexp = Vexp - 16382;
					//Chuyển đối giá trị sau dấu phẩy về dạng thập phân với 35 số sau dấu phẩy.
					int index = -1;
					index = index + Vexp;
					if (index < 0) {
						for (int i = 0; i > index; i--)
						{
							base2after /= 2;
						}
					}

					if (index > 0) {
						for (int i = 0; i < index; i++)
						{
							base2after = base2after * 2;
						}
					}
					value = value + base2after * 2;
					for (i = 16; i < 128; i++) {
						if (x.getBit(i))
							value = value + base2after; //Nếu giá trị của bit = 1 thì cộng dồn vào giá trị sau dấu phẩy.
						base2after /= 2; //Tính 2^(-x) x=i-15
					}

					if (exp == 1) value++;
					//In giá trị
					//if (sign) cout << '-'; //Kiểm tra số âm.
					//cout << value << "x2^" << Vexp << endl; //Xuất ra dạng x.xxxx*2^x
					//if (sign == 1) cout << '-';
					// làm tròn
					bool iszero = true;
					for (int i = 0; i < value.m_float.length(); i++)
					{
						if (value.m_float[i] == '.' && value.m_float[i] == '0')
						{
							for (int j = i + 1; j < value.m_float.length(); j++)
							{
								if (value.m_float[j] != '0')
								{
									iszero = false;
									break;
								}
							}
							if (iszero == true) {
								value.m_float[i + 35] = '1';
							}
							break;
						}
					}
					if (sign == 1)
						return "-" + value.m_float;
					else
						return value.m_float;
				}
			}
		}
	}
}

string GetBin(Qfloat x)
{
	string result = "";
	for (int i = 0; i < 128; i++)
	{
		if (x.getBit(i))
			result = result + "1";
		else
			result = result + "0";
	}
	return result;
}

void ScanQFloat(Qfloat& x)
{
	for (int i = 0; i < 4; i++)
	{
		x.data[i] = 0;
	}
	cout << "Nhap so thuc: ";
	string BigFloat;
	cin >> BigFloat;

	bool* bit = StringFloatToBit(BigFloat);

	setBitQfloat(x, bit);
}

void ScanQfloat(Qfloat& x, string num)
{
	for (int i = 0; i < 4; i++)
	{
		x.data[i] = 0;
	}

	bool* bit = StringFloatToBit(num);

	setBitQfloat(x, bit);
}

void ScanBin(Qfloat& x, string StrBin)
{
	for (int i = 0; i < 4; i++)
	{
		x.data[i] = 0;
	}
	bool* bit = NULL;
	bit = MakeBit(StrBin);
	setBitQfloat(x, bit);
}

