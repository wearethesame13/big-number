#pragma once
#include "QInt.h"
#include <msclr\marshal_cppstd.h>
#include "Qfloat.h"
#include "FileProces.h"

using namespace msclr::interop;

namespace CalculatorKTMT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int numMode = 0; // 0 là QInt, 1 là QFloat 
	Qfloat numFloat;
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
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ buttonFile;
	private: System::Windows::Forms::Button^ buttonChangeMode;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelMode;
	private: System::Windows::Forms::Label^ mode;














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
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->buttonFile = (gcnew System::Windows::Forms::Button());
			this->buttonChangeMode = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelMode = (gcnew System::Windows::Forms::Label());
			this->mode = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(44, 341);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(44, 384);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"4";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(44, 427);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 37);
			this->button3->TabIndex = 2;
			this->button3->Text = L"1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(44, 470);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 37);
			this->button4->TabIndex = 3;
			this->button4->Text = L"0";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(109, 341);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 37);
			this->button5->TabIndex = 4;
			this->button5->Text = L"8";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(109, 384);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 37);
			this->button6->TabIndex = 5;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(109, 427);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 37);
			this->button7->TabIndex = 6;
			this->button7->Text = L"2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(109, 470);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 37);
			this->button8->TabIndex = 7;
			this->button8->Text = L".";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(170, 341);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 37);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(170, 384);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(55, 37);
			this->button10->TabIndex = 9;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(170, 427);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(55, 37);
			this->button11->TabIndex = 10;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(170, 470);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(116, 37);
			this->button12->TabIndex = 11;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(231, 341);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(55, 37);
			this->button13->TabIndex = 12;
			this->button13->Text = L"--";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(231, 384);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 37);
			this->button14->TabIndex = 13;
			this->button14->Text = L"X";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(231, 427);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(55, 37);
			this->button15->TabIndex = 14;
			this->button15->Text = L"/";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(44, 298);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(55, 37);
			this->button16->TabIndex = 15;
			this->button16->Text = L"ON";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(109, 298);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 37);
			this->button17->TabIndex = 16;
			this->button17->Text = L"<--";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(170, 298);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(55, 37);
			this->button18->TabIndex = 17;
			this->button18->Text = L"CLEAR";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(231, 298);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(55, 37);
			this->button19->TabIndex = 18;
			this->button19->Text = L"+";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(44, 298);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(55, 37);
			this->button20->TabIndex = 19;
			this->button20->Text = L"OFF";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(44, 29);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(364, 58);
			this->textBox1->TabIndex = 20;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 22;
			this->label2->Text = L"DEC";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"HEX";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 237);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"BIN";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(44, 102);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(364, 40);
			this->textBox2->TabIndex = 25;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(44, 163);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(364, 41);
			this->textBox3->TabIndex = 26;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(44, 217);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(364, 54);
			this->textBox4->TabIndex = 27;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(43, 17);
			this->radioButton1->TabIndex = 28;
			this->radioButton1->Text = L"BIN";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(63, 19);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(47, 17);
			this->radioButton2->TabIndex = 29;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"DEC";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(353, 341);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(55, 37);
			this->button21->TabIndex = 35;
			this->button21->Text = L"<<";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::buttonSHL);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(353, 384);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(55, 37);
			this->button22->TabIndex = 34;
			this->button22->Text = L">>";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::buttonSHR);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(292, 470);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(55, 37);
			this->button23->TabIndex = 33;
			this->button23->Text = L"NOT";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::buttonNOT);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(292, 427);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(55, 37);
			this->button24->TabIndex = 32;
			this->button24->Text = L"XOR";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::buttonXOR);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(292, 384);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(55, 37);
			this->button25->TabIndex = 31;
			this->button25->Text = L"OR";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::buttonOR);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(292, 341);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(55, 37);
			this->button26->TabIndex = 30;
			this->button26->Text = L"AND";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::buttonAnd);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(353, 427);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(55, 37);
			this->button27->TabIndex = 34;
			this->button27->Text = L"ROL";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::buttonROL);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(353, 470);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(55, 37);
			this->button28->TabIndex = 34;
			this->button28->Text = L"ROR";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::buttonROR);
			// 
			// buttonFile
			// 
			this->buttonFile->Location = System::Drawing::Point(259, 513);
			this->buttonFile->Name = L"buttonFile";
			this->buttonFile->Size = System::Drawing::Size(88, 21);
			this->buttonFile->TabIndex = 36;
			this->buttonFile->Text = L"EXECUTE ";
			this->buttonFile->UseVisualStyleBackColor = true;
			this->buttonFile->Click += gcnew System::EventHandler(this, &MyForm::buttonFile_Click);
			// 
			// buttonChangeMode
			// 
			this->buttonChangeMode->Location = System::Drawing::Point(355, 512);
			this->buttonChangeMode->Name = L"buttonChangeMode";
			this->buttonChangeMode->Size = System::Drawing::Size(53, 21);
			this->buttonChangeMode->TabIndex = 37;
			this->buttonChangeMode->Text = L"MODE";
			this->buttonChangeMode->UseVisualStyleBackColor = true;
			this->buttonChangeMode->Click += gcnew System::EventHandler(this, &MyForm::buttonChangeMode_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(44, 513);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(209, 20);
			this->textBox5->TabIndex = 38;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(292, 298);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(116, 37);
			this->groupBox1->TabIndex = 39;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Input";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 516);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 40;
			this->label5->Text = L"FILE";
			// 
			// labelMode
			// 
			this->labelMode->AutoSize = true;
			this->labelMode->Location = System::Drawing::Point(41, 9);
			this->labelMode->Name = L"labelMode";
			this->labelMode->Size = System::Drawing::Size(53, 13);
			this->labelMode->TabIndex = 41;
			this->labelMode->Text = L"Dang so: ";
			// 
			// mode
			// 
			this->mode->AutoSize = true;
			this->mode->Location = System::Drawing::Point(92, 9);
			this->mode->Name = L"mode";
			this->mode->Size = System::Drawing::Size(33, 13);
			this->mode->TabIndex = 42;
			this->mode->Text = L"QINT";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(430, 542);
			this->Controls->Add(this->mode);
			this->Controls->Add(this->labelMode);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->buttonChangeMode);
			this->Controls->Add(this->buttonFile);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Name = L"MyForm";
			this->Text = L"Big Number Calculator";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
			button21->Enabled = false;
			button22->Enabled = false;
			button23->Enabled = false;
			button24->Enabled = false;
			button25->Enabled = false;
			button26->Enabled = false;
			button27->Enabled = false;
			button28->Enabled = false;
			buttonFile->Enabled = false;
			buttonChangeMode->Enabled = false;
			textBox5->Enabled = false;
			groupBox1->Enabled = false;
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
			button21->Enabled = true;
			button22->Enabled =	true;
			button23->Enabled = true;
			button24->Enabled = true;
			button25->Enabled = true;
			button26->Enabled = true;
			button27->Enabled = true;
			button28->Enabled = true;
			buttonFile->Enabled = true;
			buttonChangeMode->Enabled = true;
			textBox5->Enabled = true;
			groupBox1->Enabled = true;
		}
		void disableQFloat()
		{
			button8->Enabled = true;
			textBox3->Enabled = false;
			button13->Enabled = false;
			button14->Enabled = false;
			button16->Enabled = true;
			button17->Enabled = true;
			button15->Enabled = false;
			button19->Enabled = false;
			button21->Enabled = false;
			button22->Enabled = false;
			button23->Enabled = false;
			button24->Enabled = false;
			button25->Enabled = false;
			button26->Enabled = false;
			button27->Enabled = false;
			button28->Enabled = false;
		}
		void enableQFloat()
		{
			button8->Enabled = false;
			textBox3->Enabled = true;
			button13->Enabled = true;
			button14->Enabled = true;
			button16->Enabled = true;
			button17->Enabled = true;
			button15->Enabled = true;
			button19->Enabled = true;
			button21->Enabled = true;
			button22->Enabled = true;
			button23->Enabled = true;
			button24->Enabled = true;
			button25->Enabled = true;
			button26->Enabled = true;
			button27->Enabled = true;
			button28->Enabled = true;
		}
		// TINH TOAN THAP PHAN
		void computeDec() {
			String^ i = textBox1->Text;
			std::string bigInt; 
			int n;
			bool* bin = NULL;
			char* hex = NULL;
			QInt add;
			QInt num_zero;
			switch (count) {
			case 0: // chỉ nhập số k có phép tính
				// SCAN SỐ QINT
				bigInt = marshal_as<std::string>(i);
				if (bigInt=="")
				{
					num = num_zero;
				}
				else
				{
					ScanQInt(num, bigInt);
				}
				

				// IN THAP PHAN
				if (num==num_zero)
				{
					textBox1->Text = marshal_as<String^>(PrintQInt(num));
				}
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
				if (bigInt == "")
				{
					add = num_zero;
				}
				else
				{
					ScanQInt(add, bigInt);
				}
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
				if (bigInt == "")
				{
					add = num_zero;
				}
				else
				{
					ScanQInt(add, bigInt);
				}
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
				if (bigInt == "")
				{
					add = num_zero;
				}
				else
				{
					ScanQInt(add, bigInt);
				}
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
				if (bigInt == "")
				{
					add = num_zero;
				}
				else
				{
					ScanQInt(add, bigInt);
				}
				if (add == num_zero)
				{
					MessageBox::Show("Khong chia duoc cho 0", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
					break;
				}
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
			case 5: // PHÉP AND
				bigInt = marshal_as<string>(i);
				if (bigInt == "")
				{
					add = num_zero;
				}
				else
				{
					ScanQInt(add, bigInt);
				}
				ans = num & add;
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
			case 6: //PHÉP OR
				bigInt = marshal_as<string>(i);
				if (bigInt == "")
				{
					add = num_zero;
				}
				else
				{
					ScanQInt(add, bigInt);
				}
				ans = num | add;
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
			case 7: //PHÉP XOR
				bigInt = marshal_as<string>(i);
				if (bigInt == "")
				{
					add = num_zero;
				}
				else
				{
					ScanQInt(add, bigInt);
				}
				ans = num ^ add;
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
			case 8: // PHÉP NOT
				
				break;
			case 9: // PHÉP SHL
				n = Convert::ToInt32(i);
				ans = num << n;
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
			case 10: // PHÉP SHR
				n = Convert::ToInt32(i);
				ans = num >> n;
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
			case 11: // PHÉP ROL
				n = Convert::ToInt32(i);
				ans = num.rol(n);
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
			case 12: // PHÉP ROR
				n = Convert::ToInt32(i);
				ans = num.ror(n);
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
			int temp = (int)(128 - bigInt.length());
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
		// TINH TOAN THAP PHAN QFLOAT
		void computeDecFloat()
		{
			String^ i = textBox1->Text;
			std::string bigFloat;
			int n;
			bool* bin = NULL;
			char* hex = NULL;
			Qfloat add;
			Qfloat num_zero;
			switch (count)
			{
			case 0:
				bigFloat = marshal_as<std::string>(i);
				if (bigFloat == "")
				{
					numFloat = num_zero;
				}
				else
				{
					ScanQfloat(numFloat, bigFloat);
				}


				// IN THAP PHAN
				if (numFloat == num_zero)
				{
					textBox1->Text = marshal_as<String^>(GetFloat(numFloat));
				}
				textBox2->Text = marshal_as<String^>(GetFloat(numFloat));


				// IN NHI PHAN
				for (int i = 0; i < 128; i++)
				{
					if (bigFloat[i] == '1')
					{
						bin[i] = true;
					}
					else
					{
						bin[i] = false;
					}
					textBox4->Text += ((int)bin[i]).ToString();
				}
				break;
			default:
				break;
			}
		}
		// TINH TOAN NHI PHAN QFLOAT
		void computeBinFloat()
		{
			char* hex = NULL;
			String^ t = textBox1->Text;
			std::string bigFloat = marshal_as<string>(t);
			int temp = (int)(128 - bigFloat.length());
			bool* bin = new bool[128];
			for (int i = 0; i < temp; i++)
			{
				bigFloat = "0" + bigFloat;
			}
			ScanBin(numFloat, bigFloat);
			switch (count)
			{
			case 0:
				// Xuất số nhị phân
				textBox1->Text = marshal_as<String^>(bigFloat);
				textBox4->Text = marshal_as<String^>(bigFloat);

				// Xuất số thập phân
				textBox2->Text = marshal_as<String^>(GetFloat(numFloat));
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
	textBox1->Text = textBox1->Text + "0";
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
	if (numMode == 0)
	{
		if (radioButton1->Checked == true)
		{
			textBox1->Enabled = true;
			button20->Show();
			button16->Hide();
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
			button17->Enabled = true;
			button18->Enabled = true;
			button19->Enabled = true;
			button21->Enabled = true;
			button22->Enabled = true;
			button23->Enabled = true;
			button24->Enabled = true;
			button25->Enabled = true;
			button26->Enabled = true;
			button27->Enabled = true;
			button28->Enabled = true;
			buttonFile->Enabled = true;
			buttonChangeMode->Enabled = true;
			textBox5->Enabled = true;
			groupBox1->Enabled = true;
			button4->Enabled = true;
		}
		if (radioButton2->Checked)
		{
			enable();
			button8->Enabled = false;
		}
	}
	else
	{
		if (radioButton1->Checked == true)
		{
			textBox1->Enabled = true;
			button20->Show();
			button16->Hide();
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = true;
			button9->Enabled = false;
			button10->Enabled = false;
			button11->Enabled = false;
			button12->Enabled = true;
			button13->Enabled = false;
			button14->Enabled = false;
			button15->Enabled = false;
			button16->Enabled = false;
			button17->Enabled = true;
			button18->Enabled = true;
			button19->Enabled = false;
			buttonFile->Enabled = true;
			buttonChangeMode->Enabled = true;
			textBox5->Enabled = true;
			groupBox1->Enabled = true;
		}
		if (radioButton2->Checked)
		{
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
			button13->Enabled = false;
			button14->Enabled = false;
			button15->Enabled = false;
			button16->Enabled = true;
			button17->Enabled = true;
			button18->Enabled = true;
			button19->Enabled = false;
			buttonFile->Enabled = true;
			buttonChangeMode->Enabled = true;
			textBox5->Enabled = true;
			groupBox1->Enabled = true;
		}
	}
}

private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (numMode == 0)
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
	if (numMode == 1)
	{
		if (radioButton2->Checked)
		{
			computeDecFloat();
		}
		if (radioButton1->Checked)
		{
			computeBinFloat();
		}
		label1->Text = "";
		for (int i = 0; i < 4; i++)
		{
			num.data[i] = 0;
		}
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
	label1->Text = "";
	count = 0;
	for (int i = 0; i < 4; i++)
	{
		num.data[i] = 0;
	}
}

// WHEN CHECKED RADIO BUTTON BIN
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (numMode == 0)
	{
		if (radioButton1->Checked == true)
		{
			textBox1->Enabled = true;
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
			button14->Enabled =	true;
			button15->Enabled = true;
			button16->Enabled = false;
			button18->Enabled = true;
			button19->Enabled = true;
			button21->Enabled = true;
			button22->Enabled = true;
			button23->Enabled = true;
			button24->Enabled = true;
			button25->Enabled = true;
			button26->Enabled = true;
			button27->Enabled = true;
			button28->Enabled = true;
		}
		if (radioButton2->Checked)
		{
			textBox1->Enabled = true;
			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
			button5->Enabled = true;
			button6->Enabled = true;
			button7->Enabled = true;
			button8->Enabled = false;
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
			button21->Enabled = true;
			button22->Enabled = true;
			button23->Enabled = true;
			button24->Enabled = true;
			button25->Enabled = true;
			button26->Enabled = true;
			button27->Enabled = true;
			button28->Enabled = true;
		}
	}
	else
	{
		if (radioButton1->Checked == true)
		{
			textBox1->Enabled = true;
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = true;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = true;
			button9->Enabled = false;
			button10->Enabled = false;
			button11->Enabled = false;
			button12->Enabled = true;
			button13->Enabled =	false;
			button14->Enabled = false;
			button15->Enabled = false;
			button16->Enabled = false;
			button18->Enabled = true;
			button19->Enabled = false;
		}
		if (radioButton2->Checked)
		{
			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
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
			button13->Enabled = false;
			button14->Enabled = false;
			button15->Enabled = false;
			button16->Enabled = true;
			button18->Enabled = true;
			button19->Enabled = false;
		}
	}
	
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
	label1->Text = marshal_as<String^>(PrintQInt(num)) + " + ";
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
	label1->Text = marshal_as<String^>(PrintQInt(num)) + " - ";
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
	label1->Text = marshal_as<String^>(PrintQInt(num)) + " * ";
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
	label1->Text = marshal_as<String^>(PrintQInt(num)) + " / ";
}
private: System::Void buttonAnd(System::Object^ sender, System::EventArgs^ e) {
	// event click AND
	// scanf số trước dấu AND
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
	count = 5; // 5 ứng với phép AND
	label1->Text = marshal_as<String^>(PrintQInt(num)) + " && ";
}

private: System::Void buttonOR(System::Object^ sender, System::EventArgs^ e) {
	// event click OR
	// scanf số trước dấu OR
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
	count = 6; // 6 ứng với phép OR
	label1->Text = marshal_as<String^>(PrintQInt(num)) + " | ";
}
private: System::Void buttonXOR(System::Object^ sender, System::EventArgs^ e) {
	// event click XOR
	// scanf số trước dấu XOR
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
	count = 7; // 7 ứng với phép XOR
	label1->Text = marshal_as<String^>(PrintQInt(num)) + " ^ ";
}
private: System::Void buttonNOT(System::Object^ sender, System::EventArgs^ e) {
	// event click NOT
	String^ i = textBox1->Text;
	bool* bin = NULL;
	char* hex = NULL;
	if (i != "")
	{
		std::string bigInt;
		bigInt = marshal_as<std::string>(i);
		ScanQInt(num, bigInt);
	}
	ans = ~num;
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
}
private: System::Void buttonSHL(System::Object^ sender, System::EventArgs^ e) {
	// event click SHL
	// scanf số trước dấu SHL
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
	count = 9; // 9 ứng với phép SHL
	label1->Text = marshal_as<String^>(PrintQInt(num)) + " << ";
}
private: System::Void buttonSHR(System::Object^ sender, System::EventArgs^ e) {
	// event click SHR
	// scanf số trước dấu SHR
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
	count = 10; // 10 ứng với phép SHR
	label1->Text = marshal_as<String^>(PrintQInt(num)) + " >> ";
}
private: System::Void buttonROL(System::Object^ sender, System::EventArgs^ e) {
	// event click ROL
	// scanf số trước dấu ROL
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
	count = 11; // 11 ứng với phép ROL
	label1->Text = marshal_as<String^>(PrintQInt(num)) + " ROL ";
}
private: System::Void buttonROR(System::Object^ sender, System::EventArgs^ e) {
	// event click ROR
	// scanf số trước dấu ROR
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
	count = 12; // 12 ứng với phép ROR
	label1->Text = marshal_as<String^>(PrintQInt(num)) + " ROR ";
}
private: System::Void buttonFile_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ tenfile = textBox5->Text;
	bool isSucceed;
	std::string path = marshal_as<std::string>(tenfile);
	if (numMode == 0)
	{
		isSucceed = WorkWithFileQInt(path);
	}
	if (numMode == 1)
	{
		isSucceed = WorkWithFileQfloat(path);
	}
	if (isSucceed == 0)
	{
		MessageBox::Show("Khong tim thay file !!!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	if (isSucceed == 1)
	{
		MessageBox::Show("Da xu ly xong !!!", "DONE", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void buttonChangeMode_Click(System::Object^ sender, System::EventArgs^ e) {
	if (numMode == 0)
	{
		numMode = 1;
		mode->Text = "";
		mode->Text = "QFLOAT";
		disableQFloat();
	}
	else
	{
		numMode = 0;
		mode->Text = "";
		mode->Text = "QINT";
		enableQFloat();
	}
	count = 0;
}
};
}
