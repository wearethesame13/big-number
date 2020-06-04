#include<iostream>
#include"BigNumber.h"
using namespace std;

class QFloat 
{
public: 
    int data[4];

    
    QFloat BinToDec(bool *bit);
    QFloat ScanQFloat(string str, int base1);
    QFloat ScanQFloatBase10( string str);
};
string PrintQFloat(QFloat A,int base2);
void setBitQFloat(QFloat& x, bool* bit);

