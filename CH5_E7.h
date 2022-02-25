#pragma once
#include<cmath>
namespace PhysicsCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CH5_E7
	/// </summary>
	public ref class CH5_E7 : public System::Windows::Forms::Form
	{
	public:
		CH5_E7(void)
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
		~CH5_E7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ F_textBox;
	protected:

	private: System::Windows::Forms::Label^ F_label;
	protected:

	private: System::Windows::Forms::Button^ convert_button;
	private: System::Windows::Forms::Button^ reset_button;

	private: System::Windows::Forms::ComboBox^ x_comboBox;
	private: System::Windows::Forms::ComboBox^ ans_combo;
	private: System::Windows::Forms::TextBox^ x_textBox;
	private: System::Windows::Forms::TextBox^ k_textBox;
	private: System::Windows::Forms::Label^ x_label;
	private: System::Windows::Forms::Label^ k_u_label;
	private: System::Windows::Forms::Label^ k_label;
	private: System::Windows::Forms::Label^ ans_label2;
	private: System::Windows::Forms::Label^ ans_label;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ cal_button;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ Find_label;
	private: System::Windows::Forms::Label^ F_u_label;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CH5_E7::typeid));
			this->F_textBox = (gcnew System::Windows::Forms::TextBox());
			this->F_label = (gcnew System::Windows::Forms::Label());
			this->convert_button = (gcnew System::Windows::Forms::Button());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->x_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ans_combo = (gcnew System::Windows::Forms::ComboBox());
			this->x_textBox = (gcnew System::Windows::Forms::TextBox());
			this->k_textBox = (gcnew System::Windows::Forms::TextBox());
			this->x_label = (gcnew System::Windows::Forms::Label());
			this->k_u_label = (gcnew System::Windows::Forms::Label());
			this->k_label = (gcnew System::Windows::Forms::Label());
			this->ans_label2 = (gcnew System::Windows::Forms::Label());
			this->ans_label = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cal_button = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Find_label = (gcnew System::Windows::Forms::Label());
			this->F_u_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// F_textBox
			// 
			this->F_textBox->Enabled = false;
			this->F_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->F_textBox->Location = System::Drawing::Point(132, 326);
			this->F_textBox->Name = L"F_textBox";
			this->F_textBox->Size = System::Drawing::Size(178, 48);
			this->F_textBox->TabIndex = 230;
			this->F_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// F_label
			// 
			this->F_label->AutoSize = true;
			this->F_label->BackColor = System::Drawing::Color::Transparent;
			this->F_label->Enabled = false;
			this->F_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->F_label->Location = System::Drawing::Point(83, 330);
			this->F_label->Name = L"F_label";
			this->F_label->Size = System::Drawing::Size(46, 40);
			this->F_label->TabIndex = 229;
			this->F_label->Text = L"F =";
			this->F_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// convert_button
			// 
			this->convert_button->Enabled = false;
			this->convert_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convert_button->Location = System::Drawing::Point(703, 578);
			this->convert_button->Name = L"convert_button";
			this->convert_button->Size = System::Drawing::Size(89, 48);
			this->convert_button->TabIndex = 228;
			this->convert_button->Text = L"CONVERT";
			this->convert_button->UseVisualStyleBackColor = true;
			this->convert_button->Click += gcnew System::EventHandler(this, &CH5_E7::convert_button_Click);
			// 
			// reset_button
			// 
			this->reset_button->BackColor = System::Drawing::Color::Maroon;
			this->reset_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset_button->ForeColor = System::Drawing::Color::White;
			this->reset_button->Location = System::Drawing::Point(715, 259);
			this->reset_button->Name = L"reset_button";
			this->reset_button->Size = System::Drawing::Size(77, 45);
			this->reset_button->TabIndex = 227;
			this->reset_button->Text = L"RESET";
			this->reset_button->UseVisualStyleBackColor = false;
			this->reset_button->Click += gcnew System::EventHandler(this, &CH5_E7::reset_button_Click);
			// 
			// x_comboBox
			// 
			this->x_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->x_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->x_comboBox->FormattingEnabled = true;
			this->x_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"m", L"cm", L"mm" });
			this->x_comboBox->Location = System::Drawing::Point(311, 447);
			this->x_comboBox->Name = L"x_comboBox";
			this->x_comboBox->Size = System::Drawing::Size(94, 48);
			this->x_comboBox->TabIndex = 225;
			this->x_comboBox->Visible = false;
			// 
			// ans_combo
			// 
			this->ans_combo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ans_combo->Enabled = false;
			this->ans_combo->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->ans_combo->FormattingEnabled = true;
			this->ans_combo->Location = System::Drawing::Point(603, 578);
			this->ans_combo->Name = L"ans_combo";
			this->ans_combo->Size = System::Drawing::Size(94, 48);
			this->ans_combo->TabIndex = 224;
			this->ans_combo->SelectedIndexChanged += gcnew System::EventHandler(this, &CH5_E7::ans_combo_SelectedIndexChanged);
			// 
			// x_textBox
			// 
			this->x_textBox->Enabled = false;
			this->x_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x_textBox->Location = System::Drawing::Point(132, 447);
			this->x_textBox->Name = L"x_textBox";
			this->x_textBox->Size = System::Drawing::Size(178, 48);
			this->x_textBox->TabIndex = 223;
			this->x_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// k_textBox
			// 
			this->k_textBox->Enabled = false;
			this->k_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->k_textBox->Location = System::Drawing::Point(132, 386);
			this->k_textBox->Name = L"k_textBox";
			this->k_textBox->Size = System::Drawing::Size(178, 48);
			this->k_textBox->TabIndex = 222;
			this->k_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// x_label
			// 
			this->x_label->AutoSize = true;
			this->x_label->BackColor = System::Drawing::Color::Transparent;
			this->x_label->Enabled = false;
			this->x_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->x_label->Location = System::Drawing::Point(84, 451);
			this->x_label->Name = L"x_label";
			this->x_label->Size = System::Drawing::Size(45, 40);
			this->x_label->TabIndex = 221;
			this->x_label->Text = L"x =";
			this->x_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// k_u_label
			// 
			this->k_u_label->AutoSize = true;
			this->k_u_label->BackColor = System::Drawing::Color::Transparent;
			this->k_u_label->Enabled = false;
			this->k_u_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->k_u_label->Location = System::Drawing::Point(313, 390);
			this->k_u_label->Name = L"k_u_label";
			this->k_u_label->Size = System::Drawing::Size(52, 40);
			this->k_u_label->TabIndex = 220;
			this->k_u_label->Text = L"N/m";
			this->k_u_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// k_label
			// 
			this->k_label->AutoSize = true;
			this->k_label->BackColor = System::Drawing::Color::Transparent;
			this->k_label->Enabled = false;
			this->k_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->k_label->Location = System::Drawing::Point(84, 390);
			this->k_label->Name = L"k_label";
			this->k_label->Size = System::Drawing::Size(45, 40);
			this->k_label->TabIndex = 219;
			this->k_label->Text = L"k =";
			this->k_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ans_label2
			// 
			this->ans_label2->AutoSize = true;
			this->ans_label2->BackColor = System::Drawing::Color::Transparent;
			this->ans_label2->Font = (gcnew System::Drawing::Font(L"FC Lamoon", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ans_label2->Location = System::Drawing::Point(93, 579);
			this->ans_label2->Name = L"ans_label2";
			this->ans_label2->Size = System::Drawing::Size(57, 38);
			this->ans_label2->TabIndex = 218;
			this->ans_label2->Text = L"F =";
			this->ans_label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ans_label2->Visible = false;
			// 
			// ans_label
			// 
			this->ans_label->AutoSize = true;
			this->ans_label->BackColor = System::Drawing::Color::Transparent;
			this->ans_label->Font = (gcnew System::Drawing::Font(L"FC Lamoon", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ans_label->Location = System::Drawing::Point(146, 579);
			this->ans_label->Name = L"ans_label";
			this->ans_label->Size = System::Drawing::Size(35, 38);
			this->ans_label->TabIndex = 217;
			this->ans_label->Text = L"0";
			this->ans_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ans_label->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(549, 583);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 37);
			this->label3->TabIndex = 216;
			this->label3->Text = L"Unit :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(23, 583);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 37);
			this->label2->TabIndex = 215;
			this->label2->Text = L"Result :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(101, 222);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 37);
			this->label1->TabIndex = 214;
			this->label1->Text = L"Please Select What to Find.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cal_button
			// 
			this->cal_button->BackColor = System::Drawing::Color::IndianRed;
			this->cal_button->Enabled = false;
			this->cal_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cal_button->ForeColor = System::Drawing::Color::White;
			this->cal_button->Location = System::Drawing::Point(344, 259);
			this->cal_button->Name = L"cal_button";
			this->cal_button->Size = System::Drawing::Size(62, 45);
			this->cal_button->TabIndex = 213;
			this->cal_button->Text = L"CAL";
			this->cal_button->UseVisualStyleBackColor = false;
			this->cal_button->Click += gcnew System::EventHandler(this, &CH5_E7::cal_button_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->ItemHeight = 37;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"F (Force)", L"k (Spring Constant)", L"x (Spring stretch/compression)" });
			this->comboBox1->Location = System::Drawing::Point(91, 259);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(247, 45);
			this->comboBox1->TabIndex = 212;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CH5_E7::comboBox1_SelectedIndexChanged_1);
			// 
			// Find_label
			// 
			this->Find_label->AutoSize = true;
			this->Find_label->BackColor = System::Drawing::Color::Transparent;
			this->Find_label->Font = (gcnew System::Drawing::Font(L"Bangna New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Find_label->Location = System::Drawing::Point(23, 264);
			this->Find_label->Name = L"Find_label";
			this->Find_label->Size = System::Drawing::Size(73, 37);
			this->Find_label->TabIndex = 211;
			this->Find_label->Text = L"Find :";
			this->Find_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// F_u_label
			// 
			this->F_u_label->AutoSize = true;
			this->F_u_label->BackColor = System::Drawing::Color::Transparent;
			this->F_u_label->Enabled = false;
			this->F_u_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->F_u_label->Location = System::Drawing::Point(313, 330);
			this->F_u_label->Name = L"F_u_label";
			this->F_u_label->Size = System::Drawing::Size(31, 40);
			this->F_u_label->TabIndex = 229;
			this->F_u_label->Text = L"N";
			this->F_u_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(168, 82);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(468, 76);
			this->pictureBox1->TabIndex = 231;
			this->pictureBox1->TabStop = false;
			// 
			// CH5_E7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(804, 636);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->F_textBox);
			this->Controls->Add(this->F_u_label);
			this->Controls->Add(this->F_label);
			this->Controls->Add(this->convert_button);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->x_comboBox);
			this->Controls->Add(this->ans_combo);
			this->Controls->Add(this->x_textBox);
			this->Controls->Add(this->k_textBox);
			this->Controls->Add(this->x_label);
			this->Controls->Add(this->k_u_label);
			this->Controls->Add(this->k_label);
			this->Controls->Add(this->ans_label2);
			this->Controls->Add(this->ans_label);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cal_button);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Find_label);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(820, 675);
			this->MinimumSize = System::Drawing::Size(820, 675);
			this->Name = L"CH5_E7";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CH5_E7";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//==========================================[เขียนฟังก์ชัน]==============================================//

public:
	double F, k, x, ans;
	String^ unit;

	//ตั้งค่าหน้าต่าง
	void set_window() {
		label1->Visible = 0;

		x_comboBox->Show();

		if (comboBox1->SelectedItem == "F (Force)") {
			F_label->Enabled = 0;
			F_textBox->Enabled = 0;
			F_u_label->Enabled = 0;

			k_label->Enabled = 1;
			k_textBox->Enabled = 1;
			k_u_label->Enabled = 1;

			x_label->Enabled = 1;
			x_textBox->Enabled = 1;
			x_comboBox->Show(); x_comboBox->SelectedIndex = 0;
		}
		else if (comboBox1->SelectedItem == "k (Spring Constant)") {
			F_label->Enabled = 1;
			F_textBox->Enabled = 1;
			F_u_label->Enabled = 1;

			k_label->Enabled = 0;
			k_textBox->Enabled = 0;
			k_u_label->Enabled = 0;

			x_label->Enabled = 1;
			x_textBox->Enabled = 1;
			x_comboBox->Show(); x_comboBox->SelectedIndex = 0;
		}
		else if (comboBox1->SelectedItem == "x (Spring stretch/compression)") {
			F_label->Enabled = 1;
			F_textBox->Enabled = 1;
			F_u_label->Enabled = 1;

			k_label->Enabled = 1;
			k_textBox->Enabled = 1;
			k_u_label->Enabled = 1;

			x_label->Enabled = 0;
			x_textBox->Enabled = 0;
			x_comboBox->Hide();
		}
	}

	//เคลียร์ช่อง
	void clear_textbox() {
		F_textBox->Clear();
		k_textBox->Clear();
		x_textBox->Clear();
		ans_label->Visible = 0;
	}

	//รีเทิร์นออกมาเป็นตัวแปรที่ต้องการหา
	char findwhat() {
		if (F_textBox->Enabled == 0) return 'F';
		else if (k_textBox->Enabled == 0) return 'k';
		else return 'x';
	}

	//เช็คว่ามีช่องว่างอยู่มั้ย
	bool checkblank(char find) {
		if (find == 'F') {
			if (k_textBox->Text == "" || x_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else if (find == 'k') {
			if (F_textBox->Text == "" || x_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else {
			if (F_textBox->Text == "" || k_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
	}

	//คำนวณ
	void cal(char find) {
		if (find == 'F') {
			k = System::Convert::ToDouble(k_textBox->Text);
			x = System::Convert::ToDouble(x_textBox->Text); if (x_comboBox->SelectedItem == "cm") x /= 100.0000;
			else if (x_comboBox->SelectedItem == "mm") x /= 1000.0000;
			ans = k*x;
		}
		else if (find == 'k') {
			F = System::Convert::ToDouble(F_textBox->Text);
			x = System::Convert::ToDouble(x_textBox->Text); if (x_comboBox->SelectedItem == "cm") x /= 100.0000;
			else if (x_comboBox->SelectedItem == "mm") x /= 1000.0000;
			ans = F/x;
		}
		else {//หา t
			F = System::Convert::ToDouble(F_textBox->Text);
			k = System::Convert::ToDouble(k_textBox->Text);
			ans = F/k;
		}
	}

	//เซ็ตช่องเลือกหน่วยของคำตอบ
	void set_ans_combobox(char find) {
		if (find == 'F') {
			ans_combo->Items->Add("N");
		}
		else if (find == 'k') {
			ans_combo->Items->Add("N/m");
		}
		else {
			ans_combo->Items->Add("m");
			ans_combo->Items->Add("cm");
			ans_combo->Items->Add("mm");
		}
	}

	//เปลี่ยนหน่วยของคำตอบ
	void convert_ans() {
		if (unit == "m/s") {
			if (Convert::ToString(ans_combo->SelectedItem) == "km/h") {
				ans *= (3600.0000 / 1000.0000);
			}
		}
		else if (unit == "km/h") {
			if (Convert::ToString(ans_combo->SelectedItem) == "m/s") {
				ans *= (1000.0000 / 3600.0000);
			}
		}
		else if (unit == "s") {
			if (Convert::ToString(ans_combo->SelectedItem) == "min") {
				ans /= 60;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "h") {
				ans /= 3600;
			}
		}
		else if (unit == "min") {
			if (Convert::ToString(ans_combo->SelectedItem) == "s") {
				ans *= 60;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "h") {
				ans /= 60;
			}
		}
		else if (unit == "h") {
			if (Convert::ToString(ans_combo->SelectedItem) == "s") {
				ans *= 3600;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "min") {
				ans *= 60;
			}
		}
		else if (unit == "m") {
			if (Convert::ToString(ans_combo->SelectedItem) == "km") {
				ans /= 1000;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "cm") {
				ans *= 100;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "mm") {
				ans *= 1000;
			}
		}
		else if (unit == "cm") {
			if (Convert::ToString(ans_combo->SelectedItem) == "m") {
				ans /= 100;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "km") {
				ans /= 100000;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "mm") {
				ans *= 10;
			}
		}
		else if (unit == "mm") {
			if (Convert::ToString(ans_combo->SelectedItem) == "m") {
				ans /= 1000;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "km") {
				ans /= 1000000;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "cm") {
				ans /= 10;
			}
		}
		else if (unit == "km") {
			if (Convert::ToString(ans_combo->SelectedItem) == "m") {
				ans *= 1000;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "cm") {
				ans *= 100000;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "mm") {
				ans *= 1000000;
			}
		}
		else if (unit == "J") {
			if (Convert::ToString(ans_combo->SelectedItem) == "kJ") {
				ans /= 1000;
			}
		}
		else if (unit == "kJ") {
			if (Convert::ToString(ans_combo->SelectedItem) == "J") {
				ans *= 1000;
			}
		}
		unit = System::Convert::ToString(ans_combo->SelectedItem);
	}

	void reset() {
		clear_textbox();
		cal_button->Enabled = 0;
		convert_button->Enabled = 0;
		ans_label->Hide();
		ans_label2->Hide();

		F_label->Enabled = 0;
		F_textBox->Enabled = 0;
		F_u_label->Enabled = 0;

		k_label->Enabled = 0;
		k_textBox->Enabled = 0;
		k_u_label->Enabled = 0;

		x_label->Enabled = 0;
		x_textBox->Enabled = 0;
		x_comboBox->Hide();

		comboBox1->Items->Clear();
		comboBox1->Items->Add("F (Force)");
		comboBox1->Items->Add("k (Spring Constant)");
		comboBox1->Items->Add("x (Spring stretch/compression)");

		ans_combo->Items->Clear();
		ans_combo->Enabled = 0;
	}

	//==========================================[โค้ดGUI]==============================================//

private: System::Void cal_button_Click(System::Object^ sender, System::EventArgs^ e) {
	ans_combo->Items->Clear();
	char find = findwhat();
	if (checkblank(find) == 1) {
		label1->Text = "Please Input all Blanks.";
		label1->Visible = 1;
	}
	else {
		cal(find);
		if (find == 'F') {
			set_ans_combobox('F');
			ans_combo->SelectedIndex = 0;
		}
		else if (find == 'k') {
			set_ans_combobox('k');
			ans_combo->SelectedIndex = 0;
		}
		else {
			set_ans_combobox('x');
			ans_combo->SelectedIndex = 0;
		}
		label1->Hide();
		ans_label->Text = System::Convert::ToString(ans);
		unit = System::Convert::ToString(ans_combo->SelectedItem);
		ans_label->Visible = 1;
		ans_label2->Visible = 1;
		ans_combo->Enabled = 1;
		ans_combo->Visible = 1;
		//cal_button->Enabled = 0;
	}
}
private: System::Void reset_button_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "Please Select What to Find.";
	label1->Show();
	reset();
}
private: System::Void convert_button_Click(System::Object^ sender, System::EventArgs^ e) {
	convert_ans();
	ans_label->Text = System::Convert::ToString(ans);
	convert_button->Enabled = 0;
}
private: System::Void ans_combo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	convert_button->Enabled = 1;
}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	set_window();
	clear_textbox();
	cal_button->Enabled = 1;
	ans_combo->Items->Clear();
	ans_combo->Enabled = 0;
	if (findwhat() == 'F') {
		ans_label2->Text = "F = ";
	}
	else if (findwhat() == 'k') {
		ans_label2->Text = "k = ";
	}
	else {
		ans_label2->Text = "x = ";
	}
}
	};
}
