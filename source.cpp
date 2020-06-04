#include"QFloat.h"
#include"QInt.h"
#include"fstream"
#include <sstream>


void convertQFloat(string strIn)
{
	string p1, p2, strA;
	stringstream ssIn;
	ssIn << strIn;
	ssIn >> p1 >> p2 >> strA;
	int base1 = stoi(p1);
	int base2 = stoi(p2);
    ofstream outQFloat;
    outQFloat.open("QFloat_output.txt",ios::app);
	QFloat A;	
    A.ScanQFloat(strA, base1);
    outQFloat << PrintQFloat(A,base2)<<endl;
    outQFloat.close();
}
void readQFloat()
{
    ifstream inQFloat;
    inQFloat.open("QFloat_input.txt",ios::in);
    while(!inQFloat.eof())
    {
        string strIn;
        getline(inQFloat,strIn);
        convertQFloat(strIn);
    }
    inQFloat.close(); 
}
int main()
{

}