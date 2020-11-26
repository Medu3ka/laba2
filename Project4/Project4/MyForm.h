#pragma once
#include <string>
#include "Fraction.h"

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Add;
	protected:

	private: System::Windows::Forms::Button^ sub;
	private: System::Windows::Forms::Button^ mlt;
	private: System::Windows::Forms::Button^ cmp;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tB1;
	private: System::Windows::Forms::TextBox^ tB2;
	private: System::Windows::Forms::TextBox^ tB3;
	private: System::Windows::Forms::TextBox^ tB4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tB5;
	private: System::Windows::Forms::TextBox^ tB6;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Add = (gcnew System::Windows::Forms::Button());
			this->sub = (gcnew System::Windows::Forms::Button());
			this->mlt = (gcnew System::Windows::Forms::Button());
			this->cmp = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tB1 = (gcnew System::Windows::Forms::TextBox());
			this->tB2 = (gcnew System::Windows::Forms::TextBox());
			this->tB3 = (gcnew System::Windows::Forms::TextBox());
			this->tB4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tB5 = (gcnew System::Windows::Forms::TextBox());
			this->tB6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(21, 273);
			this->Add->Margin = System::Windows::Forms::Padding(6);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(138, 42);
			this->Add->TabIndex = 0;
			this->Add->Text = L"Сумма";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &MyForm::Add_Click);
			// 
			// sub
			// 
			this->sub->Location = System::Drawing::Point(219, 273);
			this->sub->Margin = System::Windows::Forms::Padding(6);
			this->sub->Name = L"sub";
			this->sub->Size = System::Drawing::Size(138, 42);
			this->sub->TabIndex = 1;
			this->sub->Text = L"Разность";
			this->sub->UseVisualStyleBackColor = true;
			this->sub->Click += gcnew System::EventHandler(this, &MyForm::sub_Click);
			// 
			// mlt
			// 
			this->mlt->Location = System::Drawing::Point(413, 273);
			this->mlt->Margin = System::Windows::Forms::Padding(6);
			this->mlt->Name = L"mlt";
			this->mlt->Size = System::Drawing::Size(169, 42);
			this->mlt->TabIndex = 2;
			this->mlt->Text = L"Произведение";
			this->mlt->UseVisualStyleBackColor = true;
			this->mlt->Click += gcnew System::EventHandler(this, &MyForm::mlt_Click);
			// 
			// cmp
			// 
			this->cmp->Location = System::Drawing::Point(621, 273);
			this->cmp->Margin = System::Windows::Forms::Padding(6);
			this->cmp->Name = L"cmp";
			this->cmp->Size = System::Drawing::Size(138, 42);
			this->cmp->TabIndex = 3;
			this->cmp->Text = L"Сравнение";
			this->cmp->UseVisualStyleBackColor = true;
			this->cmp->Click += gcnew System::EventHandler(this, &MyForm::cmp_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 52);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(251, 24);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Целая часть первой дроби\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(509, 52);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(250, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Целая часть второй дроби";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 185);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(276, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Дробная часть первой дроби";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(495, 184);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(264, 24);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Дробная част второй дроби";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(30, 363);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(218, 24);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Результат целой части";
			// 
			// tB1
			// 
			this->tB1->Location = System::Drawing::Point(53, 87);
			this->tB1->Margin = System::Windows::Forms::Padding(6);
			this->tB1->Name = L"tB1";
			this->tB1->Size = System::Drawing::Size(180, 29);
			this->tB1->TabIndex = 9;
			// 
			// tB2
			// 
			this->tB2->Location = System::Drawing::Point(542, 87);
			this->tB2->Margin = System::Windows::Forms::Padding(6);
			this->tB2->Name = L"tB2";
			this->tB2->Size = System::Drawing::Size(180, 29);
			this->tB2->TabIndex = 10;
			// 
			// tB3
			// 
			this->tB3->Location = System::Drawing::Point(53, 214);
			this->tB3->Margin = System::Windows::Forms::Padding(6);
			this->tB3->Name = L"tB3";
			this->tB3->Size = System::Drawing::Size(180, 29);
			this->tB3->TabIndex = 11;
			// 
			// tB4
			// 
			this->tB4->Location = System::Drawing::Point(542, 214);
			this->tB4->Margin = System::Windows::Forms::Padding(6);
			this->tB4->Name = L"tB4";
			this->tB4->Size = System::Drawing::Size(180, 29);
			this->tB4->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(517, 363);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(242, 24);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Результат дробной части";
			// 
			// tB5
			// 
			this->tB5->Location = System::Drawing::Point(53, 409);
			this->tB5->Margin = System::Windows::Forms::Padding(6);
			this->tB5->Name = L"tB5";
			this->tB5->Size = System::Drawing::Size(180, 29);
			this->tB5->TabIndex = 14;
			// 
			// tB6
			// 
			this->tB6->Location = System::Drawing::Point(542, 409);
			this->tB6->Margin = System::Windows::Forms::Padding(6);
			this->tB6->Name = L"tB6";
			this->tB6->Size = System::Drawing::Size(180, 29);
			this->tB6->TabIndex = 15;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(789, 529);
			this->Controls->Add(this->tB6);
			this->Controls->Add(this->tB5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tB4);
			this->Controls->Add(this->tB3);
			this->Controls->Add(this->tB2);
			this->Controls->Add(this->tB1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmp);
			this->Controls->Add(this->mlt);
			this->Controls->Add(this->sub);
			this->Controls->Add(this->Add);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->Text = L"Реализация касса Fraction";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool Protect() {

			if ((tB1->Text->Length == 0) || (tB1->Text->Length == 0)) return false;
			for (int i = 0; i < tB1->Text->Length; i++) {
				if (!(((tB1->Text[i] >= '0' && (tB1->Text[i] <= '9')) || (tB1->Text[i] == ',')))) { return false; };
			}
			for (int i = 0; i < tB2->Text->Length; i++) {
				if (!(((tB2->Text[i] >= '1' && (tB2->Text[i] <= '9')) || (tB2->Text[i] == ',')))) { return false; };
			}
			for (int i = 0; i < tB3->Text->Length; i++) {
				if (!(((tB3->Text[i] >= '0' && (tB3->Text[i] <= '9')) || (tB3->Text[i] == ',')))) { return false; };
			}
			for (int i = 0; i < tB4->Text->Length; i++) {
				if (!(((tB4->Text[i] >= '1' && (tB4->Text[i] <= '9')) || (tB4->Text[i] == ',')))) { return false; };
			}
			return true;
		}
		
		Fraction input1() {
			bool Fl;
			Fl = Protect();
			if (Fl) {
				long f;
				unsigned s;
				f = Convert::ToInt32(tB1->Text);
				s = Convert::ToInt32(tB3->Text);
				Fraction temp(f, s);
				return temp;
			}
			else MessageBox::Show("Ошибка ввода", "Ошибка");
		}
		
		Fraction input2() {
			bool Fl;
			Fl = Protect();
			if (Fl) {
				long f;
				unsigned s;
				f = Convert::ToInt32(tB2->Text);
				s = Convert::ToInt32(tB4->Text);
				Fraction temp(f, s);
				return temp;
			}
			else MessageBox::Show("Ошибка ввода", "Ошибка");
		}

		void display(Fraction temp) {
			tB5->Text = Convert::ToString(temp.getFIRST());	
			tB6->Text = Convert::ToString(temp.getSECOND());
		}
		
	private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
		Fraction g1 = input1();
		Fraction g2 = input2();
		Fraction g3;
		g3.add(g1, g2);
		display(g3);
	}	 	 

	private: System::Void sub_Click(System::Object^ sender, System::EventArgs^ e) {
		Fraction g1 = input1();
		Fraction g2 = input2();
		Fraction g3;
		g3.sub(g1, g2);
		display(g3);
	}
	
	private: System::Void mlt_Click(System::Object^ sender, System::EventArgs^ e) {
		Fraction g1 = input1();
		Fraction g2 = input2();
		Fraction g3;
		g3.mul(g1, g2);
		display(g3);
	}

	private: System::Void cmp_Click(System::Object^ sender, System::EventArgs^ e) {
		Fraction g1 = input1();
		Fraction g2 = input2();
		Fraction g3;
		g3.cmp(g1, g2);
		display(g3);
	}
};
}