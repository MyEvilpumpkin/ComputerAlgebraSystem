#pragma once
#include <msclr/marshal_cppstd.h>
#include "..\ComputerAlgebraSystem\P.h"
#include "..\ComputerAlgebraSystem\Exceptions.h"
#include "ModuleDescriptionForm.h"
#include "AboutProgramForm.h"
#include "SettingsForm.h"
#include "HistoryForm.h"
#include "HistoryElement.h"

namespace ComputerAlgebraSystemGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Configuration;
	using namespace System::IO;

	bool SAVE_HISTORY;
	bool SAVE_ERRORS;
	int INPUT_FIELDS_FONT_SIZE;
	int OUTPUT_FIELD_FONT_SIZE;
	bool SETTINGS_IS_CHANGED;
	bool SETTINGS_IS_SAVED;
	bool HISTORY_IS_UPDATED;
	History HISTORY;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form {
	public:
		MainForm(void) {
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm() {
			if (components) {
				delete components;
			}
		}




	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ истори€¬ычисленийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ показать»сторию¬ычисленийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранить»сторию¬ычислений¬‘айлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ параметрыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ описаниећодулейToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оѕрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очистить»сторию¬ычисленийToolStripMenuItem;



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->истори€¬ычисленийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->показать»сторию¬ычисленийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранить»сторию¬ычислений¬‘айлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очистить»сторию¬ычисленийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->параметрыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->описаниећодулейToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оѕрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(280, 35);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->tableLayoutPanel1->SetRowSpan(this->textBox3, 4);
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(271, 232);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"¬ыберите модуль\r\n\r\nѕодробные описани€ модулей наход€тс€ в справке (также можно на"
				L"жать кнопку F1)";
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(3, 154);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(271, 81);
			this->textBox2->TabIndex = 2;
			this->textBox2->Visible = false;
			this->textBox2->Click += gcnew System::EventHandler(this, &MainForm::TextBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MainForm::TextBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(3, 67);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(271, 81);
			this->textBox1->TabIndex = 1;
			this->textBox1->Visible = false;
			this->textBox1->Click += gcnew System::EventHandler(this, &MainForm::TextBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::TextBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(3, 241);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(271, 26);
			this->button1->TabIndex = 3;
			this->button1->Text = L"¬ычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::Button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(45) {
				L"N-1 - COM_NN_D", L"N-2 - NZER_N_B", L"N-3 - ADD_1N_N",
					L"N-4 - ADD_NN_N", L"N-5 - SUB_NN_N", L"N-6 - MUL_ND_N", L"N-7 - MUL_Nk_N", L"N-8 - MUL_NN_N", L"N-9 - SUB_NDN_N", L"N-10 - DIV_NN_Dk",
					L"N-11 - DIV_NN_N", L"N-12 - MOD_NN_N", L"N-13 - GCF_NN_N", L"N-14 - LCM_NN_N", L"Z-1 - ABS_Z_N", L"Z-2 - POZ_Z_D", L"Z-3 - MUL_ZM_Z",
					L"Z-4 - TRANS_N_Z", L"Z-5 - TRANS_Z_N", L"Z-6 - ADD_ZZ_Z", L"Z-7 - SUB_ZZ_Z", L"Z-8 - MUL_ZZ_Z", L"Z-9 - DIV_ZN_Z", L"Z-10 - MOD_ZN_Z",
					L"Q-1 - RED_Q_Q", L"Q-2 - INT_Q_B", L"Q-3 - TRANS_Z_Q", L"Q-4 - TRANS_Q_Z", L"Q-5 - ADD_QQ_Q", L"Q-6 - SUB_QQ_Q", L"Q-7 - MUL_QQ_Q",
					L"Q-8 - DIV_QQ_Q", L"P-1 - ADD_PP_P", L"P-2 - SUB_PP_P", L"P-3 - MUL_PQ_P", L"P-4 - MUL_Pxk_P", L"P-5 - LED_P_Q", L"P-6 - DEG_P_N",
					L"P-7 - FAC_P_Q", L"P-8 - MUL_PP_P", L"P-9 - DIV_PP_P", L"P-10 - MOD_PP_P", L"P-11 - GCF_PP_P", L"P-12 - DER_P_P", L"P-13 - NMR_P_P"
			});
			this->comboBox1->Location = System::Drawing::Point(3, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(271, 26);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::ComboBox1_SelectedIndexChanged);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox2, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->comboBox1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox3, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->statusStrip1, 0, 5);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 24);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 26)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(554, 297);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(280, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(271, 32);
			this->label2->TabIndex = 8;
			this->label2->Text = L"¬ывод";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 32);
			this->label1->TabIndex = 9;
			this->label1->Text = L"¬вод";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// statusStrip1
			// 
			this->tableLayoutPanel1->SetColumnSpan(this->statusStrip1, 2);
			this->statusStrip1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 270);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(554, 27);
			this->statusStrip1->TabIndex = 10;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->AutoSize = false;
			this->toolStripStatusLabel1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripStatusLabel1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripStatusLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(539, 22);
			this->toolStripStatusLabel1->Spring = true;
			this->toolStripStatusLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->истори€¬ычисленийToolStripMenuItem,
					this->параметрыToolStripMenuItem, this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(0, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(554, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// истори€¬ычисленийToolStripMenuItem
			// 
			this->истори€¬ычисленийToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->показать»сторию¬ычисленийToolStripMenuItem,
					this->сохранить»сторию¬ычислений¬‘айлToolStripMenuItem, this->очистить»сторию¬ычисленийToolStripMenuItem
			});
			this->истори€¬ычисленийToolStripMenuItem->Enabled = false;
			this->истори€¬ычисленийToolStripMenuItem->Name = L"истори€¬ычисленийToolStripMenuItem";
			this->истори€¬ычисленийToolStripMenuItem->Size = System::Drawing::Size(142, 20);
			this->истори€¬ычисленийToolStripMenuItem->Text = L"»стори€ вычислений";
			// 
			// показать»сторию¬ычисленийToolStripMenuItem
			// 
			this->показать»сторию¬ычисленийToolStripMenuItem->Name = L"показать»сторию¬ычисленийToolStripMenuItem";
			this->показать»сторию¬ычисленийToolStripMenuItem->Size = System::Drawing::Size(308, 22);
			this->показать»сторию¬ычисленийToolStripMenuItem->Text = L"ѕоказать историю вычислений";
			this->показать»сторию¬ычисленийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ѕоказать»сторию¬ычисленийToolStripMenuItem_Click);
			// 
			// сохранить»сторию¬ычислений¬‘айлToolStripMenuItem
			// 
			this->сохранить»сторию¬ычислений¬‘айлToolStripMenuItem->Name = L"сохранить»сторию¬ычислений¬‘айлToolStripMenuItem";
			this->сохранить»сторию¬ычислений¬‘айлToolStripMenuItem->Size = System::Drawing::Size(308, 22);
			this->сохранить»сторию¬ычислений¬‘айлToolStripMenuItem->Text = L"—охранить историю вычислений в файл";
			this->сохранить»сторию¬ычислений¬‘айлToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::—охранить»сторию¬ычислений¬‘айлToolStripMenuItem_Click);
			// 
			// очистить»сторию¬ычисленийToolStripMenuItem
			// 
			this->очистить»сторию¬ычисленийToolStripMenuItem->Name = L"очистить»сторию¬ычисленийToolStripMenuItem";
			this->очистить»сторию¬ычисленийToolStripMenuItem->Size = System::Drawing::Size(308, 22);
			this->очистить»сторию¬ычисленийToolStripMenuItem->Text = L"ќчистить историю вычислений";
			this->очистить»сторию¬ычисленийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ќчистить»сторию¬ычисленийToolStripMenuItem_Click);
			// 
			// параметрыToolStripMenuItem
			// 
			this->параметрыToolStripMenuItem->Name = L"параметрыToolStripMenuItem";
			this->параметрыToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->параметрыToolStripMenuItem->Text = L"Ќастройки";
			this->параметрыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ѕараметрыToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->описаниећодулейToolStripMenuItem,
					this->оѕрограммеToolStripMenuItem
			});
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->справкаToolStripMenuItem->Text = L"—правка";
			// 
			// описаниећодулейToolStripMenuItem
			// 
			this->описаниећодулейToolStripMenuItem->Name = L"описаниећодулейToolStripMenuItem";
			this->описаниећодулейToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->описаниећодулейToolStripMenuItem->Text = L"ќписание модулей";
			this->описаниећодулейToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ќписаниећодулейToolStripMenuItem_Click);
			// 
			// оѕрограммеToolStripMenuItem
			// 
			this->оѕрограммеToolStripMenuItem->Name = L"оѕрограммеToolStripMenuItem";
			this->оѕрограммеToolStripMenuItem->Size = System::Drawing::Size(183, 22);
			this->оѕрограммеToolStripMenuItem->Text = L"ќ программе";
			this->оѕрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ќѕрограммеToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 321);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(570, 360);
			this->Name = L"MainForm";
			this->Text = L"—истема компьютерной алгебры";
			this->HelpButtonClicked += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::MyForm_HelpButtonClicked);
			this->Activated += gcnew System::EventHandler(this, &MainForm::MainForm_Activated);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->HelpRequested += gcnew System::Windows::Forms::HelpEventHandler(this, &MainForm::MainForm_HelpRequested);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void SetFields(String^ field1, String^ field2) {
		this->textBox1->Visible = true;
		this->textBox1->Text = field1;
		if (field2 == "EMPTY")
			this->textBox2->Visible = false;
		else {
			this->textBox2->Visible = true;
			this->textBox2->Text = field2;
		}
	}

	private: System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ str = "EMPTY";
		String^ str0 = "¬ведите число";
		String^ str1 = "¬ведите натуральное число";
		String^ str2 = "¬ведите целое число";
		String^ str3 = "¬ведите рациональное число";
		String^ str4 = "¬ведите многочлен";
		this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
		this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
		this->textBox3->Text = "";
		this->toolStripStatusLabel1->Text = "";
		this->toolStripStatusLabel1->BackColor = System::Drawing::SystemColors::Control;
		switch (this->comboBox1->SelectedIndex) {
			case 0:
				SetFields(str1, str1);
				break;
			case 1:
				SetFields(str1, str);
				break;
			case 2:
				SetFields(str1, str);
				break;
			case 3:
				SetFields(str1, str1);
				break;
			case 4:
				SetFields(str1, str1);
				break;
			case 5:
				SetFields(str1, str0);
				break;
			case 6:
				SetFields(str1, str0);
				break;
			case 7:
				SetFields(str1, str1);
				break;
			case 8:
				SetFields(str1, str1);
				break;
			case 9:
				SetFields(str1, str1);
				break;
			case 10:
				SetFields(str1, str1);
				break;
			case 11:
				SetFields(str1, str1);
				break;
			case 12:
				SetFields(str1, str1);
				break;
			case 13:
				SetFields(str1, str1);
				break;
			case 14:
				SetFields(str2, str);
				break;
			case 15:
				SetFields(str2, str);
				break;
			case 16:
				SetFields(str2, str);
				break;
			case 17:
				SetFields(str1, str);
				break;
			case 18:
				SetFields(str2, str);
				break;
			case 19:
				SetFields(str2, str2);
				break;
			case 20:
				SetFields(str2, str2);
				break;
			case 21:
				SetFields(str2, str2);
				break;
			case 22:
				SetFields(str2, str1);
				break;
			case 23:
				SetFields(str2, str1);
				break;
			case 24:
				SetFields(str3, str);
				break;
			case 25:
				SetFields(str3, str);
				break;
			case 26:
				SetFields(str2, str);
				break;
			case 27:
				SetFields(str3, str);
				break;
			case 28:
				SetFields(str3, str3);
				break;
			case 29:
				SetFields(str3, str3);
				break;
			case 30:
				SetFields(str3, str3);
				break;
			case 31:
				SetFields(str3, str3);
				break;
			case 32:
				SetFields(str4, str4);
				break;
			case 33:
				SetFields(str4, str4);
				break;
			case 34:
				SetFields(str4, str3);
				break;
			case 35:
				SetFields(str4, str0);
				break;
			case 36:
				SetFields(str4, str);
				break;
			case 37:
				SetFields(str4, str);
				break;
			case 38:
				SetFields(str4, str);
				break;
			case 39:
				SetFields(str4, str4);
				break;
			case 40:
				SetFields(str4, str4);
				break;
			case 41:
				SetFields(str4, str4);
				break;
			case 42:
				SetFields(str4, str4);
				break;
			case 43:
				SetFields(str4, str);
				break;
			case 44:
				SetFields(str4, str);
				break;
		}
	}

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string Module = "-";
		std::string FirstOperand = "-";
		std::string SecondOperand = "-";
		std::string Result = "-";
		try {
			this->textBox3->Text = "";
			this->toolStripStatusLabel1->Text = "¬ычисление...";
			this->toolStripStatusLabel1->BackColor = System::Drawing::SystemColors::Control;
			switch (this->comboBox1->SelectedIndex) {
				case 0:
				{
					Module = "N-1 - COM_NN_D";
					N n1, n2;
					int result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n1 = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n2 = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = COM_NN_D(n1, n2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = std::to_string(result);
					this->textBox3->Text = result.ToString();
				}
				break;
				case 1:
				{
					Module = "N-2 - NZER_N_B";
					N n;
					bool result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = NZER_N_B(n);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = std::to_string(result);
					this->textBox3->Text = result.ToString();
				}
				break;
				case 2:
				{
					Module = "N-3 - ADD_1N_N";
					N n, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = ADD_1N_N(n);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 3:
				{
					Module = "N-4 - ADD_NN_N";
					N n1, n2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n1 = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n2 = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = ADD_NN_N(n1, n2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 4:
				{
					Module = "N-5 - SUB_NN_N";
					N n1, n2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n1 = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n2 = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = SUB_NN_N(n1, n2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 5:
				{
					Module = "N-6 - MUL_ND_N";
					N n1, n2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n1 = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n2 = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = MUL_ND_N(n1, n2.ToUInt());
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 6:
				{
					Module = "N-7 - MUL_Nk_N";
					N n1, n2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n1 = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n2 = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = MUL_Nk_N(n1, n2.ToUInt());
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 7:
				{
					Module = "N-8 - MUL_NN_N";
					N n1, n2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n1 = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n2 = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = MUL_NN_N(n1, n2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 8:
				{
					Module = "N-9 - MUL_NN_N";
					N n1, n2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n1 = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n2 = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = SUB_NDN_N(n1, 1, n2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 9:
				{
					Module = "N-10 - DIV_NN_Dk";
					N n1, n2;
					int result, k;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n1 = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n2 = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = DIV_NN_Dk(n1, n2, k);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = std::to_string(result);
					this->textBox3->Text = result.ToString();
				}
				break;
				case 10:
				{
					Module = "N-11 - DIV_NN_N";
					N n1, n2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n1 = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n2 = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = DIV_NN_N(n1, n2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 11:
				{
					Module = "N-12 - MOD_NN_N";
					N n1, n2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n1 = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n2 = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = MOD_NN_N(n1, n2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 12:
				{
					Module = "N-13 - GCF_NN_N";
					N n1, n2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n1 = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n2 = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = GCF_NN_N(n1, n2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 13:
				{
					Module = "N-14 - LCM_NN_N";
					N n1, n2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n1 = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n2 = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = LCM_NN_N(n1, n2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 14:
				{
					Module = "Z-1 - ABS_Z_N";
					Z z;
					N result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						z = Z(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = ABS_Z_N(z);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 15:
				{
					Module = "Z-2 - POZ_Z_D";
					Z z;
					int result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						z = Z(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = POZ_Z_D(z);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = std::to_string(result);
					this->textBox3->Text = result.ToString();
				}
				break;
				case 16:
				{
					Module = "Z-3 - MUL_ZM_Z";
					Z z, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						z = Z(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = MUL_ZM_Z(z);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 17:
				{
					Module = "Z-4 - TRANS_N_Z";
					N n;
					Z result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						n = N(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = TRANS_N_Z(n);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 18:
				{
					Module = "Z-5 - TRANS_Z_N";
					Z z;
					N result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						z = Z(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = TRANS_Z_N(z);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 19:
				{
					Module = "Z-6 - ADD_ZZ_Z";
					Z z1, z2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						z1 = Z(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						z2 = Z(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = ADD_ZZ_Z(z1, z2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 20:
				{
					Module = "Z-7 - SUB_ZZ_Z";
					Z z1, z2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						z1 = Z(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						z2 = Z(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = SUB_ZZ_Z(z1, z2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 21:
				{
					Module = "Z-8 - MUL_ZZ_Z";
					Z z1, z2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						z1 = Z(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						z2 = Z(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = MUL_ZZ_Z(z1, z2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 22:
				{
					Module = "Z-9 - DIV_ZN_Z";
					Z z, result;
					N n;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						z = Z(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = DIV_ZN_Z(z, n);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 23:
				{
					Module = "Z-10 - MOD_ZN_Z";
					Z z, result;
					N n;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						z = Z(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = MOD_ZN_Z(z, n);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 24:
				{
					Module = "Q-1 - RED_Q_Q";
					Q q, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						q = Q(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = RED_Q_Q(q);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 25:
				{
					Module = "Q-2 - INT_Q_B";
					Q q;
					bool result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						q = Q(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = INT_Q_B(q);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = std::to_string(result);
					this->textBox3->Text = result.ToString();
				}
				break;
				case 26:
				{
					Module = "Q-3 - TRANS_Z_Q";
					Z z;
					Q result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						z = Z(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = TRANS_Z_Q(z);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 27:
				{
					Module = "Q-4 - TRANS_Q_Z";
					Q q;
					Z result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						q = Q(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = TRANS_Q_Z(q);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 28:
				{
					Module = "Q-5 - ADD_QQ_Q";
					Q q1, q2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						q1 = Q(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						q2 = Q(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = ADD_QQ_Q(q1, q2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 29:
				{
					Module = "Q-6 - SUB_QQ_Q";
					Q q1, q2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						q1 = Q(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						q2 = Q(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = SUB_QQ_Q(q1, q2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 30:
				{
					Module = "Q-7 - MUL_QQ_Q";
					Q q1, q2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						q1 = Q(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						q2 = Q(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = MUL_QQ_Q(q1, q2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 31:
				{
					Module = "Q-8 - DIV_QQ_Q";
					Q q1, q2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						q1 = Q(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						q2 = Q(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = DIV_QQ_Q(q1, q2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 32:
				{
					Module = "P-1 - ADD_PP_P";
					P p1, p2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						p1 = P(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						p2 = P(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = ADD_PP_P(p1, p2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 33:
				{
					Module = "P-2 - SUB_PP_P";
					P p1, p2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						p1 = P(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						p2 = P(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = SUB_PP_P(p1, p2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 34:
				{
					Module = "P-3 - MUL_PQ_P";
					P p, result;
					Q q;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						p = P(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						q = Q(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = MUL_PQ_P(p, q);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 35:
				{
					Module = "P-4 - MUL_Pxk_P";
					P p, result;
					N n;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						p = P(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						n = N(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = MUL_Pxk_P(p, n.ToUInt());
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 36:
				{
					Module = "P-5 - LED_P_Q";
					P p;
					Q result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						p = P(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = LED_P_Q(p);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 37:
				{
					Module = "P-6 - DEG_P_N";
					P p;
					N result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						p = P(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = DEG_P_N(p);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 38:
				{
					Module = "P-7 - FAC_P_Q";
					P p;
					Q result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						p = P(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = FAC_P_Q(p);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 39:
				{
					Module = "P-8 - MUL_PP_P";
					P p1, p2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						p1 = P(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						p2 = P(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = MUL_PP_P(p1, p2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 40:
				{
					Module = "P-9 - DIV_PP_P";
					P p1, p2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						p1 = P(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						p2 = P(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = DIV_PP_P(p1, p2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 41:
				{
					Module = "P-10 - MOD_PP_P";
					P p1, p2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						p1 = P(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						p2 = P(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = MOD_PP_P(p1, p2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 42:
				{
					Module = "P-11 - GCF_PP_P";
					P p1, p2, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						p1 = P(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					try {
						SecondOperand = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
						p2 = P(SecondOperand);
					}
					catch (IncorrectString) {
						this->textBox2->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = GCF_PP_P(p1, p2);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 43:
				{
					Module = "P-12 - DER_P_P";
					P p, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						p = P(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = DER_P_P(p);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				case 44:
				{
					Module = "P-13 - DER_P_P";
					P p, result;
					bool initializationIsCorrect = true;
					try {
						FirstOperand = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
						p = P(FirstOperand);
					}
					catch (IncorrectString) {
						this->textBox1->ForeColor = System::Drawing::Color::Red;
						initializationIsCorrect = false;
					}
					if (!initializationIsCorrect)
						throw Error("ќшибка: ¬ведены некорректные данные");
					try {
						result = NMR_P_P(p);
					}
					catch (ArithmeticalError ex) {
						throw Error(ex.what());
					}
					Result = result.ToString();
					this->textBox3->Text = msclr::interop::marshal_as<String^>(Result);
				}
				break;
				default:
					this->textBox3->Text = "¬ыберите модуль\r\n\r\nѕодробные описани€ модулей наход€тс€ в справке (также можно нажать кнопку F1)";
					throw Error("ќшибка: ћодуль не выбран");
					break;
			}
			this->toolStripStatusLabel1->Text = "√отово";
			this->toolStripStatusLabel1->BackColor = System::Drawing::Color::SkyBlue;
			if (SAVE_HISTORY) {
				try {
					HISTORY.push_back(HistoryElement(Module, FirstOperand, SecondOperand, Result));
					HISTORY_IS_UPDATED = true;
				}
				catch (std::bad_alloc) {
					this->toolStripStatusLabel1->Text = "ѕредупреждение: операци€ выполнена, но не сохранена в историю (недостаточно пам€ти)";
					this->toolStripStatusLabel1->BackColor = System::Drawing::Color::Khaki;
				}
			}
		}
		catch (Error ex) {
			this->toolStripStatusLabel1->Text = msclr::interop::marshal_as<String^>(ex.what());
			this->toolStripStatusLabel1->BackColor = System::Drawing::Color::LightCoral;
			Result = ex.what();
			if (SAVE_HISTORY && SAVE_ERRORS) {
				try {
					HISTORY.push_back(HistoryElement(Module, FirstOperand, SecondOperand, Result));
					HISTORY_IS_UPDATED = true;
				}
				catch (std::bad_alloc) {
					this->toolStripStatusLabel1->Text = msclr::interop::marshal_as<String^>(ex.what()) + " ( + недостаточно пам€ти, чтобы записать ошибку в историю)";
				}
			}
		}
		catch (std::bad_alloc) {
			this->toolStripStatusLabel1->Text = "ќшибка: недостаточно пам€ти";
			this->toolStripStatusLabel1->BackColor = System::Drawing::Color::LightCoral;
			Result = "ќшибка: недостаточно пам€ти";
			if (SAVE_HISTORY && SAVE_ERRORS) {
				try {
					HISTORY.push_back(HistoryElement(Module, FirstOperand, SecondOperand, Result));
					HISTORY_IS_UPDATED = true;
				}
				catch (std::bad_alloc) {
					this->toolStripStatusLabel1->Text = "ќшибка: недостаточно пам€ти" + " ( + недостаточно пам€ти, чтобы записать ошибку в историю)";
				}
			}
		}
		catch (...) {
			this->toolStripStatusLabel1->Text = "ќшибка: неизвестна€ ошибка (место: вычисление)";
			this->toolStripStatusLabel1->BackColor = System::Drawing::Color::LightCoral;
			Result = "ќшибка: неизвестна€ ошибка (место: вычисление)";
			if (SAVE_HISTORY && SAVE_ERRORS) {
				try {
					HISTORY.push_back(HistoryElement(Module, FirstOperand, SecondOperand, Result));
					HISTORY_IS_UPDATED = true;
				}
				catch (std::bad_alloc) {
					this->toolStripStatusLabel1->Text = "ќшибка: недостаточно пам€ти" + " ( + недостаточно пам€ти, чтобы записать ошибку в историю)";
				}
			}
		}
	}

	private: System::Void TextBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str0 = "¬ведите число";
		String^ str1 = "¬ведите натуральное число";
		String^ str2 = "¬ведите целое число";
		String^ str3 = "¬ведите рациональное число";
		String^ str4 = "¬ведите многочлен";
		if (this->textBox1->Text == str0 || this->textBox1->Text == str1 || this->textBox1->Text == str2 || this->textBox1->Text == str3 || this->textBox1->Text == str4)
			this->textBox1->Text = "";
	}

	private: System::Void TextBox2_Click(System::Object ^ sender, System::EventArgs ^ e) {
		String^ str0 = "¬ведите число";
		String^ str1 = "¬ведите натуральное число";
		String^ str2 = "¬ведите целое число";
		String^ str3 = "¬ведите рациональное число";
		String^ str4 = "¬ведите многочлен";
		if (this->textBox2->Text == str0 || this->textBox2->Text == str1 || this->textBox2->Text == str2 || this->textBox2->Text == str3 || this->textBox2->Text == str4)
			this->textBox2->Text = "";
	}

	private: System::Void TextBox1_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
		this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
	}

	private: System::Void TextBox2_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
		this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
	}

			 ModuleDescriptionForm^ moduleDescriptionForm;

	private: System::Void MyForm_HelpButtonClicked(System::Object ^ sender, System::ComponentModel::CancelEventArgs ^ e) {
		if (moduleDescriptionForm == nullptr || moduleDescriptionForm->IsDisposed) {
			moduleDescriptionForm = gcnew ModuleDescriptionForm();
			moduleDescriptionForm->Show();
		}
		else
			moduleDescriptionForm->Focus();
	}

	private: System::Void MainForm_HelpRequested(System::Object ^ sender, System::Windows::Forms::HelpEventArgs ^ hlpevent) {
		if (moduleDescriptionForm == nullptr || moduleDescriptionForm->IsDisposed) {
			moduleDescriptionForm = gcnew ModuleDescriptionForm();
			moduleDescriptionForm->Show();
		}
		else
			moduleDescriptionForm->Focus();
	}

	private: System::Void ќписаниећодулейToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (moduleDescriptionForm == nullptr || moduleDescriptionForm->IsDisposed) {
			moduleDescriptionForm = gcnew ModuleDescriptionForm();
			moduleDescriptionForm->Show();
		}
		else
			moduleDescriptionForm->Focus();
	}

			 AboutProgramForm^ aboutProgramForm;

	private: System::Void ќѕрограммеToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (aboutProgramForm == nullptr || aboutProgramForm->IsDisposed) {

			aboutProgramForm = gcnew AboutProgramForm();
			aboutProgramForm->Show();
		}
		else
			aboutProgramForm->Focus();
	}

	private: void CreateConfigFile() {
		StreamWriter^ sw = gcnew StreamWriter(Path::GetFileName(System::Reflection::Assembly::GetEntryAssembly()->Location) + ".config");
		sw->Write("<?xml version=\"1.0\" encoding=\"utf-8\" ?>\r\n<configuration>\r\n  <appSettings>\r\n    <add key=\"saveHistory\" value=\"False\" />\r\n    <add key=\"saveErrors\" value=\"True\" />\r\n    <add key=\"inputFieldsFontSize\" value=\"11\" />\r\n    <add key=\"outputFieldFontSize\" value=\"11\" />\r\n  </appSettings>\r\n</configuration>\r\n");
		sw->Close();
	}

	private: void SetDefaultSettings() {
		SAVE_HISTORY = false;
		SAVE_ERRORS = true;
		INPUT_FIELDS_FONT_SIZE = 11;
		OUTPUT_FIELD_FONT_SIZE = 11;
		SETTINGS_IS_CHANGED = true;
	}

	private: void ApplySettings() {
		this->textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->FontFamily, (float)INPUT_FIELDS_FONT_SIZE);
		this->textBox2->Font = gcnew System::Drawing::Font(textBox2->Font->FontFamily, (float)INPUT_FIELDS_FONT_SIZE);
		this->textBox3->Font = gcnew System::Drawing::Font(textBox3->Font->FontFamily, (float)OUTPUT_FIELD_FONT_SIZE);
		this->истори€¬ычисленийToolStripMenuItem->Enabled = SAVE_HISTORY;
		SETTINGS_IS_CHANGED = false;
	}

	private: System::Void MainForm_Load(System::Object ^ sender, System::EventArgs ^ e) {
		if (File::Exists(Directory::GetCurrentDirectory() + "\\" + Path::GetFileName(System::Reflection::Assembly::GetEntryAssembly()->Location) + ".config") || File::Exists(Directory::GetCurrentDirectory() + "\\app.config")) {
			try {
				String^ str = System::Configuration::ConfigurationManager::AppSettings["saveHistory"];
				if (str == "True" || str == "False")
					SAVE_HISTORY = str == "True";
				else
					throw std::exception();
				str = System::Configuration::ConfigurationManager::AppSettings["saveErrors"];
				if (str == "True" || str == "False")
					SAVE_ERRORS = str == "True";
				else
					throw std::exception();
				str = System::Configuration::ConfigurationManager::AppSettings["inputFieldsFontSize"];
				if (str == "10" || str == "11" || str == "12" || str == "14" || str == "16" || str == "18" || str == "20" || str == "22")
					INPUT_FIELDS_FONT_SIZE = int::Parse(str);
				else
					throw std::exception();
				str = System::Configuration::ConfigurationManager::AppSettings["outputFieldFontSize"];
				if (str == "10" || str == "11" || str == "12" || str == "14" || str == "16" || str == "18" || str == "20" || str == "22")
					OUTPUT_FIELD_FONT_SIZE = int::Parse(str);
				else
					throw std::exception();
				SETTINGS_IS_CHANGED = true;
			}
			catch (...) {
				try {
					CreateConfigFile();
					this->toolStripStatusLabel1->Text = "ѕредупреждение: файл конфигурации повреждЄн (файл пересоздан)";
					this->toolStripStatusLabel1->BackColor = System::Drawing::Color::Khaki;
					SetDefaultSettings();
				}
				catch (...) {
					this->toolStripStatusLabel1->Text = "ќшибка: неизвестна€ ошибка (место: пересоздание файла конфигурации)";
					this->toolStripStatusLabel1->BackColor = System::Drawing::Color::LightCoral;
					SetDefaultSettings();
				}
			}
			HISTORY_IS_UPDATED = true;
		}
		else {
			try {
				CreateConfigFile();
				this->toolStripStatusLabel1->Text = "ѕредупреждение: файл конфигурации не найден (cоздан новый файл)";
				this->toolStripStatusLabel1->BackColor = System::Drawing::Color::Khaki;
				SetDefaultSettings();
			}
			catch (...) {
				this->toolStripStatusLabel1->Text = "ќшибка: неизвестна€ ошибка (место: создание файла конфигурации)";
				this->toolStripStatusLabel1->BackColor = System::Drawing::Color::LightCoral;
				SetDefaultSettings();
			}
		}
		ApplySettings();
	}

			 SettingsForm^ settingsForm;

	private: System::Void ѕараметрыToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (settingsForm == nullptr || settingsForm->IsDisposed) {
			settingsForm = gcnew SettingsForm();
			settingsForm->Show();
		}
		else
			settingsForm->Focus();
	}

	private: System::Void MainForm_Activated(System::Object ^ sender, System::EventArgs ^ e) {
		if (SETTINGS_IS_CHANGED)
			ApplySettings();
	}

	private: System::Void ќчистить»сторию¬ычисленийToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (HISTORY.size()) {
			System::Windows::Forms::DialogResult dialog = MessageBox::Show("¬ы действительно желаете очистить историю вычислений?", "ќчистка истории вычислений", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (dialog == System::Windows::Forms::DialogResult::Yes) {
				HISTORY.clear();
				this->toolStripStatusLabel1->Text = "»стори€ вычислений очищена";
				this->toolStripStatusLabel1->BackColor = System::Drawing::Color::SkyBlue;
			}
		}
		else {
			this->toolStripStatusLabel1->Text = "ѕредупреждение: очистка не выполнена (истори€ вычислений пуста)";
			this->toolStripStatusLabel1->BackColor = System::Drawing::Color::Khaki;
		}
		HISTORY_IS_UPDATED = true;
	}

			 HistoryForm^ historyForm;

	private: System::Void ѕоказать»сторию¬ычисленийToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (HISTORY.size()) {
			if (historyForm == nullptr || historyForm->IsDisposed) {
				historyForm = gcnew HistoryForm();
				historyForm->Show();
			}
			else
				historyForm->Focus();
		}
		else {
			this->toolStripStatusLabel1->Text = "ѕредупреждение: истори€ вычислений пуста";
			this->toolStripStatusLabel1->BackColor = System::Drawing::Color::Khaki;
		}
	}

	private: System::Void —охранить»сторию¬ычислений¬‘айлToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (HISTORY.size()) {
			SaveFileDialog^ sfd = gcnew SaveFileDialog();
			sfd->InitialDirectory = Directory::GetCurrentDirectory();
			sfd->RestoreDirectory = true;
			sfd->FileName = "»стори€ вычислений.txt";
			sfd->DefaultExt = "txt";
			sfd->Filter = "“екстовые документы (*.txt)|*.txt";
			if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				try {
					Stream^ stream = sfd->OpenFile();
					StreamWriter^ sw = gcnew StreamWriter(stream);
					for (size_t i = 0; i < HISTORY.size(); i++)
						sw->Write(msclr::interop::marshal_as<String^>(HISTORY[i].module) + " | " + msclr::interop::marshal_as<String^>(HISTORY[i].firstOperand) + " | " + msclr::interop::marshal_as<String^>(HISTORY[i].secondOperand) + " | " + msclr::interop::marshal_as<String^>(HISTORY[i].result) + "\r\n");
					sw->Close();
					this->toolStripStatusLabel1->Text = "»стори€ вычислений успешно записана в файл";
					this->toolStripStatusLabel1->BackColor = System::Drawing::Color::SkyBlue;
				}
				catch (...) {
					this->toolStripStatusLabel1->Text = "ќшибка: неизвестна€ ошибка (место: сохранение истории вычислений в файл)";
					this->toolStripStatusLabel1->BackColor = System::Drawing::Color::LightCoral;
				}
			}
		}
		else {
			this->toolStripStatusLabel1->Text = "ѕредупреждение: сохранение не выполнено (истори€ вычислений пуста)";
			this->toolStripStatusLabel1->BackColor = System::Drawing::Color::Khaki;
		}
	}
	};
}

