#pragma once
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <time.h>
#include "Matrix.h"
#include "Helped.h"

namespace Project {

	using namespace System;
	using namespace System::Runtime::InteropServices;
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

	protected:
	private: System::Windows::Forms::DataGridView^ matrix1;
	private: System::Windows::Forms::Button^ random1;
	private: System::Windows::Forms::DataGridView^ matrix2;

	private: System::Windows::Forms::Button^ random2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ trans1;
	private: System::Windows::Forms::Button^ trans2;
	private: System::Windows::Forms::Button^ opr1;
	private: System::Windows::Forms::Button^ opr2;
	private: System::Windows::Forms::Button^ Plus;
	private: System::Windows::Forms::Button^ Umn;
	private: System::Windows::Forms::Button^ Minus;
	private: System::Windows::Forms::Button^ Obr1;
	private: System::Windows::Forms::Button^ Obr2;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^ SizeMTX1_1;
	private: System::Windows::Forms::NumericUpDown^ SizeMTX1_2;
	private: System::Windows::Forms::NumericUpDown^ SizeMTX2_1;
	private: System::Windows::Forms::NumericUpDown^ SizeMTX2_2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ Warning;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::ToolStripMenuItem^ разработчикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::Button^ Razd;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ Error;


	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->matrix1 = (gcnew System::Windows::Forms::DataGridView());
			this->random1 = (gcnew System::Windows::Forms::Button());
			this->matrix2 = (gcnew System::Windows::Forms::DataGridView());
			this->random2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trans1 = (gcnew System::Windows::Forms::Button());
			this->trans2 = (gcnew System::Windows::Forms::Button());
			this->opr1 = (gcnew System::Windows::Forms::Button());
			this->opr2 = (gcnew System::Windows::Forms::Button());
			this->Plus = (gcnew System::Windows::Forms::Button());
			this->Minus = (gcnew System::Windows::Forms::Button());
			this->Umn = (gcnew System::Windows::Forms::Button());
			this->Obr1 = (gcnew System::Windows::Forms::Button());
			this->Obr2 = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->разработчикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SizeMTX1_1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->SizeMTX1_2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->SizeMTX2_1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->SizeMTX2_2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Warning = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->Razd = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Error = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrix1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrix2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SizeMTX1_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SizeMTX1_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SizeMTX2_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SizeMTX2_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// matrix1
			// 
			this->matrix1->AllowUserToAddRows = false;
			this->matrix1->AllowUserToDeleteRows = false;
			this->matrix1->AllowUserToResizeColumns = false;
			this->matrix1->AllowUserToResizeRows = false;
			this->matrix1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->matrix1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrix1->ColumnHeadersVisible = false;
			this->matrix1->Location = System::Drawing::Point(10, 36);
			this->matrix1->Name = L"matrix1";
			this->matrix1->RowHeadersVisible = false;
			this->matrix1->Size = System::Drawing::Size(215, 165);
			this->matrix1->TabIndex = 1;
			this->matrix1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::matrix1_CellEndEdit);
			this->matrix1->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::matrix1_HelpRequested);
			this->matrix1->MouseLeave += gcnew System::EventHandler(this, &MyForm::matrix1_MouseLeave);
			this->matrix1->MouseHover += gcnew System::EventHandler(this, &MyForm::matrix1_MouseHover);
			// 
			// random1
			// 
			this->random1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->random1->Location = System::Drawing::Point(120, 207);
			this->random1->Name = L"random1";
			this->random1->Size = System::Drawing::Size(105, 21);
			this->random1->TabIndex = 2;
			this->random1->Text = L"Случайно";
			this->random1->UseVisualStyleBackColor = true;
			this->random1->Click += gcnew System::EventHandler(this, &MyForm::Randomize1);
			this->random1->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::random1_HelpRequested);
			// 
			// matrix2
			// 
			this->matrix2->AllowUserToAddRows = false;
			this->matrix2->AllowUserToDeleteRows = false;
			this->matrix2->AllowUserToResizeColumns = false;
			this->matrix2->AllowUserToResizeRows = false;
			this->matrix2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->matrix2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrix2->ColumnHeadersVisible = false;
			this->matrix2->Location = System::Drawing::Point(347, 36);
			this->matrix2->Name = L"matrix2";
			this->matrix2->RowHeadersVisible = false;
			this->matrix2->Size = System::Drawing::Size(215, 165);
			this->matrix2->TabIndex = 3;
			this->matrix2->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::matrix2_CellEndEdit);
			this->matrix2->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::matrix2_HelpRequested);
			this->matrix2->MouseLeave += gcnew System::EventHandler(this, &MyForm::matrix2_MouseLeave);
			this->matrix2->MouseHover += gcnew System::EventHandler(this, &MyForm::matrix2_MouseHover);
			// 
			// random2
			// 
			this->random2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->random2->Location = System::Drawing::Point(451, 207);
			this->random2->Name = L"random2";
			this->random2->Size = System::Drawing::Size(111, 21);
			this->random2->TabIndex = 5;
			this->random2->Text = L"Случайно";
			this->random2->UseVisualStyleBackColor = true;
			this->random2->Click += gcnew System::EventHandler(this, &MyForm::Randomize2);
			this->random2->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::random2_HelpRequested);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(231, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Выберите действие:";
			// 
			// trans1
			// 
			this->trans1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->trans1->Location = System::Drawing::Point(50, 263);
			this->trans1->Name = L"trans1";
			this->trans1->Size = System::Drawing::Size(152, 23);
			this->trans1->TabIndex = 9;
			this->trans1->Text = L"Транспонировать";
			this->trans1->UseVisualStyleBackColor = true;
			this->trans1->Click += gcnew System::EventHandler(this, &MyForm::Transpon1);
			this->trans1->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::trans1_HelpRequested);
			// 
			// trans2
			// 
			this->trans2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->trans2->Location = System::Drawing::Point(382, 263);
			this->trans2->Name = L"trans2";
			this->trans2->Size = System::Drawing::Size(138, 23);
			this->trans2->TabIndex = 10;
			this->trans2->Text = L"Транспонировать";
			this->trans2->UseVisualStyleBackColor = true;
			this->trans2->Click += gcnew System::EventHandler(this, &MyForm::Transpon2);
			this->trans2->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::trans2_HelpRequested);
			// 
			// opr1
			// 
			this->opr1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->opr1->Location = System::Drawing::Point(10, 234);
			this->opr1->Name = L"opr1";
			this->opr1->Size = System::Drawing::Size(104, 23);
			this->opr1->TabIndex = 11;
			this->opr1->Text = L"Определитель";
			this->opr1->UseVisualStyleBackColor = true;
			this->opr1->Click += gcnew System::EventHandler(this, &MyForm::opr1_Click);
			this->opr1->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::opr1_HelpRequested);
			// 
			// opr2
			// 
			this->opr2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->opr2->Location = System::Drawing::Point(347, 234);
			this->opr2->Name = L"opr2";
			this->opr2->Size = System::Drawing::Size(98, 23);
			this->opr2->TabIndex = 12;
			this->opr2->Text = L"Определитель";
			this->opr2->UseVisualStyleBackColor = true;
			this->opr2->Click += gcnew System::EventHandler(this, &MyForm::opr2_Click);
			this->opr2->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::opr2_HelpRequested);
			// 
			// Plus
			// 
			this->Plus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Plus->Location = System::Drawing::Point(251, 52);
			this->Plus->Name = L"Plus";
			this->Plus->Size = System::Drawing::Size(75, 23);
			this->Plus->TabIndex = 13;
			this->Plus->Text = L"A + B\r\n";
			this->Plus->UseVisualStyleBackColor = true;
			this->Plus->Click += gcnew System::EventHandler(this, &MyForm::Plus_Click);
			this->Plus->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::Plus_HelpRequested);
			// 
			// Minus
			// 
			this->Minus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Minus->Location = System::Drawing::Point(251, 81);
			this->Minus->Name = L"Minus";
			this->Minus->Size = System::Drawing::Size(75, 23);
			this->Minus->TabIndex = 14;
			this->Minus->Text = L"A - B";
			this->Minus->UseVisualStyleBackColor = true;
			this->Minus->Click += gcnew System::EventHandler(this, &MyForm::Minus_Click);
			this->Minus->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::Minus_HelpRequested);
			// 
			// Umn
			// 
			this->Umn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Umn->Location = System::Drawing::Point(251, 110);
			this->Umn->Name = L"Umn";
			this->Umn->Size = System::Drawing::Size(75, 23);
			this->Umn->TabIndex = 15;
			this->Umn->Text = L"A * B";
			this->Umn->UseVisualStyleBackColor = true;
			this->Umn->Click += gcnew System::EventHandler(this, &MyForm::Umn_Click);
			this->Umn->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::Umn_HelpRequested);
			// 
			// Obr1
			// 
			this->Obr1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Obr1->Location = System::Drawing::Point(120, 234);
			this->Obr1->Name = L"Obr1";
			this->Obr1->Size = System::Drawing::Size(105, 23);
			this->Obr1->TabIndex = 16;
			this->Obr1->Text = L"Обратная";
			this->Obr1->UseVisualStyleBackColor = true;
			this->Obr1->Click += gcnew System::EventHandler(this, &MyForm::Obrat1);
			this->Obr1->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::Obr1_HelpRequested);
			// 
			// Obr2
			// 
			this->Obr2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Obr2->Location = System::Drawing::Point(451, 234);
			this->Obr2->Name = L"Obr2";
			this->Obr2->Size = System::Drawing::Size(111, 23);
			this->Obr2->TabIndex = 17;
			this->Obr2->Text = L"Обратная";
			this->Obr2->UseVisualStyleBackColor = true;
			this->Obr2->Click += gcnew System::EventHandler(this, &MyForm::Obrat2);
			this->Obr2->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::Obr2_HelpRequested);
			// 
			// Clear
			// 
			this->Clear->Location = System::Drawing::Point(234, 168);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(107, 33);
			this->Clear->TabIndex = 18;
			this->Clear->Text = L"Очистить";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			this->Clear->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::Clear_HelpRequested);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(574, 24);
			this->menuStrip1->TabIndex = 19;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->открытьToolStripMenuItem,
					this->saveToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::OpenToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"Сохранить";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->выходToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->разработчикToolStripMenuItem,
					this->справкаToolStripMenuItem
			});
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// разработчикToolStripMenuItem
			// 
			this->разработчикToolStripMenuItem->Name = L"разработчикToolStripMenuItem";
			this->разработчикToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->разработчикToolStripMenuItem->Text = L"Разработчик";
			this->разработчикToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::разработчикToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::справкаToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// SizeMTX1_1
			// 
			this->SizeMTX1_1->Location = System::Drawing::Point(12, 209);
			this->SizeMTX1_1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->SizeMTX1_1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SizeMTX1_1->Name = L"SizeMTX1_1";
			this->SizeMTX1_1->Size = System::Drawing::Size(51, 20);
			this->SizeMTX1_1->TabIndex = 24;
			this->SizeMTX1_1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SizeMTX1_1->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::SizeMTX1_1_HelpRequested);
			// 
			// SizeMTX1_2
			// 
			this->SizeMTX1_2->Location = System::Drawing::Point(69, 209);
			this->SizeMTX1_2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->SizeMTX1_2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SizeMTX1_2->Name = L"SizeMTX1_2";
			this->SizeMTX1_2->Size = System::Drawing::Size(45, 20);
			this->SizeMTX1_2->TabIndex = 26;
			this->SizeMTX1_2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SizeMTX1_2->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::SizeMTX1_2_HelpRequested);
			// 
			// SizeMTX2_1
			// 
			this->SizeMTX2_1->Location = System::Drawing::Point(347, 208);
			this->SizeMTX2_1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->SizeMTX2_1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SizeMTX2_1->Name = L"SizeMTX2_1";
			this->SizeMTX2_1->Size = System::Drawing::Size(45, 20);
			this->SizeMTX2_1->TabIndex = 27;
			this->SizeMTX2_1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SizeMTX2_1->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::SizeMTX2_1_HelpRequested);
			// 
			// SizeMTX2_2
			// 
			this->SizeMTX2_2->Location = System::Drawing::Point(400, 208);
			this->SizeMTX2_2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->SizeMTX2_2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SizeMTX2_2->Name = L"SizeMTX2_2";
			this->SizeMTX2_2->Size = System::Drawing::Size(45, 20);
			this->SizeMTX2_2->TabIndex = 28;
			this->SizeMTX2_2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->SizeMTX2_2->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::SizeMTX2_2_HelpRequested);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(84, 292);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Обновить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Obnova1);
			this->button1->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::button1_HelpRequested);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(414, 292);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Обновить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Obnova2);
			this->button2->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::button2_HelpRequested);
			// 
			// Warning
			// 
			this->Warning->AutoSize = true;
			this->Warning->Location = System::Drawing::Point(263, 208);
			this->Warning->Name = L"Warning";
			this->Warning->Size = System::Drawing::Size(0, 13);
			this->Warning->TabIndex = 31;
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// Razd
			// 
			this->Razd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Razd->Location = System::Drawing::Point(251, 139);
			this->Razd->Name = L"Razd";
			this->Razd->Size = System::Drawing::Size(75, 23);
			this->Razd->TabIndex = 32;
			this->Razd->Text = L"A / B";
			this->Razd->UseVisualStyleBackColor = true;
			this->Razd->Click += gcnew System::EventHandler(this, &MyForm::Razd_Click);
			this->Razd->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::button3_HelpRequested);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// Error
			// 
			this->Error->AutoSize = true;
			this->Error->Location = System::Drawing::Point(213, 312);
			this->Error->Name = L"Error";
			this->Error->Size = System::Drawing::Size(0, 13);
			this->Error->TabIndex = 33;
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->ClientSize = System::Drawing::Size(574, 361);
			this->Controls->Add(this->Error);
			this->Controls->Add(this->Razd);
			this->Controls->Add(this->Warning);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->SizeMTX2_2);
			this->Controls->Add(this->SizeMTX2_1);
			this->Controls->Add(this->SizeMTX1_2);
			this->Controls->Add(this->SizeMTX1_1);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->Obr2);
			this->Controls->Add(this->Obr1);
			this->Controls->Add(this->Umn);
			this->Controls->Add(this->Minus);
			this->Controls->Add(this->Plus);
			this->Controls->Add(this->opr2);
			this->Controls->Add(this->opr1);
			this->Controls->Add(this->trans2);
			this->Controls->Add(this->trans1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->random2);
			this->Controls->Add(this->matrix2);
			this->Controls->Add(this->random1);
			this->Controls->Add(this->matrix1);
			this->Controls->Add(this->menuStrip1);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(590, 400);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(590, 400);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Great Matrix";
			this->Activated += gcnew System::EventHandler(this, &MyForm::MyForm_Activated);
			this->Deactivate += gcnew System::EventHandler(this, &MyForm::MyForm_Deactivate);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MyForm::MyForm_HelpRequested);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrix1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrix2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SizeMTX1_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SizeMTX1_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SizeMTX2_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SizeMTX2_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: 
		   Matrix* Matrix1 = nullptr;//Создание указателя типа Matrix, с последующим его занулением
		   Matrix* Matrix2 = nullptr;//Создание указателя типа Matrix, с последующим его занулением
		   bool CLS_F = false;// СОздание флага CLS_F

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//Отключение кнопок выполнения действий до момента создания массива
		this->trans1->Enabled = false;
		this->trans2->Enabled = false;
		this->Minus->Enabled = false;
		this->Clear->Enabled = false;
		this->Obr1->Enabled = false;
		this->Obr2->Enabled = false;
		this->opr1->Enabled = false;
		this->opr2->Enabled = false;
		this->Plus->Enabled = false;
		this->Razd->Enabled = false;
		this->Umn->Enabled = false;
	}
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e)//Кнопка очистки
	{
		if (MessageBox::Show("Вы действительно хотите очистить матрицы?", "Предупреждение!", MessageBoxButtons::OKCancel, MessageBoxIcon::Warning)== System::Windows::Forms::DialogResult::OK)
		{
			if (Matrix1) {//Проверка на создание матрицы
				matrix1->Rows->Clear();
				matrix1->RowCount = Matrix1->GetSizeMTX1();
				matrix1->ColumnCount = Matrix1->GetSizeMTX2();
				Warning->Text = nullptr;
				for (size_t i = 0; i < Matrix1->GetSizeMTX1(); i++)
				{
					for (size_t j = 0; j < Matrix1->GetSizeMTX2(); j++)
					{
						matrix1->Rows[i]->Cells[j]->Value = 0;
						matrix1->Columns[j]->Width = 25;
						Matrix1->SetMTXel(i, j, 0);
					}
				}
			}
			if (Matrix2) {//Проверка на создание матрицы
				matrix2->Rows->Clear();
				matrix2->RowCount = Matrix2->GetSizeMTX1();
				matrix2->ColumnCount = Matrix2->GetSizeMTX2();
				for (size_t i = 0; i < Matrix2->GetSizeMTX1(); i++)
				{
					for (size_t j = 0; j < Matrix2->GetSizeMTX2(); j++)
					{
						matrix2->Rows[i]->Cells[j]->Value = 0;
						matrix2->Columns[j]->Width = 25;
						Matrix2->SetMTXel(i, j, 0);
					}
				}
			}
		}
	}
	private: System::Void Randomize1(System::Object^ sender, System::EventArgs^ e)//Рандомное заполнение матрицы №1
	{
		Matrix1 = new Matrix(Convert::ToInt32(SizeMTX1_1->Text), Convert::ToInt32(SizeMTX1_2->Text));
		Matrix1->Randomize();
		matrix1->Rows->Clear();
		matrix1->RowCount = Convert::ToInt32(SizeMTX1_1->Text);
		matrix1->ColumnCount = Convert::ToInt32(SizeMTX1_2->Text);
		Warning->Text = nullptr;
		for (size_t i = 0; i < Convert::ToInt32(SizeMTX1_1->Text); i++)
		{
			for (size_t j = 0; j < Convert::ToInt32(SizeMTX1_2->Text); j++)
			{
				if (Matrix1 && i < Matrix1->GetSizeMTX1() && j < Matrix1->GetSizeMTX2() && Matrix1->GetMTXel(i, j))
				{
					matrix1->Rows[i]->Cells[j]->Value = Matrix1->GetMTXel(i, j);
				}
				else
				{
					matrix1->Rows[i]->Cells[j]->Value = 0;
				}
			}
		}
		for (size_t i = 0; i < Convert::ToInt32(SizeMTX1_2->Text); i++)
		{
			matrix1->Columns[i]->Width = 25;
		}
	}

	private: System::Void Randomize2(System::Object^ sender, System::EventArgs^ e)//Рандомное заполнение матрицы №2
	{
		Matrix2 = new Matrix(Convert::ToInt32(SizeMTX2_1->Text), Convert::ToInt32(SizeMTX2_2->Text));
		Matrix2->Randomize();
		matrix2->Rows->Clear();
		matrix2->RowCount = Convert::ToInt32(SizeMTX2_1->Text);
		matrix2->ColumnCount = Convert::ToInt32(SizeMTX2_2->Text);
		Warning->Text = nullptr;
		for (size_t i = 0; i < Convert::ToInt32(SizeMTX2_1->Text); i++)
		{
			for (size_t j = 0; j < Convert::ToInt32(SizeMTX2_2->Text); j++)
			{
				if (Matrix2 && i < Matrix2->GetSizeMTX1() && j < Matrix2->GetSizeMTX2() && Matrix2->GetMTXel(i, j))
				{
					matrix2->Rows[i]->Cells[j]->Value = Matrix2->GetMTXel(i, j);
				}
				else
				{
					matrix2->Rows[i]->Cells[j]->Value = 0;
				}
			}
		}
		for (size_t i = 0; i < Convert::ToInt32(SizeMTX2_2->Text); i++)
		{
			matrix2->Columns[i]->Width = 25;
		}
	}
	private: System::Void opr1_Click(System::Object^ sender, System::EventArgs^ e)//Определитель матрицы №1
	{
		Matrix1->Opredelitel();//Вывоз функции определителя
	}
	private: System::Void opr2_Click(System::Object^ sender, System::EventArgs^ e)//Определитель матрицы №2
	{
		Matrix2->Opredelitel();//Вывоз функции определителя
	}
	private: System::Void Obrat1(System::Object^ sender, System::EventArgs^ e)//Обратная матрица
	{
		Matrix1->Obr_Matrix();
		matrix1->Rows->Clear();
		matrix1->RowCount = Matrix1->GetSizeMTX1();
		matrix1->ColumnCount = Matrix1->GetSizeMTX2();
		Warning->Text = nullptr;
		Matrix* old = nullptr;
		if (Matrix1)//Проверка на создание матрицы
			old = Matrix1;
		Matrix1 = new Matrix(Matrix1->GetSizeMTX1(), Matrix1->GetSizeMTX2());
		for (size_t i = 0; i < Matrix1->GetSizeMTX1(); i++)
		{
			for (size_t j = 0; j < Matrix1->GetSizeMTX2(); j++)
			{
				if (old && i < old->GetSizeMTX1() && j < old->GetSizeMTX2() && old->GetMTXel(i, j)) {
					matrix1->Rows[i]->Cells[j]->Value = old->GetMTXel(i, j);
					Matrix1->SetMTXel(i, j, old->GetMTXel(i, j));
				}
				else {
					matrix1->Rows[i]->Cells[j]->Value = 0;
					Matrix1->SetMTXel(i, j, 0);
				}
			}
		}
		for (size_t i = 0; i < Matrix1->GetSizeMTX2(); i++)
		{
			matrix1->Columns[i]->Width = 40;
		}
	}
	private: System::Void Obrat2(System::Object^ sender, System::EventArgs^ e)//Обратная матрица
	{
		Matrix2->Obr_Matrix();
		matrix2->Rows->Clear();
		matrix2->RowCount = Matrix2->GetSizeMTX1();
		matrix2->ColumnCount = Matrix2->GetSizeMTX2();
		Warning->Text = nullptr;
		Matrix* old = nullptr;
		if (Matrix2)//Проверка на создание матрицы
			old = Matrix2;
		Matrix2 = new Matrix(Matrix2->GetSizeMTX1(), Matrix2->GetSizeMTX2());
		for (size_t i = 0; i < Matrix2->GetSizeMTX1(); i++)
		{
			for (size_t j = 0; j < Matrix2->GetSizeMTX2(); j++)
			{
				if (old && i < old->GetSizeMTX1() && j < old->GetSizeMTX2() && old->GetMTXel(i, j)) {
					matrix2->Rows[i]->Cells[j]->Value = old->GetMTXel(i, j);
					Matrix2->SetMTXel(i, j, old->GetMTXel(i, j));
				}
				else {
					matrix2->Rows[i]->Cells[j]->Value = 0;
					Matrix2->SetMTXel(i, j, 0);
				}
			}
		}
		for (size_t i = 0; i < Matrix2->GetSizeMTX2(); i++)
		{
			matrix2->Columns[i]->Width = 40;
		}
	}
	private: System::Void Transpon1(System::Object^ sender, System::EventArgs^ e)//Транспонирование матрицы №1
	{
		try
		{
			Matrix1->Transpose();
			matrix1->Rows->Clear();
			matrix1->RowCount = Matrix1->GetSizeMTX1();
			matrix1->ColumnCount = Matrix1->GetSizeMTX2();
			Warning->Text = nullptr;
			Matrix* old = nullptr;
			if (Matrix1)
				old = Matrix1;
			Matrix1 = new Matrix(old->GetSizeMTX1(), old->GetSizeMTX2());
			for (size_t i = 0; i < Matrix1->GetSizeMTX1(); i++)
			{
				for (size_t j = 0; j < Matrix1->GetSizeMTX2(); j++)
				{
					if (old && i < old->GetSizeMTX1() && j < old->GetSizeMTX2() && old->GetMTXel(i, j)) {
						matrix1->Rows[i]->Cells[j]->Value = old->GetMTXel(i, j);
						Matrix1->SetMTXel(i, j, old->GetMTXel(i, j));
					}
					else {
						matrix1->Rows[i]->Cells[j]->Value = 0;
						Matrix1->SetMTXel(i, j, 0);
					}
				}
			}
			for (size_t i = 0; i < Matrix1->GetSizeMTX2(); i++)
			{
				matrix1->Columns[i]->Width = 25;
			}
		}
		catch (System::Exception^ a)
		{
			MessageBox::Show("Невозможно транспонировать пустую матрицу!", "Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void Transpon2(System::Object^ sender, System::EventArgs^ e) {//Транспонирование матрицы №2
		try
		{
			Matrix2->Transpose();
			matrix2->Rows->Clear();
			matrix2->RowCount = Matrix2->GetSizeMTX1();
			matrix2->ColumnCount = Matrix2->GetSizeMTX2();
			Warning->Text = nullptr;
			Matrix* old = nullptr;
			if (Matrix2)
				old = Matrix2;
			Matrix2 = new Matrix(old->GetSizeMTX1(), old->GetSizeMTX2());
			for (size_t i = 0; i < Matrix2->GetSizeMTX1(); i++)
			{
				for (size_t j = 0; j < Matrix2->GetSizeMTX2(); j++)
				{
					if (old && i < old->GetSizeMTX1() && j < old->GetSizeMTX2() && old->GetMTXel(i, j)) {
						matrix2->Rows[i]->Cells[j]->Value = old->GetMTXel(i, j);
						Matrix2->SetMTXel(i, j, old->GetMTXel(i, j));
					}
					else {
						matrix2->Rows[i]->Cells[j]->Value = 0;
						Matrix2->SetMTXel(i, j, 0);
					}
				}
			}
			for (size_t i = 0; i < Matrix2->GetSizeMTX2(); i++)
			{
				matrix2->Columns[i]->Width = 25;
			}
		}
		catch (System::Exception^ a)
		{
			MessageBox::Show("Невозможно транспонировать пустую матрицу!", "Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void Obnova1(System::Object^ sender, System::EventArgs^ e) {//Обновление матрицы №1
		matrix1->Rows->Clear();
		matrix1->RowCount = Convert::ToInt32(SizeMTX1_1->Text);
		matrix1->ColumnCount = Convert::ToInt32(SizeMTX1_2->Text);
		Warning->Text = nullptr;
		Matrix* old = nullptr;
		if (Matrix1)
			old = Matrix1;
		Matrix1 = new Matrix(Convert::ToInt32(SizeMTX1_1->Text), Convert::ToInt32(SizeMTX1_2->Text));
		for (size_t i = 0; i < Convert::ToInt32(SizeMTX1_1->Text); i++)
		{
			for (size_t j = 0; j < Convert::ToInt32(SizeMTX1_2->Text); j++)
			{
				if (old && i < old->GetSizeMTX1() && j < old->GetSizeMTX2() && old->GetMTXel(i, j)) {
					matrix1->Rows[i]->Cells[j]->Value = old->GetMTXel(i, j);
					Matrix1->SetMTXel(i, j, old->GetMTXel(i, j));
				}
				else {
					matrix1->Rows[i]->Cells[j]->Value = 0;
					Matrix1->SetMTXel(i, j, 0);
				}
			}
		}
		for (size_t i = 0; i < Convert::ToInt32(SizeMTX1_2->Text); i++)
		{
			matrix1->Columns[i]->Width = 25;
		}
	}
	private: System::Void Obnova2(System::Object^ sender, System::EventArgs^ e) {//Обновление матрицы №2
		matrix2->Rows->Clear();
		matrix2->RowCount = Convert::ToInt32(SizeMTX2_1->Text);
		matrix2->ColumnCount = Convert::ToInt32(SizeMTX2_2->Text);
		Warning->Text = nullptr;
		Matrix* old = nullptr;
		if (Matrix2)
			old = Matrix2;
		Matrix2 = new Matrix(Convert::ToInt32(SizeMTX2_1->Text), Convert::ToInt32(SizeMTX2_2->Text));
		for (size_t i = 0; i < Convert::ToInt32(SizeMTX2_1->Text); i++)
		{
			for (size_t j = 0; j < Convert::ToInt32(SizeMTX2_2->Text); j++)
			{
				if (old && i < old->GetSizeMTX1() && j < old->GetSizeMTX2() && old->GetMTXel(i, j)) {
					matrix2->Rows[i]->Cells[j]->Value = old->GetMTXel(i, j);
					Matrix2->SetMTXel(i, j, old->GetMTXel(i, j));
				}
				else {
					matrix2->Rows[i]->Cells[j]->Value = 0;
					Matrix2->SetMTXel(i, j, 0);
				}
			}
		}
		for (size_t i = 0; i < Convert::ToInt32(SizeMTX2_2->Text); i++)
		{
			matrix2->Columns[i]->Width = 25;
		}
	}
	private: System::Void Plus_Click(System::Object^ sender, System::EventArgs^ e)//Сложение матриц
	{
		if (Matrix1->GetSizeMTX1() != Matrix2->GetSizeMTX1() || Matrix1->GetSizeMTX2() != Matrix2->GetSizeMTX2())
		{
			MessageBox::Show("Размеры матриц должны быть одинаковыми!", "Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			Matrix2->Plus_Matrix(Matrix1);
			matrix1->Rows->Clear();
			matrix2->Rows->Clear();
			matrix2->RowCount = Matrix1->GetSizeMTX1();
			matrix2->ColumnCount = Matrix1->GetSizeMTX2();
			Warning->Text = nullptr;
			for (size_t i = 0; i < Matrix1->GetSizeMTX1(); i++)
			{
				for (size_t j = 0; j < Matrix1->GetSizeMTX2(); j++)
				{
					matrix2->Rows[i]->Cells[j]->Value = Matrix2->GetMTXel(i, j);
				}
			}
			for (size_t i = 0; i < Matrix1->GetSizeMTX2(); i++)
			{
				matrix2->Columns[i]->Width = 25;
			}
		}
	}
	private: System::Void Minus_Click(System::Object^ sender, System::EventArgs^ e)//Вычитание матриц
	{
		if (Matrix1->GetSizeMTX1() != Matrix2->GetSizeMTX1() || Matrix1->GetSizeMTX2() != Matrix2->GetSizeMTX2())
		{
			MessageBox::Show("Размеры матриц должны быть одинаковыми!", "Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			Matrix2->Minus_Matrix(Matrix1);
			matrix1->Rows->Clear();
			matrix2->Rows->Clear();
			matrix2->RowCount = Matrix1->GetSizeMTX1();
			matrix2->ColumnCount = Matrix1->GetSizeMTX2();
			Warning->Text = nullptr;
			for (size_t i = 0; i < Matrix1->GetSizeMTX1(); i++)
			{
				for (size_t j = 0; j < Matrix1->GetSizeMTX2(); j++)
				{
					matrix2->Rows[i]->Cells[j]->Value = Matrix2->GetMTXel(i, j);
				}
			}
			for (size_t i = 0; i < Matrix1->GetSizeMTX2(); i++)
			{
				matrix2->Columns[i]->Width = 25;
			}
		}
	}
	private: System::Void Umn_Click(System::Object^ sender, System::EventArgs^ e)//Уможение матриц
	{
		if (Matrix1->GetSizeMTX2() != Matrix2->GetSizeMTX1())
		{
			MessageBox::Show("Матрицы должны быть согласованными!", "Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			Matrix2->Umn_Matrix(Matrix1);
			matrix1->Rows->Clear();
			matrix2->Rows->Clear();
			matrix2->RowCount = Matrix2->GetSizeMTX1();
			matrix2->ColumnCount = Matrix2->GetSizeMTX2();
			Warning->Text = nullptr;
			for (size_t i = 0; i < Matrix2->GetSizeMTX1(); i++)
			{
				for (size_t j = 0; j < Matrix2->GetSizeMTX2(); j++)
				{
					matrix2->Rows[i]->Cells[j]->Value = Matrix2->GetMTXel(i, j);
				}
			}
			for (size_t i = 0; i < Matrix2->GetSizeMTX2(); i++)
			{
				matrix2->Columns[i]->Width = 25;
			}
		}
	}
	private: System::Void Razd_Click(System::Object^ sender, System::EventArgs^ e)//Деление матриц
	{
		if (Matrix1->GetSizeMTX1() != Matrix2->GetSizeMTX1() || Matrix1->GetSizeMTX2() != Matrix2->GetSizeMTX2())
		{
			MessageBox::Show("Размеры матриц должны быть одинаковыми!", "Great Matrix", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			Matrix2->Razd_Matrix(Matrix1);
			matrix1->Rows->Clear();
			matrix2->Rows->Clear();
			matrix2->RowCount = Matrix1->GetSizeMTX1();
			matrix2->ColumnCount = Matrix1->GetSizeMTX2();
			Warning->Text = nullptr;
			for (size_t i = 0; i < Matrix1->GetSizeMTX1(); i++)
			{
				for (size_t j = 0; j < Matrix1->GetSizeMTX2(); j++)
				{
					matrix2->Rows[i]->Cells[j]->Value = Matrix2->GetMTXel(i, j);
				}
			}
			for (size_t i = 0; i < Matrix1->GetSizeMTX2(); i++)
			{
				matrix2->Columns[i]->Width = 25;
			}
		}
	}
	private:
		String^ nameFile = "";
	private: System::Void OpenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//Открытие файла
	{
		int temp, temp1;
		double temp3;
		OpenFileDialog^ open_file = gcnew OpenFileDialog();
		open_file->InitialDirectory = Application::StartupPath;
		open_file->Filter = "Txt files(*.matrix)|*.matrix|Bin file(*.bin)|*.bin|All files(*.*)|*.*";
		open_file->RestoreDirectory = true;

		if (open_file->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			this->Text = open_file->SafeFileName;
			nameFile = open_file->FileName;
			std::ifstream file((char*)(void*)Marshal::StringToHGlobalAnsi(open_file->FileName->ToString()), std::ios::in);
			file >> temp;
			file >> temp1;
			if (Matrix1)
				delete Matrix1;
			Matrix1 = new Matrix(temp, temp1);
			this->SizeMTX1_1->Value = temp;
			this->SizeMTX1_2->Value = temp1;
			for (int i = 0; i < Matrix1->GetSizeMTX1(); i++)
			{
				for (int j = 0; j < Matrix1->GetSizeMTX2(); j++)
				{
					file >> temp3;
					Matrix1->SetMTXel(i, j, temp3);
				}
			}
			//////////////////////////////////////////
			file >> temp;
			file >> temp1;
			if (Matrix2)
				delete Matrix2;
			Matrix2 = new Matrix(temp, temp1);
			this->SizeMTX2_1->Value = temp;
			this->SizeMTX2_2->Value = temp1;
			for (int i = 0; i < Matrix2->GetSizeMTX1(); i++)
			{
				for (int j = 0; j < Matrix2->GetSizeMTX2(); j++)
				{
					file >> temp3;
					Matrix2->SetMTXel(i, j, temp3);
				}
			}
			Obnova1(sender, e);
			Obnova2(sender, e);
		}
	}

	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//Сохранение файла
	{
		SaveFileDialog^ save_file = gcnew SaveFileDialog();

		save_file->Filter = "Txt files(*.matrix)|*.matrix|Bin file(*.bin)|*.bin|All files(*.*)|*.*";
		save_file->FilterIndex = 1;
		save_file->RestoreDirectory = true;

		if (save_file->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			std::ofstream file((char*)(void*)Marshal::StringToHGlobalAnsi(save_file->FileName->ToString()), std::ofstream::trunc);

			file << Matrix1->GetSizeMTX1() << ' ';
			file << Matrix1->GetSizeMTX2();
			file << std::endl;

			for (int i = 0; i < Matrix1->GetSizeMTX1(); i++)
			{
				for (int j = 0; j < Matrix1->GetSizeMTX2(); j++)
				{
					file << Matrix1->GetMTXel(i, j) << ' ';
				}
				file << std::endl;
			}

			file << Matrix2->GetSizeMTX1() << ' ';
			file << Matrix2->GetSizeMTX2();
			file << std::endl;

			for (int i = 0; i < Matrix2->GetSizeMTX1(); i++)
			{
				for (int j = 0; j < Matrix2->GetSizeMTX2(); j++)
				{
					file << Matrix2->GetMTXel(i, j) << ' ';
				}
				file << std::endl;
			}
			file.close();
		}
	}
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//Выход из программы
	{
	if (MessageBox::Show("Вы действительно хотите завершить работу с Great Matrix?", "Great Matrix", System::Windows::Forms::MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK)
	{
		Application::Exit();
	}
	}
	private: System::Void разработчикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//Вызов информации о разработчике
	{
		MessageBox::Show("Автор приложения: Бушмакин Евгений Александрович Т-893\n\nДля получения краткой информации о возможностях\nприложения используйте кнопку (?) (слева от кнопки закрытия приложения)\n\nЕсли хотите получить подробную информацию в меню\n 'О программе' выберите пункт 'Справка'", "Great Matrix");
	}

	private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)//Вызов справки
	{
		Helped^ F = gcnew Helped(this);
		this->Hide();
		this->Enabled = false;
		F -> Show();
	}

	private: System::Void matrix1_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent)
	{
		MessageBox::Show("Здесь отображается матрица №1", "Great Matrix");
	}
	private: System::Void matrix2_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent)
	{
		MessageBox::Show("Здесь отображается матрица №2", "Great Matrix");
	}

	private: System::Void Plus_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Совершает вычисление: 'A + B'", "Great Matrix");
	}
	private: System::Void Minus_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Совершает вычисление: 'A - B'", "Great Matrix");
	}

	private: System::Void Umn_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Совершает вычисление: 'A * B'", "Great Matrix");
	}

	private: System::Void button3_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Совершает вычисление: 'A / B'", "Great Matrix");
	}
	private: System::Void Clear_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Очистка 2-x матричных окон", "Great Matrix");
	}

	private: System::Void izm1_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Задать размерность матрицы №1", "Great Matrix");
	}

	private: System::Void izm2_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Задать размерность матрицы №2", "Great Matrix");
	}

	private: System::Void random1_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Случайное заполнение матрицы №1", "Great Matrix");
	}

	private: System::Void random2_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Случайное заполнение матрицы №2", "Great Matrix");
	}

	private: System::Void opr1_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Поиск определителя матрицы №1", "Great Matrix");
	}

	private: System::Void opr2_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Поиск определителя матрицы №2", "Great Matrix");
	}

	private: System::Void Obr1_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Поиск обратной матрицы №1", "Great Matrix");
	}

	private: System::Void Obr2_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Поиск обратной матрицы №2", "Great Matrix");
	}

	private: System::Void trans1_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Транспонирование матрицы №1", "Great Matrix");
	}

	private: System::Void trans2_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Транспонирование матрицы №2", "Great Matrix");
	}

	private: System::Void button1_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Обновление размера матрицы №1", "Great Matrix");
	}

	private: System::Void button2_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Обновление размера матрицы №2", "Great Matrix");
	}

	private: System::Void SizeMTX1_1_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Задать размер матрицы №1 по оси Y (строки)", "Great Matrix");
	}

	private: System::Void SizeMTX1_2_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent)
	{
		MessageBox::Show("Задать размер матрицы №1 по оси X (столбцы)", "Great Matrix");
	}

	private: System::Void SizeMTX2_1_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Задать размер матрицы №2 по оси Y (строки)", "Great Matrix");
	}

	private: System::Void SizeMTX2_2_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent) 
	{
		MessageBox::Show("Задать размер матрицы №2 по оси X (столбцы)", "Great Matrix");
	}

	 private: System::Void MyForm_HelpRequested(System::Object^ sender, System::Windows::Forms::HelpEventArgs^ hlpevent)
	{
		 MessageBox::Show("Для получения подробной информации о пользовании\n программой воспользуйтесь меню: \"О программе\" -> \"Справка\" ","Great Matrix");
	}

	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)//Запрос подтверждения на закрытие окна
	{
		if (e->CloseReason == CloseReason::UserClosing && !CLS_F)
		{
			if (MessageBox::Show("Вы действительно хотите завершить работу с Great Matrix?", "Great Matrix", System::Windows::Forms::MessageBoxButtons::OKCancel) == System::Windows::Forms::DialogResult::OK)
			{
				Application::Exit();
			}
			else
			{
				e->Cancel = true;
			}
		}
	}

	private: System::Void matrix1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)//Проверка фомата данных матрицы №1
	{
		try
		{
			Convert::ToDouble(matrix1->CurrentCell->Value);
			Matrix1->ResizeMTX(Convert::ToDouble(SizeMTX1_1->Text), Convert::ToDouble(SizeMTX1_2->Text));
			for (int i = 0; i < Matrix1->GetSizeMTX1(); i++)
			{
				for (int j = 0; j < Matrix1->GetSizeMTX2(); j++)
				{
					Matrix1->SetMTXel(i, j, Convert::ToDouble(matrix1->Rows[i]->Cells[j]->Value));
				}
			}
		}
		catch (FormatException^ ex) 
		{
			matrix1->CurrentCell->Value = 0;
			MessageBox::Show("Ошибка формата данных!\nНажмите кнопу \"Обновить\", чтобы вернуть старые значения.", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void matrix2_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)//Проверка фомата данных матрицы №2
	{
		try
		{
			Convert::ToDouble(matrix2->CurrentCell->Value);
			Matrix2->ResizeMTX(Convert::ToDouble(SizeMTX2_1->Text), Convert::ToDouble(SizeMTX2_2->Text));
			for (int i = 0; i < Matrix2->GetSizeMTX1(); i++)
			{
				for (int j = 0; j < Matrix2->GetSizeMTX2(); j++)
				{
					Matrix2->SetMTXel(i, j, Convert::ToDouble(matrix2->Rows[i]->Cells[j]->Value));
				}
			}
		}
		catch (FormatException^ ex) 
		{
			matrix2->CurrentCell->Value = 0;
			MessageBox::Show("Ошибка формата данных!\nНажмите кнопу \"Обновить\", чтобы вернуть старые значения.", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)//Разблокировка кнопок
	{
		if (Matrix1) 
		{
			this->trans1->Enabled = true;
			this->random1->Enabled = true;
			this->opr1->Enabled = true;
			this->Obr1->Enabled = true;
			this->Clear->Enabled = true;
		}
		if (Matrix2)
		{
			this->trans2->Enabled = true;
			this->random2->Enabled = true;
			this->opr2->Enabled = true;
			this->Obr2->Enabled = true;
			this->Clear->Enabled = true;
		}
		if (Matrix1 && Matrix2)
		{
			this->Plus->Enabled = true;
			this->Minus->Enabled = true;
			this->Umn->Enabled = true;
			this->Razd->Enabled = true;
		}
	}

	private: System::Void matrix1_MouseHover(System::Object^ sender, System::EventArgs^ e)//Подсказка для инициализации
	{
		this->Error->Text = "После полной инициализации\n     матрицы нажмите Enter!";
	}

	private: System::Void matrix1_MouseLeave(System::Object^ sender, System::EventArgs^ e)//Подсказка для инициализации
	{
		this->Error->Text = "";
	}

	private: System::Void matrix2_MouseHover(System::Object^ sender, System::EventArgs^ e)//Подсказка для инициализации
	{
		this->Error->Text = "После полной инициализации\n     матрицы нажмите Enter!";
	}

	private: System::Void matrix2_MouseLeave(System::Object^ sender, System::EventArgs^ e) //Подсказка для инициализации
	{
		this->Error->Text = "";
	}

	private: System::Void MyForm_Activated(System::Object^ sender, System::EventArgs^ e)//Старт таймера
	{
		this->timer1->Start();
	}

	private: System::Void MyForm_Deactivate(System::Object^ sender, System::EventArgs^ e)//Стоп таймера
	{
		this->timer1->Stop();
	}
};
}	