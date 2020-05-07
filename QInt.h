#pragma once
#include<iostream>

using namespace std;


class QInt
{
public:
	int data[4]; 
	
	// And , Or, Xor, Not
	friend QInt operator & (QInt a, QInt b);
	friend QInt operator | (QInt a, QInt b);
	friend QInt operator ^ (QInt a, QInt b);
	friend QInt operator ~ (QInt a);

	//Dịch phải, dịch trái, xoay phải, xoay trái
	friend QInt operator >> (QInt a, int n);
	friend QInt operator << (QInt a, int n);
	QInt ror(int n);
	QInt rol( int n);


};
