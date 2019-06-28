#pragma once

namespace ComputerAlgebraSystemGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	extern bool SAVE_HISTORY;
	extern bool SAVE_ERRORS;
	extern int INPUT_FIELDS_FONT_SIZE;
	extern int OUTPUT_FIELD_FONT_SIZE;
	extern bool SETTINGS_IS_CHANGED;
	extern bool SETTINGS_IS_SAVED;

	/// <summary>
	/// Сводка для SettingsForm
	/// </summary>
	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(void)
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
		~SettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel5, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 39)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 126)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 126)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 52)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 18)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(739, 395);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 4;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				288)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				149)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				149)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				151)));
			this->tableLayoutPanel5->Controls->Add(this->button1, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->button2, 2, 0);
			this->tableLayoutPanel5->Controls->Add(this->button3, 3, 0);
			this->tableLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel5->Location = System::Drawing::Point(1, 348);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(737, 46);
			this->tableLayoutPanel5->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(292, 9);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"По умолчанию";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SettingsForm::Button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(441, 9);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Отменть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SettingsForm::Button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(590, 9);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Применить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SettingsForm::Button3_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel6, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel4, 0, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(1, 168);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(737, 126);
			this->tableLayoutPanel2->TabIndex = 6;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 3;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				297)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				96)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				344)));
			this->tableLayoutPanel6->Controls->Add(this->comboBox2, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(0, 84);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(737, 42);
			this->tableLayoutPanel6->TabIndex = 4;
			// 
			// comboBox2
			// 
			this->comboBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"10", L"11", L"12", L"14", L"16", L"18", L"20",
					L"22"
			});
			this->comboBox2->Location = System::Drawing::Point(301, 4);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(88, 32);
			this->comboBox2->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(27, 0);
			this->label5->Margin = System::Windows::Forms::Padding(27, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(266, 42);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Размер шрифта поля вывода";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(16, 0);
			this->label3->Margin = System::Windows::Forms::Padding(16, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(717, 42);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Размер шрифта";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 3;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				297)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				96)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				344)));
			this->tableLayoutPanel4->Controls->Add(this->comboBox1, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->label4, 0, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(0, 42);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(737, 42);
			this->tableLayoutPanel4->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"10", L"11", L"12", L"14", L"16", L"18", L"20",
					L"22"
			});
			this->comboBox1->Location = System::Drawing::Point(301, 4);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(88, 32);
			this->comboBox1->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(27, 0);
			this->label4->Margin = System::Windows::Forms::Padding(27, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(266, 42);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Размер шрифта полей ввода";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(5, 1);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(729, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Настройки";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->Controls->Add(this->checkBox2, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->checkBox1, 0, 1);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(1, 41);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 3;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(737, 126);
			this->tableLayoutPanel3->TabIndex = 4;
			// 
			// checkBox2
			// 
			this->checkBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->checkBox2->Enabled = false;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->checkBox2->Location = System::Drawing::Point(32, 88);
			this->checkBox2->Margin = System::Windows::Forms::Padding(32, 4, 4, 4);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(701, 34);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"Записывать ошибки в историю вычислений";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(16, 0);
			this->label2->Margin = System::Windows::Forms::Padding(16, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(717, 42);
			this->label2->TabIndex = 2;
			this->label2->Text = L"История";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// checkBox1
			// 
			this->checkBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->checkBox1->Location = System::Drawing::Point(32, 46);
			this->checkBox1->Margin = System::Windows::Forms::Padding(32, 4, 4, 4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(701, 34);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"Записывать историю вычислений";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &SettingsForm::CheckBox1_CheckedChanged);
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(739, 395);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(754, 432);
			this->Name = L"SettingsForm";
			this->Text = L"Настройки";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &SettingsForm::SettingsForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &SettingsForm::SettingsForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SETTINGS_IS_SAVED = true;
	this->Close();
}

private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->checkBox1->Checked = false;
	this->checkBox2->Checked = true;
	this->checkBox2->Enabled = false;
	this->comboBox1->SelectedIndex = 1;
	this->comboBox2->SelectedIndex = 1;
}

private: void SaveInConfigFile() {
	StreamWriter^ sw = gcnew StreamWriter(Path::GetFileName(System::Reflection::Assembly::GetEntryAssembly()->Location) + ".config");
	sw->Write("<?xml version=\"1.0\" encoding=\"utf-8\" ?>\r\n<configuration>\r\n  <appSettings>\r\n    <add key=\"saveHistory\" value=\"" + SAVE_HISTORY + "\" />\r\n    <add key=\"saveErrors\" value=\"" + SAVE_ERRORS + "\" />\r\n    <add key=\"inputFieldsFontSize\" value=\"" + INPUT_FIELDS_FONT_SIZE + "\" />\r\n    <add key=\"outputFieldFontSize\" value=\"" + OUTPUT_FIELD_FONT_SIZE + "\" />\r\n  </appSettings>\r\n</configuration>\r\n");
	sw->Close();
}
		
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SAVE_HISTORY = this->checkBox1->Checked;
	SAVE_ERRORS = this->checkBox2->Checked;
	switch (this->comboBox1->SelectedIndex) {
		case 0:
			INPUT_FIELDS_FONT_SIZE = 10;
			break;
		case 1:
			INPUT_FIELDS_FONT_SIZE = 11;
			break;
		case 2:
			INPUT_FIELDS_FONT_SIZE = 12;
			break;
		case 3:
			INPUT_FIELDS_FONT_SIZE = 14;
			break;
		case 4:
			INPUT_FIELDS_FONT_SIZE = 16;
			break;
		case 5:
			INPUT_FIELDS_FONT_SIZE = 18;
			break;
		case 6:
			INPUT_FIELDS_FONT_SIZE = 20;
			break;
		case 7:
			INPUT_FIELDS_FONT_SIZE = 22;
			break;
	}
	switch (this->comboBox2->SelectedIndex) {
		case 0:
			OUTPUT_FIELD_FONT_SIZE = 10;
			break;
		case 1:
			OUTPUT_FIELD_FONT_SIZE = 11;
			break;
		case 2:
			OUTPUT_FIELD_FONT_SIZE = 12;
			break;
		case 3:
			OUTPUT_FIELD_FONT_SIZE = 14;
			break;
		case 4:
			OUTPUT_FIELD_FONT_SIZE = 16;
			break;
		case 5:
			OUTPUT_FIELD_FONT_SIZE = 18;
			break;
		case 6:
			OUTPUT_FIELD_FONT_SIZE = 20;
			break;
		case 7:
			OUTPUT_FIELD_FONT_SIZE = 22;
			break;
	}
	SaveInConfigFile();
	SETTINGS_IS_SAVED = true;
	SETTINGS_IS_CHANGED = true;
	this->Close();
}
private: System::Void SettingsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	SETTINGS_IS_SAVED = false;
	this->checkBox1->Checked = SAVE_HISTORY;
	this->checkBox2->Checked = SAVE_ERRORS;
	this->checkBox2->Enabled = SAVE_HISTORY;
	switch (INPUT_FIELDS_FONT_SIZE) {
		case 10:
			this->comboBox1->SelectedIndex = 0;
			break;
		case 11:
			this->comboBox1->SelectedIndex = 1;
			break;
		case 12:
			this->comboBox1->SelectedIndex = 2;
			break;
		case 14:
			this->comboBox1->SelectedIndex = 3;
			break;
		case 16:
			this->comboBox1->SelectedIndex = 4;
			break;
		case 18:
			this->comboBox1->SelectedIndex = 5;
			break;
		case 20:
			this->comboBox1->SelectedIndex = 6;
			break;
		case 22:
			this->comboBox1->SelectedIndex = 7;
			break;
	}
	switch (OUTPUT_FIELD_FONT_SIZE) {
		case 10:
			this->comboBox2->SelectedIndex = 0;
			break;
		case 11:
			this->comboBox2->SelectedIndex = 1;
			break;
		case 12:
			this->comboBox2->SelectedIndex = 2;
			break;
		case 14:
			this->comboBox2->SelectedIndex = 3;
			break;
		case 16:
			this->comboBox2->SelectedIndex = 4;
			break;
		case 18:
			this->comboBox2->SelectedIndex = 5;
			break;
		case 20:
			this->comboBox2->SelectedIndex = 6;
			break;
		case 22:
			this->comboBox2->SelectedIndex = 7;
			break;
	}
}

private: System::Void CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->checkBox2->Enabled = this->checkBox1->Checked;
}

private: System::Void SettingsForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	int temp1, temp2;
	switch (this->comboBox1->SelectedIndex) {
		case 0:
			temp1 = 10;
			break;
		case 1:
			temp1 = 11;
			break;
		case 2:
			temp1 = 12;
			break;
		case 3:
			temp1 = 14;
			break;
		case 4:
			temp1 = 16;
			break;
		case 5:
			temp1 = 18;
			break;
		case 6:
			temp1 = 20;
			break;
		case 7:
			temp1 = 22;
			break;
	}
	switch (this->comboBox2->SelectedIndex) {
		case 0:
			temp2 = 10;
			break;
		case 1:
			temp2 = 11;
			break;
		case 2:
			temp2 = 12;
			break;
		case 3:
			temp2 = 14;
			break;
		case 4:
			temp2 = 16;
			break;
		case 5:
			temp2 = 18;
			break;
		case 6:
			temp2 = 20;
			break;
		case 7:
			temp2 = 22;
			break;
	}
	if (!SETTINGS_IS_SAVED) {
		if (this->checkBox1->Checked != SAVE_HISTORY || this->checkBox2->Checked != SAVE_ERRORS || temp1 != INPUT_FIELDS_FONT_SIZE || temp2 != OUTPUT_FIELD_FONT_SIZE) {
			System::Windows::Forms::DialogResult dialog = MessageBox::Show("Имеются несохранённые данные!\nВы действительно хотите выйти?", "Выход", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
			if (dialog == System::Windows::Forms::DialogResult::No)
				e->Cancel = true;
		}
	}
}
};
}
