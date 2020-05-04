#include<iostream>

using namespace std;

class QFloat 
{
public: 
    int data[4];
    float BinToDec(QFloat a);
    friend void ComponentDecToBin(int &x, int a[32]);

}