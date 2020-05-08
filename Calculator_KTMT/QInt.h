#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include "BigNumber.h"

class QInt
{
public:
	int data[4];
	QInt();
	~QInt();
	// And , Or, Xor, Not
	friend QInt operator & (QInt a, QInt b);
	friend QInt operator | (QInt a, QInt b);
	friend QInt operator ^ (QInt a, QInt b);
	friend QInt operator ~ (QInt a);

	//Dịch phải, dịch trái, xoay phải, xoay trái
	friend QInt operator >> (QInt a, int n);
	friend QInt operator << (QInt a, int n);
	//Operators
	QInt& operator=(const QInt b);
	friend bool operator<(const QInt a, const QInt b);
	friend bool operator==(const QInt a, const QInt b);
	friend bool operator>(const QInt a, const QInt b);
	friend bool operator<=(const QInt a, const QInt b);
	friend bool operator>=(const QInt a, const QInt b);
	friend QInt operator+(const QInt a, const QInt b);
	friend QInt operator-(const QInt a, const QInt b);
	QInt ror(int n);
	QInt rol(int n);
};

bool* DecToBin(QInt x);
void setBitQInt(QInt& x, bool* bit);
QInt BinToDec(bool* bit);
void ScanQInt(QInt& x, string bigInt);
string PrintQInt(QInt x);
char* BinToHex(bool* bit); //Chuyển đổi QInt nhị phân sang thập lục phân, bit có độ dài 128
char GroupBinToHex(bool* bit); //Chuyển dãy 4 bit thành kí tự Hex, bit có độ dài 4
char HexIndex(int index);
char* DecToHex(QInt x); //Chuyển đổi QInt thập phân sang thập lục phân
bool getBitInt(int value, int pos); //Lấy bit tại vị trí pos từ trái sang
char* vectorToStr(std::vector<char> x); //Chuyển đổi vector char về chuỗi
// And , Or, Xor, Not

QInt TwoCompliment(const QInt a);
bool* xuLyChuoiBit(std::string bo);
