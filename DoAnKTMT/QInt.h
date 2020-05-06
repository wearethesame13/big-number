#pragma once
#include <iostream>
#include <vector>
#include <cmath>
class QInt
{
public:
	int data[4];
	QInt();
	~QInt();
};

bool* DecToBin(QInt x);
void setBitQInt(QInt &x, bool* bit);
QInt BinToDec(bool* bit);
void ScanQInt(QInt& x);
void PrintQInt(QInt x);
char* BinToHex(bool* bit); //Chuyển đổi QInt nhị phân sang thập lục phân, bit có độ dài 128
char GroupBinToHex(bool* bit); //Chuyển dãy 4 bit thành kí tự Hex, bit có độ dài 4
char HexIndex(int index);
char* DecToHex(QInt x); //Chuyển đổi QInt thập phân sang thập lục phân
bool getBitInt(int value, int pos); //Lấy bit tại vị trí pos từ trái sang
char* vectorToStr(std::vector<char> x); //Chuyển đổi vector char về chuỗi
