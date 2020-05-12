#include "FileProces.h"
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(int argc, char* argv[])
{
	bool flag = false; // true: mở chế độ calculator, false mở chế độ tính toán trên file 
	if (argc == 1)
	{
		flag = true;
	}
	if (flag == true)
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		CalculatorKTMT::MyForm form;
		Application::Run(% form);
		return 0;
	}
	if (flag == false)
	{
		bool done = false;
		int tempMode = Convert::ToInt32(argv[3]);
		if (tempMode == 1)
		{
			std::string inputPath = argv[1];
			done = WorkWithFileQInt(inputPath);
		}
		else if (tempMode == 2)
		{
			std::string inputPath = argv[2];
			done = WorkWithFileQfloat(inputPath);
		}
		if (done == true)
		{
			std::cout << "Hoan thanh!!!" << endl;
		}
		else std::cout << "Khong hoan thanh!!!" << endl;
		return 0;
	}
}