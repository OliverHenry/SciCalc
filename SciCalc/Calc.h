#pragma once
#include <iostream>
#include <math.h>
#include <cmath>
#include "Calculation.h"

namespace SciCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	Calculation calc = Calculation();

	/// <summary>
	/// Summary for Calc
	/// </summary>
	public ref class Calc : public System::Windows::Forms::Form
	{
	public:
		Calc(void)
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
		~Calc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  currentNumText;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  equalsButton;
	private: System::Windows::Forms::Button^  operationButton;
	private: System::Windows::Forms::Button^  minusButton;
	private: System::Windows::Forms::Button^  timesButton;
	private: System::Windows::Forms::Button^  SquareRootbutton;

	private: System::Windows::Forms::Button^  dotButton;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  advancedOperationsButton;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  pieButton;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  powerButton;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  modButton;

	private: System::Windows::Forms::Button^  divideButton;
	private: System::Windows::Forms::Button^  clearButton;
	private: System::Windows::Forms::TextBox^  historyText;



	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Calc::typeid));
			this->currentNumText = (gcnew System::Windows::Forms::TextBox());
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
			this->equalsButton = (gcnew System::Windows::Forms::Button());
			this->operationButton = (gcnew System::Windows::Forms::Button());
			this->minusButton = (gcnew System::Windows::Forms::Button());
			this->timesButton = (gcnew System::Windows::Forms::Button());
			this->SquareRootbutton = (gcnew System::Windows::Forms::Button());
			this->dotButton = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->advancedOperationsButton = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->pieButton = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->powerButton = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->modButton = (gcnew System::Windows::Forms::Button());
			this->divideButton = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->historyText = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// currentNumText
			// 
			this->currentNumText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentNumText->Location = System::Drawing::Point(12, 33);
			this->currentNumText->Multiline = true;
			this->currentNumText->Name = L"currentNumText";
			this->currentNumText->ReadOnly = true;
			this->currentNumText->Size = System::Drawing::Size(259, 47);
			this->currentNumText->TabIndex = 0;
			this->currentNumText->Text = L"0";
			this->currentNumText->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calc::numberButton_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(65, 181);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(47, 37);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calc::numberButton_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(118, 181);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(47, 37);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calc::numberButton_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 224);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(47, 37);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calc::numberButton_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(65, 224);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(47, 37);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Calc::numberButton_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(118, 224);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(47, 37);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Calc::numberButton_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(12, 267);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(47, 37);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Calc::numberButton_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(65, 267);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(47, 37);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Calc::numberButton_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(118, 267);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(47, 37);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Calc::numberButton_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(12, 307);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(47, 37);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Calc::numberButton_Click);
			// 
			// equalsButton
			// 
			this->equalsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equalsButton->Location = System::Drawing::Point(171, 310);
			this->equalsButton->Name = L"equalsButton";
			this->equalsButton->Size = System::Drawing::Size(47, 37);
			this->equalsButton->TabIndex = 11;
			this->equalsButton->Text = L"=";
			this->equalsButton->UseVisualStyleBackColor = true;
			this->equalsButton->Click += gcnew System::EventHandler(this, &Calc::equalsButton_Click);
			// 
			// operationButton
			// 
			this->operationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->operationButton->Location = System::Drawing::Point(171, 267);
			this->operationButton->Name = L"operationButton";
			this->operationButton->Size = System::Drawing::Size(47, 37);
			this->operationButton->TabIndex = 12;
			this->operationButton->Text = L"+";
			this->operationButton->UseVisualStyleBackColor = true;
			this->operationButton->Click += gcnew System::EventHandler(this, &Calc::operationButton_Click);
			// 
			// minusButton
			// 
			this->minusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minusButton->Location = System::Drawing::Point(224, 267);
			this->minusButton->Name = L"minusButton";
			this->minusButton->Size = System::Drawing::Size(47, 37);
			this->minusButton->TabIndex = 13;
			this->minusButton->Text = L"-";
			this->minusButton->UseVisualStyleBackColor = true;
			this->minusButton->Click += gcnew System::EventHandler(this, &Calc::operationButton_Click);
			// 
			// timesButton
			// 
			this->timesButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timesButton->Location = System::Drawing::Point(171, 224);
			this->timesButton->Name = L"timesButton";
			this->timesButton->Size = System::Drawing::Size(47, 37);
			this->timesButton->TabIndex = 14;
			this->timesButton->Text = L"*";
			this->timesButton->UseVisualStyleBackColor = true;
			this->timesButton->Click += gcnew System::EventHandler(this, &Calc::operationButton_Click);
			// 
			// SquareRootbutton
			// 
			this->SquareRootbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SquareRootbutton->Location = System::Drawing::Point(12, 132);
			this->SquareRootbutton->Name = L"SquareRootbutton";
			this->SquareRootbutton->Size = System::Drawing::Size(47, 37);
			this->SquareRootbutton->TabIndex = 15;
			this->SquareRootbutton->Text = L"√";
			this->SquareRootbutton->UseVisualStyleBackColor = true;
			this->SquareRootbutton->Click += gcnew System::EventHandler(this, &Calc::SquareRootbutton_Click);
			// 
			// dotButton
			// 
			this->dotButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dotButton->Location = System::Drawing::Point(223, 310);
			this->dotButton->Name = L"dotButton";
			this->dotButton->Size = System::Drawing::Size(47, 37);
			this->dotButton->TabIndex = 16;
			this->dotButton->Text = L".";
			this->dotButton->UseVisualStyleBackColor = true;
			this->dotButton->Click += gcnew System::EventHandler(this, &Calc::dotButton_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(65, 132);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(47, 37);
			this->button17->TabIndex = 17;
			this->button17->Text = L"%";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Calc::percentageButton_Click);
			// 
			// advancedOperationsButton
			// 
			this->advancedOperationsButton->Location = System::Drawing::Point(12, 89);
			this->advancedOperationsButton->Name = L"advancedOperationsButton";
			this->advancedOperationsButton->Size = System::Drawing::Size(47, 37);
			this->advancedOperationsButton->TabIndex = 18;
			this->advancedOperationsButton->Text = L"sin";
			this->advancedOperationsButton->UseVisualStyleBackColor = true;
			this->advancedOperationsButton->Click += gcnew System::EventHandler(this, &Calc::advancedOperationsButton_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(118, 89);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(47, 37);
			this->button19->TabIndex = 19;
			this->button19->Text = L"tan";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Calc::advancedOperationsButton_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(65, 89);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(47, 37);
			this->button20->TabIndex = 20;
			this->button20->Text = L"cos";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Calc::advancedOperationsButton_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(224, 132);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(47, 37);
			this->button21->TabIndex = 21;
			this->button21->Text = L"log";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Calc::advancedOperationsButton_Click);
			// 
			// pieButton
			// 
			this->pieButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pieButton->Location = System::Drawing::Point(171, 89);
			this->pieButton->Name = L"pieButton";
			this->pieButton->Size = System::Drawing::Size(47, 37);
			this->pieButton->TabIndex = 22;
			this->pieButton->Text = L"π";
			this->pieButton->UseVisualStyleBackColor = true;
			this->pieButton->Click += gcnew System::EventHandler(this, &Calc::pieButton_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(171, 132);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(47, 37);
			this->button23->TabIndex = 23;
			this->button23->Text = L"ln";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Calc::advancedOperationsButton_Click);
			// 
			// powerButton
			// 
			this->powerButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->powerButton->Location = System::Drawing::Point(118, 132);
			this->powerButton->Name = L"powerButton";
			this->powerButton->Size = System::Drawing::Size(47, 37);
			this->powerButton->TabIndex = 24;
			this->powerButton->Text = L"x^y";
			this->powerButton->UseVisualStyleBackColor = true;
			this->powerButton->Click += gcnew System::EventHandler(this, &Calc::powerButton_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(224, 181);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(47, 37);
			this->button25->TabIndex = 25;
			this->button25->Text = L"EXP";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Calc::advancedOperationsButton_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(224, 92);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(47, 37);
			this->button26->TabIndex = 26;
			this->button26->Text = L"X!";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Calc::factorialButton_Click);
			// 
			// modButton
			// 
			this->modButton->Location = System::Drawing::Point(171, 181);
			this->modButton->Name = L"modButton";
			this->modButton->Size = System::Drawing::Size(47, 37);
			this->modButton->TabIndex = 27;
			this->modButton->Text = L"mod";
			this->modButton->UseVisualStyleBackColor = true;
			this->modButton->Click += gcnew System::EventHandler(this, &Calc::advancedOperationsButton_Click);
			// 
			// divideButton
			// 
			this->divideButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divideButton->Location = System::Drawing::Point(224, 224);
			this->divideButton->Name = L"divideButton";
			this->divideButton->Size = System::Drawing::Size(47, 37);
			this->divideButton->TabIndex = 28;
			this->divideButton->Text = L"÷";
			this->divideButton->UseVisualStyleBackColor = true;
			this->divideButton->Click += gcnew System::EventHandler(this, &Calc::operationButton_Click);
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton->Location = System::Drawing::Point(65, 310);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(100, 37);
			this->clearButton->TabIndex = 29;
			this->clearButton->Text = L"C";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &Calc::clearButton_Click);
			// 
			// historyText
			// 
			this->historyText->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->historyText->Location = System::Drawing::Point(12, 17);
			this->historyText->Name = L"historyText";
			this->historyText->ReadOnly = true;
			this->historyText->Size = System::Drawing::Size(259, 20);
			this->historyText->TabIndex = 30;
			this->historyText->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Calc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(282, 352);
			this->Controls->Add(this->historyText);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->divideButton);
			this->Controls->Add(this->modButton);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->powerButton);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->pieButton);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->advancedOperationsButton);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->dotButton);
			this->Controls->Add(this->SquareRootbutton);
			this->Controls->Add(this->timesButton);
			this->Controls->Add(this->minusButton);
			this->Controls->Add(this->operationButton);
			this->Controls->Add(this->equalsButton);
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
			this->Controls->Add(this->currentNumText);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Calc";
			this->Text = L"Scientific Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double firstNumber;
		double secondNumber;
		double Answer;
		char operation;
		bool newNumber = true;


#pragma endregion
	private: System::Void numberButton_Click(System::Object^  sender, System::EventArgs^  e) {

		if (newNumber == true){ // If the calculator is showing a 0
			Button^ button = (Button^)sender; // Then the text shown on the button pressed is store
			currentNumText->Text = button->Text;  // Then the 0 is changed to the text that is displayed on the button pressed
			historyText->Text = historyText->Text + " " + button->Text; // Set the text on the second text box to the text on the button
			newNumber = false;
		}
		else{
			Button^ button = (Button^)sender;
			currentNumText->Text = currentNumText->Text + button->Text; // Gets the text in the calc text box and adds a the button value on the end
			historyText->Text = historyText->Text + button->Text;
			newNumber = false;
		}

	};

	private: System::Void dotButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (newNumber == false){ // If the calculator is showing a 0

			Button^ button = (Button^)sender;
			currentNumText->Text = currentNumText->Text + button->Text; // Gets the text in the calc text box and adds a the button value on the end
			historyText->Text = historyText->Text + button->Text;
			
		}
	}


	private: System::Void clearButton_Click(System::Object^  sender, System::EventArgs^  e) {
		//Reset values
		currentNumText->Text = "0";
		historyText->Text = "";
		firstNumber = NULL;
		secondNumber = NULL;
		Answer = NULL;
	}
	private: System::Void operationButton_Click(System::Object^  sender, System::EventArgs^  e) {

		Button^ button = (Button^)sender;
		if (newNumber == false){
			
			if (firstNumber == NULL) {
				firstNumber = Convert::ToDouble(currentNumText->Text); // Takes the numbers inputted converts it to a double and saves it into a variable
			}
			else{
				secondNumber = Convert::ToDouble(currentNumText->Text); // Takes the numbers inputted converts it to a double and saves it into a variable
				firstNumber = calc.mathCalc(firstNumber, operation, secondNumber);
			}

			currentNumText->Text = Convert::ToString(firstNumber); //Update display to show current calculated value
			if (historyText->Text->Length == 0){ historyText->Text = historyText->Text + "0"; }
			historyText->Text = historyText->Text + " " + button->Text;
			operation = Convert::ToChar(button->Text);
			newNumber = true;
		}
		else{
			if (historyText->Text->Length == 0){ historyText->Text = historyText->Text + "0  "; }
			historyText->Text = historyText->Text->Substring(0, historyText->Text->Length - 1) + button->Text;
			operation = Convert::ToChar(button->Text);
		}

	}
	private: System::Void SquareRootbutton_Click(System::Object^  sender, System::EventArgs^  e) {

		if (currentNumText->Text == "0"){
			Button^ button = (Button^)sender;
			currentNumText->Text = "";
			historyText->Text = historyText->Text + button->Text;
			operation = 's';
		}
		else{
			Button^ button = (Button^)sender;
			historyText->Text = historyText->Text + button->Text;
			operation = 's';
		}
	}

	private: System::Void pieButton_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ button = (Button^)sender;
		if (currentNumText->Text == "0"){
			historyText->Text = historyText->Text + button->Text;
			currentNumText->Text = "3.14159265358979";
			newNumber = false;
		}
		else {
			historyText->Text = historyText->Text + button->Text;
			currentNumText->Text = currentNumText->Text + "3.14159265358979";
			newNumber = false;
		}
	}

	private: System::Void advancedOperationsButton_Click(System::Object^  sender, System::EventArgs^  e) {
			Button^ button = (Button^)sender;
			currentNumText->Text = "";
			historyText->Text = historyText->Text + button->Text;


			if (button->Text == "sin")
			{
				operation = 'S';
			}
			else if (button->Text == "cos")
			{
				operation = 'C';
			}
			else if (button->Text == "tan")
			{
				operation = 'T';
			}
			else if (button->Text == "log")
			{
				operation = 'L';
			}
			else if (button->Text == "EXP")
			{
				operation = 'E';
			}
			else if (button->Text == "mod")
			{
				operation = 'M';
			}
			else if (button->Text == "ln")
			{
				operation = 'N';
			}

	}
	private: System::Void powerButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (newNumber == false){
			firstNumber = Convert::ToDouble(currentNumText->Text);
			currentNumText->Text = "";
			historyText->Text = historyText->Text + "^";
			operation = 'P';
			newNumber = true;
		}
	}

	private: System::Void factorialButton_Click(System::Object^  sender, System::EventArgs^  e) {
			currentNumText->Text = "";
			historyText->Text = historyText->Text + "!";
			operation = '!';
		
			
	}

	private: System::Void percentageButton_Click(System::Object^  sender, System::EventArgs^  e) { // % button
		Button^ button = (Button^)sender;
		firstNumber = Convert::ToDouble(currentNumText->Text);
		currentNumText->Text = "";
		historyText->Text = historyText->Text + button->Text;
		operation = Convert::ToChar(button->Text);

	}


	private: System::Void equalsButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (newNumber == false){
			try{
				secondNumber = Convert::ToDouble(currentNumText->Text);
			}
			catch (FormatException^ e){
				currentNumText->Text = "Error";
			}

			switch (operation)
			{
			case '+':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //Addition
				break;

			case '-':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //Subtraction
				break;

			case '*':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //Multiplication
				break;

			case '÷':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //Division
				break;

			case 's':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //Square Root
				break;

			case 'S':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //Sin
				break;

			case 'C':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //Cos
				break;

			case 'T':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //Tan
				break;

			case 'L':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //Log
				break;

			case 'E':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //EXP
				break;

			case 'P':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //Power
				break;

			case 'M':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //Mod
				break;

			case '%':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //Percentage
				break;

			case 'N':
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //ln
				break;

			case '!':
				double fact = 1;
				Answer = calc.mathCalc(firstNumber, operation, secondNumber);
				currentNumText->Text = System::Convert::ToString(Answer); //Factorial
				break;
			}
			firstNumber = NULL; //
			secondNumber = NULL; // Resets the variables so equals cannot continue to be pressed
		}
	}



};
}

