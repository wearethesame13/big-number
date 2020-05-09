#include "QInt.h"
#include "BigNumber.h"
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
	bool *y = new bool[128];
	for (int i = 0; i < 128; i++)
	{
		y[i] = (x.data[i/32] >> (31 - i % 32)) & 1;
	}
	return y;
}

void setBitQInt(QInt &x, bool* bit)
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

void ScanQInt(QInt& x)
{
	for (int i = 0; i < 4; i++)
	{
		x.data[i] = 0;
	}
	std::string bigInt;
	std::cout << "Nhap so lon: ";
	std::cin >> bigInt;
	bool* bit = NULL;
	bit = InsertPreBit(bigInt, StringIntToBit(bigInt));
	setBitQInt(x, bit);
	delete[] bit;
}

void ScanInt(QInt& x, string bigInt)
{
	for (int i = 0; i < 4; i++)
	{
		x.data[i] = 0;
	}
	bool* bit = NULL;
	bit = InsertPreBit(bigInt, StringIntToBit(bigInt));
	setBitQInt(x, bit);
	delete[] bit;
}

bool* MakeBit(string StrBit)
{
	bool bit[128] = { false };
	int tempSize = StrBit.size();
	int j = tempSize - 1;
	for (int i = 127; i >= 0; i--)
	{
		if (j >= 0)
		{
			if (StrBit[j] == '0')
				bit[i] = 0;
			else
				bit[i] = 1;
			j--;
		}
		else break;
	}
	return bit;
}

void ScanBin(QInt& x, string strBin)
{
	for (int i = 0; i < 4; i++)
	{
		x.data[i] = 0;
	}
	bool* bit = NULL;
	bit = MakeBit(strBin);
	setBitQInt(x, bit);
}

string convertBintoDec(QInt x)
{
	bool* bit = DecToBin(x);
	std::string num;
	num = StrBitToInt(bit);
	return num;
}
string convertDectoBin(QInt x)
{
	bool* bit = DecToBin(x);
	std::string num;
	string result = "";
	bool flag = false;
	for (int i = 0; i < 128; i++)
	{
		if (bit[i] == 1)
			result = result + "1";
		else
			result = result + "0";
	}
	while (result[0] == '0') result.erase(result.begin());
	if (result == "") result = "0";
	return result;
}


void PrintQInt(QInt x)
{
	bool* bit = DecToBin(x);
	std::string num;

	num = StrBitToInt(bit);
	std::cout << num << std::endl;
}

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
// Định nghĩa toán tử AND "&"
QInt operator&(QInt a, QInt b)
{
	
	bool* x = DecToBin(a);
	bool* y = DecToBin(b);
	bool* over = new bool[128];
	for (int index = 0; index< 128; index++)
	{
			if (x[index] == 1 && y[index] == 1) over[index] = 1;
			else over[index] = 0;
		
	}
	return BinToDec(over);
}
// Định nghĩa toán tử OR "|"
QInt operator|(QInt a, QInt b)
{
	
	bool* x = DecToBin(a);
	bool* y = DecToBin(b);
	bool* over = new bool[128];
	for (int index = 0; index < 128; index++)
	{
		if (x[index] == 0 && y[index] == 0) over[index] = 0;
		else over[index] = 1;
	}
	return BinToDec(over);
}
// Định nghĩa toán tử XOR "^"
QInt operator^(QInt a, QInt b)
{
	
	bool* x = DecToBin(a);
	bool* y = DecToBin(b);
	bool* over = new bool[128];
	for (int index = 0; index < 128; index++)
	{
		if (x[index] == y[index] ) over[index] = 0;
		else over[index] = 1;

	}
	return BinToDec(over);
}
// Định nghĩa toán tử NOT "~"
QInt operator~(QInt a)
{
	
	bool* x = DecToBin(a);
	bool* over = new bool[128];
	for (int index = 0; index < 128; index++)
	{
		if (x[index] == 1 ) over[index] = 0;
		else over[index] = 0;

	}
	return BinToDec(over);
}


// Định nghĩa toán tử dịch phải ">>"
QInt operator>>(QInt a, int n)
{
	bool* x = DecToBin(a);
	
	if (x[0] == 0)
	{
		for (int index = n; index < 128; index++)
		{
			x[index] = x[index-n];
		}
		for (int index = 0; index < n; index++)
		{
			x[index] = 0;
		}
	}
	if (x[0] == 1)
	{
		for (int index = n + 1; index < 128; index++)
		{
			x[index] = x[index - n];
		}
		for (int index = 1; index < n + 1; index++)
		{
			x[index] = 0;
		}

	}
	return BinToDec(x);
}

// Định nghĩa toán tử dịch trái "<<"
QInt operator<<(QInt a, int n)
{
	bool* x = DecToBin(a);
	if (x[0] == 0)
	{
		for (int index = 0; index < 128 -n ; index++)
		{
			x[index] = x[index + n];
		}
		for (int index = 128 - n; index < 128; index++)
		{
			x[index] = 0;
		}
	}
	if (x[0] == 1)
	{
		for (int index = 1; index < 128 - n; index++)
		{
			x[index] = x[index + n];
		}
		for (int index = 128 - n; index < 128; index++)
		{
			x[index] = 0;
		}

	}
	return BinToDec(x);
}

// Hàm xoay trái
QInt QInt::rol( int n)
{
	bool* x = DecToBin(*this);
	bool* a = new bool[n];
	for (int index = 0; index < n; index++)
	{
		a[index] = x[index];
	}
	for (int index = 0; index < 128 - n; index++)
	{
		x[index] = x[index + n];
	}
	int indexOfn = n-1;
	for (int index = 128 - n; index < 128; index++)
	{
		x[index] = a[indexOfn];
		indexOfn--;
	}
	return BinToDec(x);
}

// Hàm xoay phải
QInt QInt::ror( int n)
{
	bool* x = DecToBin(*this);
	bool* a = new bool[n];
	for (int index = 128 - n; index < 128; index++)
	{
		a[index] = x[index];
	}
	for (int index = n; index < 128; index++)
	{
		x[index] = x[index - n];
	}
	int indexOfn = n - 1;
	for (int index = 0; index < n; index++)
	{
		x[index] = a[indexOfn];
		indexOfn--;
	}
	return BinToDec(x);
}

bool* xuLyChuoiBit(std::string bo)
{
	if(bo.length() > 128)
	{
		return nullptr;
	}
	bool* result = new bool[128];
	if(bo.length() <= 128)
	{
		while(bo.length() < 128)
		{
			bo = '0' + bo;
		}
		for(int i = 0; i < 128; i++)
		{
			result[i] = bo[i] - ('0' - '\0');
		}
	}
	return result;
}
QInt operator+(const QInt a, const QInt b)
{
	int nho = 0;
	QInt num_zero;
	bool* bin1 = DecToBin(a);
	bool* bin2 = DecToBin(b);
	bool* binResult = new bool[128];
	QInt result;
	for (int i = 127; i >= 0; i--)
	{
		int t = (int)bin1[i] + (int)bin2[i] + nho;
		if (t == 3)
		{
			binResult[i] = 1;
			nho = 1;
		}
		if (t == 2)
		{
			binResult[i] = 0;
			nho = 1;
		}
		if (t == 1)
		{
			binResult[i] = 1;
			nho = 0;
		}
		if (t == 0)
		{
			binResult[i] = 0;
			nho = 0;
		}
	}
	setBitQInt(result, binResult);
	return result;
}
QInt operator-(const QInt a, const QInt b)
{
	QInt num_zero;
	int flag = 1;
	for (int i = 0; i < 4; i++)
	{
		if (b.data[i] == 0)
		{
			continue;
		}
		else
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
	{
		return a;
	}
	bool* temp = DecToBin(b);
	TwoCompliment(temp);
	QInt tempQInt;
	setBitQInt(tempQInt, temp);
	return a + tempQInt; // cộng với bù 2 của b
}
QInt& QInt::operator=(const QInt b)
{
	for (int i = 0; i < 4; i++)
	{
		data[i] = b.data[i];
	}
	return *this;
}

bool operator<(const QInt a, const QInt b)
{
	QInt hieu = a - b;
	bool* binHieu;
	binHieu = DecToBin(hieu);
	int kt0 = 1;		//kiem tra bang 0
	for (int i = 127; i >= 1; i--) {
		if (binHieu[i] != 0)
			kt0 = 0;
	}
	if (kt0 == 1) return 0;	//neu hieu 0-> so sanh return 0
	return binHieu[0] == 1 ? 1 : 0;	//neu hieu != 0 ->so sanh dau (bit[0])
}
bool operator==(const QInt a, const QInt b)
{
	QInt hieu = a - b;
	bool* binHieu = DecToBin(hieu);
	for (int i = 0; i < 128; i++)
	{
		if (binHieu[i] == 1)
		{
			return false;
		}
	}
	return true;
}
bool operator>(const QInt a, const QInt b)
{
	QInt hieu = a - b;
	bool* binHieu = DecToBin(hieu);
	int flag = 1;
	for (int i = 127; i >= 1; i--)
	{
		if (binHieu[i] == 0)
		{
			continue;
		}
		else flag = 0;
	}
	if (flag == 1) return 0;
	if (binHieu[0] == 0)
	{
		return 1;
	}
	else return 0;
}
bool operator<=(const QInt a, const QInt b)
{
	QInt hieu = a - b;
	bool* binHieu = DecToBin(hieu);
	int flag = 1;
	for (int i = 127; i >= 1; i--)
	{
		if (binHieu[i] == 0)
		{
			continue;
		}
		else flag = 0;
	}
	if (flag == 1) return 1;
	if (binHieu[0] == 1)
	{
		return 1;
	}
	else return 0;
}
bool operator>=(const QInt a, const QInt b)
{
	QInt hieu = a - b;
	bool* binHieu = DecToBin(hieu);
	int flag = 1;
	for (int i = 127; i >= 1; i--)
	{
		if (binHieu[i] == 0)
		{
			continue;
		}
		else flag = 0;
	}
	if (flag == 1) return 1;
	if (binHieu[0] == 0)
	{
		return 1;
	}
	else return 0;
}

QInt operator*(QInt M, QInt Q)
{
	QInt A;
	QInt num_zero;
	int k = 128;
	bool Q1 = 0;
	bool* result = new bool[128];
	QInt resultQInt;
	while (k>0)
	{
		bool* bitQ = DecToBin(Q);
		if (bitQ[127]==1&&Q1==0)
		{
			A = A - M;
		}
		if (bitQ[127] == 0 && Q1 == 1)
		{
			A = A + M;
		}
		Q1 = bitQ[127];
		for (int i = 127; i >= 1; i--)
		{
			bitQ[i] = bitQ[i - 1];
		}
		bool* bitA = DecToBin(A);
		bool lastBit = bitA[127];
		bitQ[0] = lastBit;
		for (int i = 127; i >= 1; i--)
		{
			bitA[i] = bitA[i - 1];
		}
		bitA[0] = 0;
		A = BinToDec(bitA);
		Q = BinToDec(bitQ);
		k = k - 1;
	}
	bool* bitA = DecToBin(A);
	bool* bitQ = DecToBin(Q);
	if (A==num_zero)
	{
		cout << "Xay ra hien tuong tran so!!! Ket qua khong the bieu dien duoi dang QInt" << endl;
	}
	for (int i = 0; i < 128; i++)
	{
		result[i] = bitQ[i];
	}
	resultQInt = BinToDec(result);
	return resultQInt;
}
void TwoCompliment(bool* bit)
{
	for (int i = 0; i < 128; i++) {
		if (bit[i] == 0) bit[i] = 1;
		else bit[i] = 0;
	}
	int tempNho = 1;
	int i = 128 - 1;
	while (tempNho == 1 && i >= 0)
	{
		int temp = bit[i] + tempNho;
		if (temp == 1) {
			bit[i] = 1;
			tempNho = 0;
		}
		else {
			bit[i] = 0;
			tempNho = 1;
		}
		i--;
	}
	if (tempNho == 1) {
		bit[0] = 1;
	}
}
QInt operator/(QInt Q, QInt M)
{
	QInt num_zero;
	int k = 128;
	QInt A;
	int sign = 0;
	if (Q<num_zero&&M<num_zero)
	{
		Q = num_zero - Q;
		M = num_zero - M;
	}
	if (Q>num_zero&&M<num_zero)
	{
		M = num_zero - M;
		sign = 1;
	}
	if (Q < num_zero && M > num_zero)
	{
		Q = num_zero - Q;
		sign = 1;
	}
	while (k>0)
	{
		//Shift left [A, Q]
		bool* bitA = DecToBin(A);
		bool* bitQ = DecToBin(Q);
		for (int i = 0; i < 127; i++)
		{
			bitA[i] = bitA[i + 1];
		}
		bitA[127] = bitQ[0];
		for (int i = 0; i < 127; i++)
		{
			bitQ[i] = bitQ[i + 1];
		}
		bitQ[127] = 0;

		Q = BinToDec(bitQ);
		A = BinToDec(bitA);
		A = A - M;
		if (A<num_zero)
		{
			bool* bitQ = DecToBin(Q);
			bitQ[127] = 0;
			Q = BinToDec(bitQ);
			A = A + M;
		}
		else
		{
			bool* bitQ = DecToBin(Q);
			bitQ[127] = 1;
			Q = BinToDec(bitQ);
		}
		k = k - 1;
	}
	if (sign == 0)
	{
		return Q;
	}
	if (sign == 1)
	{
		return num_zero - Q;
	}
}