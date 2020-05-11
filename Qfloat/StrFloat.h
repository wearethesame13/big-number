﻿#pragma once
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

// TẠO KIỂU DỮ LIỆU MỚI ĐỂ XUẤT CHUỖI 
const int AFTER_DOT = 35;
class StrFloat
{
public:
	string m_float;	
	bool m_negative;
	StrFloat();		
	StrFloat(string p);	
	~StrFloat();
	bool isNegative(); 
	void normalize();  
	StrFloat operator+(const StrFloat& p);
	StrFloat& operator=(const StrFloat& p);
	StrFloat& operator/(int p);
	StrFloat operator*(int p);
	StrFloat operator/=(int p);
	StrFloat operator++(int x);
	StrFloat operator+=(const StrFloat& p);
	friend istream& operator>>(istream& is, StrFloat& p);
	friend ostream& operator<<(ostream& os, const StrFloat& p);
};

void BarFloat(string src, string& whole, string& dec);
bool* StringFloatToBit(string BigFloat);
string StringIntToBit(string x);
string StringDecPartToBit(string decimal);
string add(string numA, string numB);
string div2(string obj);

void TwoCompliment(string& StrBit);
string mul2Float(string BFloat);