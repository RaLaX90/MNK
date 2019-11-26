#pragma once
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <msclr/marshal.h>
#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string.hpp>
//#include <boost/lexical_cast.hpp>

namespace MNK {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace boost;
	using namespace msclr::interop;

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox1->Location = System::Drawing::Point(493, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1155, 793);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(140, 417);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(226, 25);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::richTextBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(235, 455);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Порахувати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 420);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введіть модель - ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Введіть кількість експериментів - ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(137, 455);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Location = System::Drawing::Point(15, 45);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(351, 356);
			this->dataGridView1->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(260, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 7;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1648, 793);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion

		public: int unit = 30;
		public: delegate double DelegatePtr(double);

		double f(double x) { //конкретная функция, которую рисуем
			double y = Math::Cos(Math::Sqrt(x));
			return Double::IsNaN(y) ? 0 : y;
		}
		
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (dataGridView1->ColumnCount != 0) {

		/*dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->Refresh();*/
		
		//marshal_context ^ context = gcnew marshal_context();
		//typedef vector <string> splitted_vector_type;
		//splitted_vector_type split_vec;
		vector <string> split_vec;
		string full_string = marshal_as<string>(richTextBox1->Text);
		//trim(full_string);
		//String^ str = context->marshal_as<String^>(full_string);
		split(split_vec, full_string, is_any_of("+"));
		//char lul[50] = split_vec[0].to;

		//char * cstr = new char[10];
		//strcpy(cstr, split_vec[0].c_str());
		//char arr[50];
		for (int i = 0; i < split_vec.size(); i++) {
			for (int j = 0; j < split_vec[i].size(); j++) {
				
				//arr[i] = split_vec[i][j];
				if (split_vec[i][j] == 49) {
					MessageBox::Show("lul", "Вывод матрицы из файла");
				}
				//MessageBox::Show(marshal_as<String>(arr[i]), "Вывод матрицы из файла");
				//textBox1->Text = split_vec[i];
			}
		}

		//textBox1->Text = marshal_as<unsigned char>(cstr[1]);
		//MessageBox::Show(lul, "Вывод матрицы из файла");
		/*for (int i = 0; i < split_vec.size(); i++) {
			MessageBox::Show(marshal_as<String^>(split_vec[i]), "Вывод матрицы из файла");
			//textBox1->Text = split_vec[i];
		}*/

		float **temp_arr = new float *[dataGridView1->RowCount];

		for (int i = 0; i < dataGridView1->RowCount; i++) {
			temp_arr[i] = new float[dataGridView1->ColumnCount];
			for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				temp_arr[i][j] = atof(marshal_as<string>(dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString()).c_str());
				//MessageBox::Show(temp_arr[i][j].ToString(), "Вывод матрицы из файла");
			}
		}

		for (int i = 0; i < dataGridView1->RowCount; i++) {
			delete[] temp_arr[i];
		}

		delete[] temp_arr;

		temp_arr = nullptr;

		richTextBox1->Select(1, 5);
		richTextBox1->SelectionColor = Color::Red;
		richTextBox1->Refresh();

		/*for (int i = 0; i < dataGridView1->RowCount; i++) {
			dataGridView1->Columns->Add("", "columns " + (i + 1).ToString());
		}

		for (int i = 0; i < dataGridView1->ColumnCount - 1; i++) {
			dataGridView1->Rows->Add("", "");
		}*/

		//for (int i = 0; i < dataGridView1->RowCount; i++) {
			//for (int j = 0; j < dataGridView1->ColumnCount; j++) {
				//dataGridView3->Rows[i]->Cells[j]->Value = Obj3.getMatrix(i, j);
				/*int count = 0;
				for (int i = 0; i < richTextBox1->TextLength; i++) {
					if (richTextBox1->Text[i].ToString() == "+" || richTextBox1->Text[i].ToString() == "-") {
						count++;
					}
				}
				MessageBox::Show(count.ToString(), "Вывод матрицы из файла");*/

		int pW = pictureBox1->Width, pH = pictureBox1->Height;
		Bitmap ^img = gcnew Bitmap(pW, pH);
		//создаем поверхность для рисования (изображение) с размером элемента управления PictureBox
		Graphics ^g = Graphics::FromImage(img); //создаем устройство для рисования на поверхности
		//рисуем сетку:
		//for (int i = 0; i < pW; i += unit) g->DrawLine(Pens::Blue, i, 0, i, pH);
		//for (int i = 0; i < pH; i += unit)  g->DrawLine(Pens::Blue, 0, i, pW, i);
		//находим середину и рисуем линии осей:
		int mX = int(pW / 15 - pW / 2 % unit);
		int mY = int(pH / 1 - pH / 2 % unit);
		g->DrawLine(Pens::Red, mX, 0, mX, pH);
		g->DrawLine(Pens::Red, 0, mY, pW, mY);
		g->ScaleTransform(1, -1); //переворачиваем ось Y для удобства восприятия
		g->TranslateTransform((float)mX, -(float)mY); //смещаем нулевую координату на пересечение осей
		//рисуем график:
		DelegatePtr^ f = gcnew DelegatePtr(this, &MyForm::f);
		double x1 = -1., x2 = 10., s = 0.25; //границы рисования
		double x = x1;
		double y;
		System::Collections::Generic::List<PointF> ^Points = gcnew System::Collections::Generic::List<PointF>(); //коллекция точек графика
		while (x < x2) {
			y = f(x);
			g->DrawEllipse(Pens::Black, x*unit, y*unit, 3, 3);
			//Points->Add(PointF(x*unit, y*unit));
			//добавляем точку в коллекцию. Полученные координаты сразу переводим в экранные единицы
			x += s;
		}

		//g->DrawLines(Pens::Green, Points->ToArray()); //рисование линий графика

		delete g; //освобождение ресурсов устройства рисования
		//delete context;
		this->pictureBox1->Image = img;
	} else {
		MessageBox::Show("Дані не введено", "Вывод матрицы из файла");
	}
}

private: System::Void textBox1_Leave(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Refresh();

	//str1 = msclr::interop::marshal_as<string>(dataGridView2->Rows[i]->Cells[j]->FormattedValue->ToString());
	//str2 = atof(str1.c_str());


		dataGridView1->Columns->Add("", "X");
		dataGridView1->Columns->Add("", "Y");

	//string str1 = msclr::interop::marshal_as<string>(textBox1->Text->ToString());
	//int str2 = stoi(str1);
	/*for (int i = 0; i < dataGridView1->RowCount; i++) {
		for (int j = 0; j < dataGridView1->ColumnCount; j++) {
			str1 = msclr::interop::marshal_as<string>(dataGridView1->Rows[i]->Cells[j]->FormattedValue->ToString());
			str2 = atof(str1.c_str());*/

	for (int i = 0; i < stoi(msclr::interop::marshal_as<string>(textBox1->Text->ToString())); i++) {
		dataGridView1->Rows->Add("", "");
	}

	//b = (XX)-1 * X * Y

	//dataGridView1->Rows[i]->Cells[j]->Value = Obj3.getMatrix(i, j);
}

private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	//MessageBox::Show((e->KeyChar.ToString() == "0").toString(), "Вывод матрицы из файла");
	if (e->KeyChar.ToString() != "0" && e->KeyChar.ToString() != "1" && e->KeyChar.ToString() != "2" && e->KeyChar.ToString() != "3" &&
		e->KeyChar.ToString() != "4" && e->KeyChar.ToString() != "5" && e->KeyChar.ToString() != "6" && e->KeyChar.ToString() != "7" &&
		e->KeyChar.ToString() != "8" && e->KeyChar.ToString() != "9" && e->KeyChar != 8) {

		e->Handled = true;
		return;

	}
	/*if (e->KeyChar.ToString() == "0") {
		MessageBox::Show("дороу", "Вывод матрицы из файла");
		e->Handled = true;
		//this->Text[this->Text->Length - 1];
		return;
	}
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != 8) {
		e->Handled = true;
		return;
	}*/


}
private: System::Void richTextBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	//MessageBox::Show(a.ToString(), "Вывод матрицы из файла");
	//isalnum(e->KeyChar)
	if (e->KeyChar != 43 && e->KeyChar != 94 && //Символ + и ^
		(e->KeyChar < 48 || e->KeyChar > 57) && //числа от 0-9
		(e->KeyChar < 65 || e->KeyChar > 90) && //Большие английские буквы
		(e->KeyChar < 97 || e->KeyChar > 122) && //Маленькие английские буквы
		e->KeyChar != 8) { //Символ удаления

		e->Handled = true;
		return;

	}
}
};
	
}
