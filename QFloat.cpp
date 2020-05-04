#include"QFloat.h"
#include<math.h>
void ComponentDecToBin(int &x, int a[32])
{
	for(int i = 0; i < 32; i++)
	{
		a[i] = 0;
	}
	int index = 0;
	do {
		a[index] = x % 2;
		x = x / 2;
		index++ ;

	}while(x > 0);
	
}

float QFloat :: BinToDec(QFloat a)
{
	int K = 16383;
    int aOver[128];
	int aCom[32];
	int index = 0;

	for (int i = 0; i < 4; i++)
	{
		ComponentDecToBin(a.data[i], aCom);
		aOver[index++] = aCom[index % 32];

	}
    int aSign = aOver[0];
    int aExponent[15];
    for (int i = 0; i < 15; i++)
    {
        aExponent[i] = aOver[i+1];
    }
    int aFraction[113];
	aFraction[0] = 1;
    for (int i = 1; i < 113; i++)
    {
        aFraction[i] = aOver[i+15];
    }
	int exponent = 0 - K, exp = 0;
	for (int i = 14; i >= 0; i--)
	{
		exponent += aExponent[14-i]*pow(2,exp);
		exp++;
	}
	if(exponent == 0) 
	{
		float Dec;
		for (int i = 0; i < 112; i++)
		{
			Dec+= pow(2,-i) * aFraction[i];
		}
		if(aSign==0) return Dec;
		else return 0 - Dec;
	}
	if(exponent > 0)
	{
		if(exponent < 112)
		{
			int *integer = new int[exponent+1];
			int *decimal = new int[112 - exponent];
			integer[0] = 1;
			for (int i = 1; i < exponent+1; i++)
			{
				integer[i] = aFraction[i-1];
			}
			for (int i = 0; i < 112 - exponent; i++)
			{
				decimal[i] = aFraction[i+exponent];
			}
			int Dec = 0;
			for (int i = 0; i < exponent +1; i++)
			{
				Dec+= integer[i]*pow(2,exponent - i);
			}
			for (int i = 0; i < 112 - exponent; i++)
			{
				Dec+= decimal[i] * pow(2,0 - i);
			}
			if(aSign==0) return Dec;
			else return 0 - Dec;						
		}
		if(exponent == 112) {
			int Dec = 0;
			for (int i = 0; i < 113; i++)
			{
			Dec+= aFraction[i] * pow(2,112-i);
			}
			if(aSign==0) return Dec;
			else return 0 - Dec;
		}
		else {

			int Dec = 0;
			for (int i = 0; i < 113; i++)
			{
				Dec+= aFraction[i] * pow(2,exponent - i);
			}
			if(aSign==0) return Dec;
			else return 0 - Dec;	
		}
		
	}
	else {
		int Dec = 0;
		int *dec = new int[0 - exponent + 112];
		for (int i = 0; i < 0 - exponent - 1; i++)
		{
			dec[i] = 0;
		}
		for (int i = 0; i < 113; i++)
		{
			dec[i - exponent - 1] = aFraction[i];
		}
		
		for (int i = 0; i < 0 - exponent +112; i++)
		{
			Dec+= dec[i] * pow(2,-(i+1));
		}
		if(aSign==0) return Dec;
		else return 0 - Dec;			
	}


	
    
    

    
}