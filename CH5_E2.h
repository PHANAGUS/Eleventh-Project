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
	/// Summary for CH5_E2
	/// </summary>
	public ref class CH5_E2 : public System::Windows::Forms::Form
	{
	public:
		CH5_E2(void)
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
		~CH5_E2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ P_textBox;
	protected:

	private: System::Windows::Forms::Label^ P_u_label;
	protected:

	private: System::Windows::Forms::Label^ P_label;

	private: System::Windows::Forms::Button^ convert_button;
	private: System::Windows::Forms::Button^ reset_button;
	private: System::Windows::Forms::ComboBox^ t_comboBox;

	private: System::Windows::Forms::ComboBox^ W_comboBox;
	private: System::Windows::Forms::ComboBox^ ans_combo;
	private: System::Windows::Forms::TextBox^ t_textBox;

	private: System::Windows::Forms::TextBox^ W_textBox;
	private: System::Windows::Forms::Label^ t_label;

	private: System::Windows::Forms::Label^ W_label;
	private: System::Windows::Forms::Label^ ans_label2;
	private: System::Windows::Forms::Label^ ans_label;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ cal_button;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ Find_label;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CH5_E2::typeid));
			this->P_textBox = (gcnew System::Windows::Forms::TextBox());
			this->P_u_label = (gcnew System::Windows::Forms::Label());
			this->P_label = (gcnew System::Windows::Forms::Label());
			this->convert_button = (gcnew System::Windows::Forms::Button());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->t_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->W_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ans_combo = (gcnew System::Windows::Forms::ComboBox());
			this->t_textBox = (gcnew System::Windows::Forms::TextBox());
			this->W_textBox = (gcnew System::Windows::Forms::TextBox());
			this->t_label = (gcnew System::Windows::Forms::Label());
			this->W_label = (gcnew System::Windows::Forms::Label());
			this->ans_label2 = (gcnew System::Windows::Forms::Label());
			this->ans_label = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cal_button = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Find_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// P_textBox
			// 
			this->P_textBox->Enabled = false;
			this->P_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P_textBox->Location = System::Drawing::Point(132, 326);
			this->P_textBox->Name = L"P_textBox";
			this->P_textBox->Size = System::Drawing::Size(178, 48);
			this->P_textBox->TabIndex = 150;
			this->P_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// P_u_label
			// 
			this->P_u_label->AutoSize = true;
			this->P_u_label->BackColor = System::Drawing::Color::Transparent;
			this->P_u_label->Enabled = false;
			this->P_u_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P_u_label->Location = System::Drawing::Point(313, 330);
			this->P_u_label->Name = L"P_u_label";
			this->P_u_label->Size = System::Drawing::Size(34, 40);
			this->P_u_label->TabIndex = 149;
			this->P_u_label->Text = L"W";
			this->P_u_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// P_label
			// 
			this->P_label->AutoSize = true;
			this->P_label->BackColor = System::Drawing::Color::Transparent;
			this->P_label->Enabled = false;
			this->P_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->P_label->Location = System::Drawing::Point(83, 330);
			this->P_label->Name = L"P_label";
			this->P_label->Size = System::Drawing::Size(47, 40);
			this->P_label->TabIndex = 148;
			this->P_label->Text = L"P =";
			this->P_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// convert_button
			// 
			this->convert_button->Enabled = false;
			this->convert_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convert_button->Location = System::Drawing::Point(703, 578);
			this->convert_button->Name = L"convert_button";
			this->convert_button->Size = System::Drawing::Size(89, 48);
			this->convert_button->TabIndex = 147;
			this->convert_button->Text = L"CONVERT";
			this->convert_button->UseVisualStyleBackColor = true;
			this->convert_button->Click += gcnew System::EventHandler(this, &CH5_E2::convert_button_Click);
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
			this->reset_button->TabIndex = 146;
			this->reset_button->Text = L"RESET";
			this->reset_button->UseVisualStyleBackColor = false;
			this->reset_button->Click += gcnew System::EventHandler(this, &CH5_E2::reset_button_Click);
			// 
			// t_comboBox
			// 
			this->t_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->t_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->t_comboBox->FormattingEnabled = true;
			this->t_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"s", L"min" });
			this->t_comboBox->Location = System::Drawing::Point(311, 447);
			this->t_comboBox->Name = L"t_comboBox";
			this->t_comboBox->Size = System::Drawing::Size(94, 48);
			this->t_comboBox->TabIndex = 145;
			this->t_comboBox->Visible = false;
			// 
			// W_comboBox
			// 
			this->W_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->W_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->W_comboBox->FormattingEnabled = true;
			this->W_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"J", L"kJ" });
			this->W_comboBox->Location = System::Drawing::Point(311, 386);
			this->W_comboBox->Name = L"W_comboBox";
			this->W_comboBox->Size = System::Drawing::Size(94, 48);
			this->W_comboBox->TabIndex = 144;
			this->W_comboBox->Visible = false;
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
			this->ans_combo->TabIndex = 143;
			this->ans_combo->SelectedIndexChanged += gcnew System::EventHandler(this, &CH5_E2::ans_combo_SelectedIndexChanged);
			// 
			// t_textBox
			// 
			this->t_textBox->Enabled = false;
			this->t_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_textBox->Location = System::Drawing::Point(132, 447);
			this->t_textBox->Name = L"t_textBox";
			this->t_textBox->Size = System::Drawing::Size(178, 48);
			this->t_textBox->TabIndex = 142;
			this->t_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// W_textBox
			// 
			this->W_textBox->Enabled = false;
			this->W_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->W_textBox->Location = System::Drawing::Point(132, 386);
			this->W_textBox->Name = L"W_textBox";
			this->W_textBox->Size = System::Drawing::Size(178, 48);
			this->W_textBox->TabIndex = 141;
			this->W_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// t_label
			// 
			this->t_label->AutoSize = true;
			this->t_label->BackColor = System::Drawing::Color::Transparent;
			this->t_label->Enabled = false;
			this->t_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_label->Location = System::Drawing::Point(89, 451);
			this->t_label->Name = L"t_label";
			this->t_label->Size = System::Drawing::Size(40, 40);
			this->t_label->TabIndex = 140;
			this->t_label->Text = L"t =";
			this->t_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// W_label
			// 
			this->W_label->AutoSize = true;
			this->W_label->BackColor = System::Drawing::Color::Transparent;
			this->W_label->Enabled = false;
			this->W_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->W_label->Location = System::Drawing::Point(78, 390);
			this->W_label->Name = L"W_label";
			this->W_label->Size = System::Drawing::Size(52, 40);
			this->W_label->TabIndex = 139;
			this->W_label->Text = L"W =";
			this->W_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
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
			this->ans_label2->Size = System::Drawing::Size(58, 38);
			this->ans_label2->TabIndex = 138;
			this->ans_label2->Text = L"P =";
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
			this->ans_label->Location = System::Drawing::Point(153, 579);
			this->ans_label->Name = L"ans_label";
			this->ans_label->Size = System::Drawing::Size(35, 38);
			this->ans_label->TabIndex = 137;
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
			this->label3->TabIndex = 136;
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
			this->label2->TabIndex = 135;
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
			this->label1->TabIndex = 134;
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
			this->cal_button->TabIndex = 133;
			this->cal_button->Text = L"CAL";
			this->cal_button->UseVisualStyleBackColor = false;
			this->cal_button->Click += gcnew System::EventHandler(this, &CH5_E2::cal_button_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->ItemHeight = 37;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"P (Power)", L"W (Work)", L"t (Time)" });
			this->comboBox1->Location = System::Drawing::Point(91, 259);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(247, 45);
			this->comboBox1->TabIndex = 132;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CH5_E2::comboBox1_SelectedIndexChanged_1);
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
			this->Find_label->TabIndex = 131;
			this->Find_label->Text = L"Find :";
			this->Find_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CH5_E2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(804, 636);
			this->Controls->Add(this->P_textBox);
			this->Controls->Add(this->P_u_label);
			this->Controls->Add(this->P_label);
			this->Controls->Add(this->convert_button);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->t_comboBox);
			this->Controls->Add(this->W_comboBox);
			this->Controls->Add(this->ans_combo);
			this->Controls->Add(this->t_textBox);
			this->Controls->Add(this->W_textBox);
			this->Controls->Add(this->t_label);
			this->Controls->Add(this->W_label);
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
			this->Name = L"CH5_E2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CH5_E2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//==========================================[เขียนฟังก์ชัน]==============================================//

public:
	double P, W, t, ans;
	String^ unit;

	//ตั้งค่าหน้าต่าง
	void set_window() {
		label1->Visible = 0;

		W_comboBox->Show();
		t_comboBox->Show();

		if (comboBox1->SelectedItem == "P (Power)") {
			P_label->Enabled = 0;
			P_textBox->Enabled = 0;
			P_u_label->Enabled = 0;

			W_label->Enabled = 1;
			W_textBox->Enabled = 1;
			W_comboBox->Show(); W_comboBox->SelectedIndex = 0;

			t_label->Enabled = 1;
			t_textBox->Enabled = 1;
			t_comboBox->Show(); t_comboBox->SelectedIndex = 0;
		}
		else if (comboBox1->SelectedItem == "W (Work)") {
			P_label->Enabled = 1;
			P_textBox->Enabled = 1;
			P_u_label->Enabled = 1;

			W_label->Enabled = 0;
			W_textBox->Enabled = 0;
			W_comboBox->Hide();

			t_label->Enabled = 1;
			t_textBox->Enabled = 1;
			t_comboBox->Show(); t_comboBox->SelectedIndex = 0;
		}
		else if (comboBox1->SelectedItem == "t (Time)") {
			P_label->Enabled = 1;
			P_textBox->Enabled = 1;
			P_u_label->Enabled = 1;

			W_label->Enabled = 1;
			W_textBox->Enabled = 1;
			W_comboBox->Show(); W_comboBox->SelectedIndex = 0;

			t_label->Enabled = 0;
			t_textBox->Enabled = 0;
			t_comboBox->Hide();
		}
	}

	//เคลียร์ช่อง
	void clear_textbox() {
		P_textBox->Clear();
		W_textBox->Clear();
		t_textBox->Clear();
		ans_label->Visible = 0;
	}

	//รีเทิร์นออกมาเป็นตัวแปรที่ต้องการหา
	char findwhat() {
		if (P_textBox->Enabled == 0) return 'P';
		else if (W_textBox->Enabled == 0) return 'W';
		else return 't';
	}

	//เช็คว่ามีช่องว่างอยู่มั้ย
	bool checkblank(char find) {
		if (find == 'P') {
			if (W_textBox->Text == "" || t_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else if (find == 'W') {
			if (P_textBox->Text == "" || t_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else {
			if (P_textBox->Text == "" || W_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
	}

	//คำนวณ
	void cal(char find) {
		if (find == 'P') {
			W = System::Convert::ToDouble(W_textBox->Text); if (W_comboBox->SelectedItem == "kJ") W *= 1000.0000;
			t = System::Convert::ToDouble(t_textBox->Text); if (t_comboBox->SelectedItem == "min") t *= 60.0000;
			ans = W/t;
		}
		else if (find == 'W') {
			P = System::Convert::ToDouble(P_textBox->Text);
			t = System::Convert::ToDouble(t_textBox->Text); if (t_comboBox->SelectedItem == "min") t *= 60.0000;
			ans = P*t;
		}
		else {//หา t
			P = System::Convert::ToDouble(P_textBox->Text);
			W = System::Convert::ToDouble(W_textBox->Text); if (W_comboBox->SelectedItem == "kJ") W *= 1000.0000;
			ans = W/P;
		}
	}

	//เซ็ตช่องเลือกหน่วยของคำตอบ
	void set_ans_combobox(char find) {
		if (find == 'P') {
			ans_combo->Items->Add("W");
		}
		else if (find == 'W') {
			ans_combo->Items->Add("J");
			ans_combo->Items->Add("kJ");
		}
		else {
			ans_combo->Items->Add("s");
			ans_combo->Items->Add("min");
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
		}
		else if (unit == "km") {
			if (Convert::ToString(ans_combo->SelectedItem) == "m") {
				ans *= 1000;
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

		P_label->Enabled = 0;
		P_textBox->Enabled = 0;
		P_u_label->Enabled = 0;

		W_label->Enabled = 0;
		W_textBox->Enabled = 0;
		W_comboBox->Hide();

		t_label->Enabled = 0;
		t_textBox->Enabled = 0;
		t_comboBox->Hide();

		comboBox1->Items->Clear();
		comboBox1->Items->Add("P (Power)");
		comboBox1->Items->Add("W (Work)");
		comboBox1->Items->Add("t (Time)");

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
		if (find == 'P') {
			set_ans_combobox('P');
			ans_combo->SelectedIndex = 0;
		}
		else if (find == 'W') {
			set_ans_combobox('W');
			ans_combo->SelectedIndex = 0;
		}
		else {
			set_ans_combobox('t');
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
	if (findwhat() == 'P') {
		ans_label2->Text = "P = ";
	}
	else if (findwhat() == 'W') {
		ans_label2->Text = "W = ";
	}
	else {
		ans_label2->Text = "t = ";
	}
}
	};
}
