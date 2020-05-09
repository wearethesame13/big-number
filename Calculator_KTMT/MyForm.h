#pragma once
#include "QInt.h"
#include <msclr\marshal_cppstd.h>

using namespace msclr::interop;

namespace CalculatorKTMT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	QInt num;
	QInt ans;
	int count = 0;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 324);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(45, 367);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"4";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(45, 410);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 37);
			this->button3->TabIndex = 2;
			this->button3->Text = L"1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(45, 453);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 37);
			this->button4->TabIndex = 3;
			this->button4->Text = L"0";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(106, 324);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 37);
			this->button5->TabIndex = 4;
			this->button5->Text = L"8";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(106, 367);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 37);
			this->button6->TabIndex = 5;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(106, 410);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 37);
			this->button7->TabIndex = 6;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(106, 453);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 37);
			this->button8->TabIndex = 7;
			this->button8->Text = L".";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(167, 324);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 37);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(167, 367);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(55, 37);
			this->button10->TabIndex = 9;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(167, 410);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(55, 37);
			this->button11->TabIndex = 10;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(167, 453);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(116, 37);
			this->button12->TabIndex = 11;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(228, 324);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(55, 37);
			this->button13->TabIndex = 12;
			this->button13->Text = L"--";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(228, 367);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 37);
			this->button14->TabIndex = 13;
			this->button14->Text = L"X";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(228, 410);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(55, 37);
			this->button15->TabIndex = 14;
			this->button15->Text = L"/";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(45, 281);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(55, 37);
			this->button16->TabIndex = 15;
			this->button16->Text = L"ON";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(106, 281);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 37);
			this->button17->TabIndex = 16;
			this->button17->Text = L"<--";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(167, 281);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(55, 37);
			this->button18->TabIndex = 17;
			this->button18->Text = L"CLEAR";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(228, 281);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(55, 37);
			this->button19->TabIndex = 18;
			this->button19->Text = L"+";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(45, 281);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(55, 37);
			this->button20->TabIndex = 19;
			this->button20->Text = L"OFF";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(41, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(274, 58);
			this->textBox1->TabIndex = 20;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 22;
			this->label2->Text = L"DEC";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"HEX";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"BIN";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(41, 85);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(274, 40);
			this->textBox2->TabIndex = 25;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(41, 146);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(274, 41);
			this->textBox3->TabIndex = 26;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(41, 200);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(274, 54);
			this->textBox4->TabIndex = 27;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(300, 294);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(43, 17);
			this->radioButton1->TabIndex = 28;
			this->radioButton1->Text = L"BIN";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(300, 334);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(47, 17);
			this->radioButton2->TabIndex = 29;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"DEC";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 523);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void disable() {
			textBox1->Enabled = false;
			textBox2->Enabled = false;
			textBox3->Enabled = false;
			textBox4->Enabled = false;
			button20->Hide();
			button16->Show();
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;
			button10->Enabled = false;
			button11->Enabled = false;
			button12->Enabled = false;
			button13->Enabled = false;
			button14->Enabled = false;
			button16->Enabled = true;
			button15->Enabled = false;
			button17->Enabled = false;
			button18->Enabled = false;
			button19->Enabled = false;
		}

		void enable() {
			textBox1->Enabled = true;
			button20->Show();
			button16->Hide();
			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
			button6->Enabled = true;
			button7->Enabled = true;
			button8->Enabled = true;
			button9->Enabled = true;
			button10->Enabled = true;
			button11->Enabled = true;
			button12->Enabled = true;
			button13->Enabled = true;
			button14->Enabled = true;
			button15->Enabled = true;
			button17->Enabled = true;
			button18->Enabled = true;
			button19->Enabled = true;
		}

		// TINH TOAN THAP PHAN
		void computeDec() {
			String^ i = textBox1->Text;
			std::string bigInt; 
			bool* bin = NULL;
			char* hex = NULL;
			QInt add;
			switch (count) {
			case 0: // chỉ nhập số k có phép tính
				// SCAN SỐ QINT
				bigInt = marshal_as<std::string>(i);
				ScanQInt(num, bigInt);

				// IN THAP PHAN
				textBox2->Text = marshal_as<String^>(PrintQInt(num));
				

				// IN NHI PHAN
				bin = DecToBin(num);
				for (int i = 0; i < 128; i++)
				{
					textBox4->Text += ((int)bin[i]).ToString();
				}
				

				// IN THAP LUC PHAN
				hex = DecToHex(num);
				textBox3->Text = marshal_as<String^>(hex);
				break;
			case 1: // PHEP CONG
				bigInt = marshal_as<string>(i);
				ScanQInt(add, bigInt);
				ans = num + add;
				// Xuat Dec
				textBox1->Text = marshal_as<String^>(PrintQInt(ans));
				textBox2->Text = marshal_as<String^>(PrintQInt(ans));

				// Xuat Bin
				textBox4->Text = "";
				bin = DecToBin(ans);
				for (int i = 0; i < 128; i++)
				{
					textBox4->Text += ((int)bin[i]).ToString();
				}

				// Xuat HEX
				hex = DecToHex(ans);
				textBox3->Text = marshal_as<String^>(hex);
				break;
			case 2: // PHEP TRU
				bigInt = marshal_as<string>(i);
				ScanQInt(add, bigInt);
				ans = num - add;
				// Xuat Dec
				textBox1->Text = marshal_as<String^>(PrintQInt(ans));
				textBox2->Text = marshal_as<String^>(PrintQInt(ans));

				// Xuat Bin
				textBox4->Text = "";
				bin = DecToBin(ans);
				for (int i = 0; i < 128; i++)
				{
					textBox4->Text += ((int)bin[i]).ToString();
				}

				// Xuat HEX
				hex = DecToHex(ans);
				textBox3->Text = marshal_as<String^>(hex);
				break;
			case 3: // PHÉP NHÂN
				bigInt = marshal_as<string>(i);
				ScanQInt(add, bigInt);
				ans = num * add;
				// Xuat Dec
				textBox1->Text = marshal_as<String^>(PrintQInt(ans));
				textBox2->Text = marshal_as<String^>(PrintQInt(ans));

				// Xuat Bin
				textBox4->Text = "";
				bin = DecToBin(ans);
				for (int i = 0; i < 128; i++)
				{
					textBox4->Text += ((int)bin[i]).ToString();
				}

				// Xuat HEX
				hex = DecToHex(ans);
				textBox3->Text = marshal_as<String^>(hex); 
				break;
			case 4: // PHÉP CHIA
				bigInt = marshal_as<string>(i);
				ScanQInt(add, bigInt);
				ans = num / add;
				// Xuat Dec
				textBox1->Text = marshal_as<String^>(PrintQInt(ans));
				textBox2->Text = marshal_as<String^>(PrintQInt(ans));

				// Xuat Bin
				textBox4->Text = "";
				bin = DecToBin(ans);
				for (int i = 0; i < 128; i++)
				{
					textBox4->Text += ((int)bin[i]).ToString();
				}

				// Xuat HEX
				hex = DecToHex(ans);
				textBox3->Text = marshal_as<String^>(hex);
				break;
			default:
				break;
			}
		}

		// TÍNH TOÁN NHI PHAN
		void computeBin() {
			char* hex = NULL;
			String^ t = textBox1->Text;
			std::string bigInt = marshal_as<string>(t);
			int temp = 128 - bigInt.length();
			for (int i = 0; i < temp; i++)
			{
				bigInt = "0" + bigInt;
			}
			bool* bin = new bool[128];
			switch (count) {
			case 0:  // Chỉ nhập số không có phép tính
				
				// xuất số nhị phân
				for (int i = 0; i < 128; i++)
				{
					if (bigInt[i] == '1')
					{
						bin[i] = true;
					}
					else
					{
						bin[i] = false;
					}
					textBox4->Text += ((int)bin[i]).ToString();
				}
				

				// Xuất số thập phân
				num = BinToDec(bin);
				textBox2->Text = marshal_as<String^>(PrintQInt(num));
				

				// Xuất số HEX
				hex = DecToHex(num);
				textBox3->Text = marshal_as<String^>(hex);
				break;
			default:
				break;
			}
		}
#pragma endregion

private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + ".";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + 0;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + 1;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + 2;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + 3;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + 4;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + 5;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + 6;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + 7;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + 8;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = textBox1->Text + 9;
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	// off btn
	disable();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	enable();
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	// event click +
	// scanf số trước dấu cộng
	String^ i = textBox1->Text;
	if (i != "")
	{
		std::string bigInt;
		bigInt = marshal_as<std::string>(i);
		ScanQInt(num, bigInt);
	}
	
	// label1
	textBox1->Clear();
	textBox1->Focus();
	count = 1; // ứng với phép cộng
	label1->Text = marshal_as<String^>(PrintQInt(num)) + "+";

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (radioButton2->Checked)
	{
		computeDec();
	}
	if (radioButton1->Checked)
	{
		computeBin();
	}
	label1->Text = "";
	for (int i = 0; i < 4; i++)
	{
		num.data[i] = 0;
	}
}

private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	// dau xoa
	int length = textBox1->TextLength - 1;
	String^ text = textBox1->Text;
	textBox1->Clear();
	for (int i = 0; i < length; i++)
	{
		textBox1->Text += text[i];
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	// clear btn
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	for (int i = 0; i < 4; i++)
	{
		num.data[i] = 0;
	}
}

// WHEN CHECKED RADIO BUTTON BIN
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked == true)
	{
		button1->Enabled = false;
		button2->Enabled = false;
		button3->Enabled = true;
		button5->Enabled = false;
		button6->Enabled = false;
		button7->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button10->Enabled = false;
		button11->Enabled = false;
		button12->Enabled = true;
		button13->Enabled = true;
		button14->Enabled = true;
		button15->Enabled = true;
		button16->Enabled = false;
		button18->Enabled = true;
		button19->Enabled = true;
	}
	if (radioButton2->Checked)
	{
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Enabled = true;
		button5->Enabled = true;
		button6->Enabled = true;
		button7->Enabled = true;
		button8->Enabled = true;
		button9->Enabled = true;
		button10->Enabled = true;
		button11->Enabled = true;
		button12->Enabled = true;
		button13->Enabled = true;
		button14->Enabled = true;
		button15->Enabled = true;
		button16->Enabled = true;
		button18->Enabled = true;
		button19->Enabled = true;
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	// event click -
	// scanf số trước dấu trừ
	String^ i = textBox1->Text;
	if (i != "")
	{
		std::string bigInt;
		bigInt = marshal_as<std::string>(i);
		ScanQInt(num, bigInt);
	}

	// label1
	textBox1->Clear();
	textBox1->Focus();
	count = 2; // 2 ứng với phép trừ
	label1->Text = marshal_as<String^>(PrintQInt(num)) + "-";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	// event click *
	// scanf số trước dấu X
	String^ i = textBox1->Text;
	if (i != "")
	{
		std::string bigInt;
		bigInt = marshal_as<std::string>(i);
		ScanQInt(num, bigInt);
	}

	// label1
	textBox1->Clear();
	textBox1->Focus();
	count = 3; // 2 ứng với phép nhân
	label1->Text = marshal_as<String^>(PrintQInt(num)) + "*";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	// event click /
	// scanf số trước dấu /
	String^ i = textBox1->Text;
	if (i != "")
	{
		std::string bigInt;
		bigInt = marshal_as<std::string>(i);
		ScanQInt(num, bigInt);
	}

	// label1
	textBox1->Clear();
	textBox1->Focus();
	count = 4; // 2 ứng với phép chia
	label1->Text = marshal_as<String^>(PrintQInt(num)) + "/";
}
};
}
