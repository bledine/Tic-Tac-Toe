#pragma once

#include "NextMove.h"

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	NextMove myInstance;
	

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button10;



	protected:









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(81, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 77);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(242, 71);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 77);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(161, 71);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 77);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(81, 71);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 77);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(242, 144);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 77);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(161, 144);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(85, 77);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(242, 217);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(85, 77);
			this->button7->TabIndex = 7;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Black;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(161, 217);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(85, 77);
			this->button8->TabIndex = 8;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Black;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(81, 217);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(85, 77);
			this->button9->TabIndex = 9;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 33);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Tik-Tak-Toe";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(78, 340);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(189, 30);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Select Pawn";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(140, 390);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(60, 44);
			this->checkBox1->TabIndex = 14;
			this->checkBox1->Text = L"X";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(242, 390);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(64, 44);
			this->checkBox2->TabIndex = 15;
			this->checkBox2->Text = L"O";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(389, 393);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(112, 50);
			this->button10->TabIndex = 16;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(592, 505);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked)
		{
			checkBox2->Checked = false;
			ResetControls();
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked)
		{
			checkBox1->Checked = false;
			ResetControls();
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		ResetControls();
	}
	       // Method to reset all controls
	       void ResetControls()
	       {
		       button4->Text = "";
		       button3->Text = "";
		       button2->Text = "";
		       button1->Text = "";
		       button6->Text = "";
		       button7->Text = "";
		       button8->Text = "";
		       button9->Text = "";
		       button5->Text = "";
	       }
	       void makeMove(int num)
	       {
		       if (num == 0)
			       button4->Text = "X";
		       if (num == 1)
			       button3->Text = "X";
		       if (num == 2)
			       button2->Text = "X";
		       if (num == 3)
			       button1->Text = "X";
		       if (num == 4)
			       button6->Text = "X";
		       if (num == 5)
			       button5->Text = "X";
		       if (num == 6)
			       button9->Text = "X";
		       if (num == 7)
			       button8->Text = "X";
		       if(num == 8)
			       button7->Text = "X";
	       }
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			button4->Text = "X";
		}
		else if (checkBox2->Checked) {
			button4->Text = "O";
		}
		myInstance.user = 'O';
		myInstance.comp = 'X';
		myInstance.mainboard[0][0] = 'O';
		int num = myInstance.findBestMove(myInstance.mainboard);
		std::cout << num;
		makeMove(num);
		
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			button3->Text = "X";
		}
		else if (checkBox2->Checked) {
			button3->Text = "O";
		}
		myInstance.user = 'O';
		myInstance.comp = 'X';
		myInstance.mainboard[0][1] = 'O';
		int num = myInstance.findBestMove(myInstance.mainboard);
		std::cout << num;
		makeMove(num);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			button2->Text = "X";
		}
		else if (checkBox2->Checked) {
			button2->Text = "O";
		}
		myInstance.user = 'O';
		myInstance.comp = 'X';
		myInstance.mainboard[0][2] = 'O';
		int num = myInstance.findBestMove(myInstance.mainboard);
		std::cout << num;
		makeMove(num);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			button1->Text = "X";
		}
		else if (checkBox2->Checked) {
			button1->Text = "O";
		}
		myInstance.user = 'O';
		myInstance.comp = 'X';
		myInstance.mainboard[1][0] = 'O';
		int num = myInstance.findBestMove(myInstance.mainboard);
		std::cout << num;
		makeMove(num);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			button6->Text = "X";
		}
		else if (checkBox2->Checked) {
			button6->Text = "O";
		}
		myInstance.user = 'O';
		myInstance.comp = 'X';
		myInstance.mainboard[1][1] = 'O';
		int num = myInstance.findBestMove(myInstance.mainboard);
		std::cout << num;
		makeMove(num);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			button5->Text = "X";
		}
		else if (checkBox2->Checked) {
			button5->Text = "O";
		}
		myInstance.user = 'O';
		myInstance.comp = 'X';
		myInstance.mainboard[1][2] = 'O';
		int num = myInstance.findBestMove(myInstance.mainboard);
		std::cout << num;
		makeMove(num);


	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked) {
			button9->Text = "X";
		}
		else if (checkBox2->Checked) {
			button9->Text = "O";
		}
		myInstance.user = 'O';
		myInstance.comp = 'X';
		myInstance.mainboard[2][0] = 'O';
		int num = myInstance.findBestMove(myInstance.mainboard);
		std::cout << num;
		makeMove(num);
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		button8->Text = "X";
	}
	else if (checkBox2->Checked) {
		button8->Text = "O";
	}
	myInstance.user = 'O';
	myInstance.comp = 'X';
	myInstance.mainboard[2][1] = 'O';
	int num = myInstance.findBestMove(myInstance.mainboard);
	std::cout << num;
	makeMove(num);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		button7->Text = "X";
	}
	else if (checkBox2->Checked) {
		button7->Text = "O";
	}
	myInstance.user = 'O';
	myInstance.comp = 'X';
	myInstance.mainboard[2][2] = 'O';
	int num = myInstance.findBestMove(myInstance.mainboard);
	std::cout << num;
	makeMove(num);
}
       
};
}