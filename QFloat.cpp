#include"QFloat.h"

QFloat QFloat :: BinToDec(bool *bit)
{
	for (int i = 0; i < 128; i++)
	{
		this->data[i / 32] = (bit[i] << (31 - i % 32)) | this->data[i / 32];
	}
	return *this;
}
