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
	/// Summary for CH2_E1
	/// </summary>
	public ref class CH2_E1 : public System::Windows::Forms::Form
	{
	public:
		CH2_E1(void)
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
		~CH2_E1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ g_label;

	private: System::Windows::Forms::Button^ convert_button;
	private: System::Windows::Forms::Button^ reset_button;

	private: System::Windows::Forms::ComboBox^ u_comboBox;
	private: System::Windows::Forms::ComboBox^ ans_combo;
	private: System::Windows::Forms::ComboBox^ t_comboBox;
	private: System::Windows::Forms::TextBox^ tta_textBox;


	private: System::Windows::Forms::TextBox^ u_textBox;
	private: System::Windows::Forms::TextBox^ t_textBox;
	private: System::Windows::Forms::Label^ tta_label;


	private: System::Windows::Forms::Label^ u_label;
	private: System::Windows::Forms::Label^ ans_label2;
	private: System::Windows::Forms::Label^ ans_label;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ t_label;

	private: System::Windows::Forms::Button^ cal_button;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ Find_label;
	private: System::Windows::Forms::Label^ tta_u_label;
	private: System::Windows::Forms::Label^ g_u_label;


	private: System::Windows::Forms::ComboBox^ g_comboBox;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CH2_E1::typeid));
			this->g_label = (gcnew System::Windows::Forms::Label());
			this->convert_button = (gcnew System::Windows::Forms::Button());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->u_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ans_combo = (gcnew System::Windows::Forms::ComboBox());
			this->t_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->tta_textBox = (gcnew System::Windows::Forms::TextBox());
			this->u_textBox = (gcnew System::Windows::Forms::TextBox());
			this->t_textBox = (gcnew System::Windows::Forms::TextBox());
			this->tta_label = (gcnew System::Windows::Forms::Label());
			this->u_label = (gcnew System::Windows::Forms::Label());
			this->ans_label2 = (gcnew System::Windows::Forms::Label());
			this->ans_label = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->t_label = (gcnew System::Windows::Forms::Label());
			this->cal_button = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Find_label = (gcnew System::Windows::Forms::Label());
			this->tta_u_label = (gcnew System::Windows::Forms::Label());
			this->g_u_label = (gcnew System::Windows::Forms::Label());
			this->g_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// g_label
			// 
			this->g_label->AutoSize = true;
			this->g_label->BackColor = System::Drawing::Color::Transparent;
			this->g_label->Enabled = false;
			this->g_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->g_label->Location = System::Drawing::Point(85, 506);
			this->g_label->Name = L"g_label";
			this->g_label->Size = System::Drawing::Size(47, 40);
			this->g_label->TabIndex = 103;
			this->g_label->Text = L"g =";
			this->g_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// convert_button
			// 
			this->convert_button->Enabled = false;
			this->convert_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convert_button->Location = System::Drawing::Point(703, 577);
			this->convert_button->Name = L"convert_button";
			this->convert_button->Size = System::Drawing::Size(89, 48);
			this->convert_button->TabIndex = 102;
			this->convert_button->Text = L"CONVERT";
			this->convert_button->UseVisualStyleBackColor = true;
			this->convert_button->Click += gcnew System::EventHandler(this, &CH2_E1::convert_button_Click);
			// 
			// reset_button
			// 
			this->reset_button->BackColor = System::Drawing::Color::OrangeRed;
			this->reset_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset_button->ForeColor = System::Drawing::Color::White;
			this->reset_button->Location = System::Drawing::Point(715, 258);
			this->reset_button->Name = L"reset_button";
			this->reset_button->Size = System::Drawing::Size(77, 45);
			this->reset_button->TabIndex = 101;
			this->reset_button->Text = L"RESET";
			this->reset_button->UseVisualStyleBackColor = false;
			this->reset_button->Click += gcnew System::EventHandler(this, &CH2_E1::reset_button_Click);
			// 
			// u_comboBox
			// 
			this->u_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->u_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->u_comboBox->FormattingEnabled = true;
			this->u_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"m/s", L"km/h" });
			this->u_comboBox->Location = System::Drawing::Point(312, 387);
			this->u_comboBox->Name = L"u_comboBox";
			this->u_comboBox->Size = System::Drawing::Size(94, 48);
			this->u_comboBox->TabIndex = 99;
			this->u_comboBox->Visible = false;
			// 
			// ans_combo
			// 
			this->ans_combo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ans_combo->Enabled = false;
			this->ans_combo->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->ans_combo->FormattingEnabled = true;
			this->ans_combo->Location = System::Drawing::Point(603, 577);
			this->ans_combo->Name = L"ans_combo";
			this->ans_combo->Size = System::Drawing::Size(94, 48);
			this->ans_combo->TabIndex = 98;
			this->ans_combo->SelectedIndexChanged += gcnew System::EventHandler(this, &CH2_E1::ans_combo_SelectedIndexChanged);
			// 
			// t_comboBox
			// 
			this->t_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->t_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->t_comboBox->FormattingEnabled = true;
			this->t_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"s", L"min", L"h" });
			this->t_comboBox->Location = System::Drawing::Point(312, 329);
			this->t_comboBox->Name = L"t_comboBox";
			this->t_comboBox->Size = System::Drawing::Size(94, 48);
			this->t_comboBox->TabIndex = 97;
			this->t_comboBox->Visible = false;
			// 
			// tta_textBox
			// 
			this->tta_textBox->Enabled = false;
			this->tta_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tta_textBox->Location = System::Drawing::Point(133, 445);
			this->tta_textBox->Name = L"tta_textBox";
			this->tta_textBox->Size = System::Drawing::Size(178, 48);
			this->tta_textBox->TabIndex = 95;
			this->tta_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// u_textBox
			// 
			this->u_textBox->Enabled = false;
			this->u_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->u_textBox->Location = System::Drawing::Point(133, 387);
			this->u_textBox->Name = L"u_textBox";
			this->u_textBox->Size = System::Drawing::Size(178, 48);
			this->u_textBox->TabIndex = 94;
			this->u_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// t_textBox
			// 
			this->t_textBox->Enabled = false;
			this->t_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_textBox->Location = System::Drawing::Point(133, 329);
			this->t_textBox->Name = L"t_textBox";
			this->t_textBox->Size = System::Drawing::Size(178, 48);
			this->t_textBox->TabIndex = 96;
			this->t_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tta_label
			// 
			this->tta_label->AutoSize = true;
			this->tta_label->BackColor = System::Drawing::Color::Transparent;
			this->tta_label->Enabled = false;
			this->tta_label->Font = (gcnew System::Drawing::Font(L"Cambria Math", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tta_label->Location = System::Drawing::Point(71, 416);
			this->tta_label->Name = L"tta_label";
			this->tta_label->Size = System::Drawing::Size(73, 106);
			this->tta_label->TabIndex = 93;
			this->tta_label->Text = L"θ =";
			this->tta_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// u_label
			// 
			this->u_label->AutoSize = true;
			this->u_label->BackColor = System::Drawing::Color::Transparent;
			this->u_label->Enabled = false;
			this->u_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->u_label->Location = System::Drawing::Point(82, 390);
			this->u_label->Name = L"u_label";
			this->u_label->Size = System::Drawing::Size(46, 40);
			this->u_label->TabIndex = 92;
			this->u_label->Text = L"u =";
			this->u_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ans_label2
			// 
			this->ans_label2->AutoSize = true;
			this->ans_label2->BackColor = System::Drawing::Color::Transparent;
			this->ans_label2->Font = (gcnew System::Drawing::Font(L"FC Lamoon", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_label2->ForeColor = System::Drawing::Color::Purple;
			this->ans_label2->Location = System::Drawing::Point(93, 576);
			this->ans_label2->Name = L"ans_label2";
			this->ans_label2->Size = System::Drawing::Size(55, 38);
			this->ans_label2->TabIndex = 91;
			this->ans_label2->Text = L"t =";
			this->ans_label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ans_label2->Visible = false;
			// 
			// ans_label
			// 
			this->ans_label->AutoSize = true;
			this->ans_label->BackColor = System::Drawing::Color::Transparent;
			this->ans_label->Font = (gcnew System::Drawing::Font(L"FC Lamoon", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_label->ForeColor = System::Drawing::Color::Purple;
			this->ans_label->Location = System::Drawing::Point(192, 577);
			this->ans_label->Name = L"ans_label";
			this->ans_label->Size = System::Drawing::Size(35, 38);
			this->ans_label->TabIndex = 90;
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
			this->label3->Location = System::Drawing::Point(549, 582);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 37);
			this->label3->TabIndex = 89;
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
			this->label2->Location = System::Drawing::Point(23, 582);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 37);
			this->label2->TabIndex = 88;
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
			this->label1->Location = System::Drawing::Point(101, 221);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 37);
			this->label1->TabIndex = 87;
			this->label1->Text = L"Please Select What to Find.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// t_label
			// 
			this->t_label->AutoSize = true;
			this->t_label->BackColor = System::Drawing::Color::Transparent;
			this->t_label->Enabled = false;
			this->t_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_label->Location = System::Drawing::Point(82, 332);
			this->t_label->Name = L"t_label";
			this->t_label->Size = System::Drawing::Size(40, 40);
			this->t_label->TabIndex = 86;
			this->t_label->Text = L"t =";
			this->t_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// cal_button
			// 
			this->cal_button->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->cal_button->Enabled = false;
			this->cal_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cal_button->ForeColor = System::Drawing::Color::White;
			this->cal_button->Location = System::Drawing::Point(344, 258);
			this->cal_button->Name = L"cal_button";
			this->cal_button->Size = System::Drawing::Size(62, 45);
			this->cal_button->TabIndex = 85;
			this->cal_button->Text = L"CAL";
			this->cal_button->UseVisualStyleBackColor = false;
			this->cal_button->Click += gcnew System::EventHandler(this, &CH2_E1::cal_button_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->ItemHeight = 37;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"t (Time)", L"u (Initial Velocity)", L"Theta (Angle)" });
			this->comboBox1->Location = System::Drawing::Point(91, 258);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(247, 45);
			this->comboBox1->TabIndex = 84;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CH2_E1::comboBox1_SelectedIndexChanged);
			// 
			// Find_label
			// 
			this->Find_label->AutoSize = true;
			this->Find_label->BackColor = System::Drawing::Color::Transparent;
			this->Find_label->Font = (gcnew System::Drawing::Font(L"Bangna New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Find_label->Location = System::Drawing::Point(23, 263);
			this->Find_label->Name = L"Find_label";
			this->Find_label->Size = System::Drawing::Size(73, 37);
			this->Find_label->TabIndex = 83;
			this->Find_label->Text = L"Find :";
			this->Find_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tta_u_label
			// 
			this->tta_u_label->AutoSize = true;
			this->tta_u_label->BackColor = System::Drawing::Color::Transparent;
			this->tta_u_label->Enabled = false;
			this->tta_u_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tta_u_label->Location = System::Drawing::Point(312, 441);
			this->tta_u_label->Name = L"tta_u_label";
			this->tta_u_label->Size = System::Drawing::Size(30, 48);
			this->tta_u_label->TabIndex = 103;
			this->tta_u_label->Text = L"°";
			this->tta_u_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// g_u_label
			// 
			this->g_u_label->AutoSize = true;
			this->g_u_label->BackColor = System::Drawing::Color::Transparent;
			this->g_u_label->Enabled = false;
			this->g_u_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->g_u_label->Location = System::Drawing::Point(312, 503);
			this->g_u_label->Name = L"g_u_label";
			this->g_u_label->Size = System::Drawing::Size(72, 40);
			this->g_u_label->TabIndex = 103;
			this->g_u_label->Text = L"m/s^2";
			this->g_u_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// g_comboBox
			// 
			this->g_comboBox->Enabled = false;
			this->g_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->g_comboBox->FormattingEnabled = true;
			this->g_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"9.8", L"9.81", L"10" });
			this->g_comboBox->Location = System::Drawing::Point(133, 503);
			this->g_comboBox->Name = L"g_comboBox";
			this->g_comboBox->Size = System::Drawing::Size(178, 48);
			this->g_comboBox->TabIndex = 99;
			// 
			// CH2_E1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(804, 636);
			this->Controls->Add(this->tta_u_label);
			this->Controls->Add(this->g_u_label);
			this->Controls->Add(this->g_label);
			this->Controls->Add(this->convert_button);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->g_comboBox);
			this->Controls->Add(this->u_comboBox);
			this->Controls->Add(this->ans_combo);
			this->Controls->Add(this->t_comboBox);
			this->Controls->Add(this->tta_textBox);
			this->Controls->Add(this->u_textBox);
			this->Controls->Add(this->t_textBox);
			this->Controls->Add(this->tta_label);
			this->Controls->Add(this->u_label);
			this->Controls->Add(this->ans_label2);
			this->Controls->Add(this->ans_label);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->t_label);
			this->Controls->Add(this->cal_button);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Find_label);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(820, 675);
			this->MinimumSize = System::Drawing::Size(820, 675);
			this->Name = L"CH2_E1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CH2_E1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//==========================================[เขียนฟังก์ชัน]==============================================//

public:
	double t, u, d, g, ans, pi = 3.14159265358979323846;
	String^ unit;

	//ตั้งค่าหน้าต่าง
	void set_window() {
		label1->Visible = 0;

		t_comboBox->Show();
		u_comboBox->Show();

		if (comboBox1->SelectedItem == "t (Time)") {
			t_label->Enabled = false;
			t_textBox->Enabled = false;
			t_comboBox->Hide();

			u_label->Enabled = true;
			u_textBox->Enabled = true;
			u_comboBox->Show();	u_comboBox->SelectedIndex = 0;

			tta_label->Enabled = true;
			tta_textBox->Enabled = true;
			tta_u_label->Enabled = true;

			g_label->Enabled = true;
			g_u_label->Enabled = true;
			g_comboBox->Enabled = true;
		}
		else if (comboBox1->SelectedItem == "u (Initial Velocity)") {
			t_label->Enabled = true;
			t_textBox->Enabled = true;
			t_comboBox->Show(); t_comboBox->SelectedIndex = 0;

			u_label->Enabled = false;
			u_textBox->Enabled = false;
			u_comboBox->Hide(); 

			tta_label->Enabled = true;
			tta_textBox->Enabled = true;
			tta_u_label->Enabled = true;

			g_label->Enabled = true;
			g_u_label->Enabled = true;
			g_comboBox->Enabled = true;
		}
		else if (comboBox1->SelectedItem == "Theta (Angle)") {
			t_label->Enabled = true;
			t_textBox->Enabled = true;
			t_comboBox->Show(); t_comboBox->SelectedIndex = 0;

			u_label->Enabled = true;
			u_textBox->Enabled = true;
			u_comboBox->Show(); u_comboBox->SelectedIndex = 0;

			tta_label->Enabled = false;
			tta_textBox->Enabled = false;
			tta_u_label->Enabled = false;

			g_label->Enabled = true;
			g_u_label->Enabled = true;
			g_comboBox->Enabled = true;
		}
	}

	//เคลียร์ช่อง
	void clear_textbox() {
		t_textBox->Clear();
		u_textBox->Clear();
		tta_textBox->Clear();
		g_comboBox->Text = "";
		ans_label->Visible = 0;
	}

	//รีเทิร์นออกมาเป็นตัวแปรที่ต้องการหา
	char findwhat() {
		if (t_textBox->Enabled == 0) return 't';
		else if (u_textBox->Enabled == 0) return 'u';
		else return 'd';
	}

	//เช็คว่ามีช่องว่างอยู่มั้ย
	bool checkblank(char find) {
		if (find == 't') {
			if (u_textBox->Text == "" || tta_textBox->Text == "" || g_comboBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else if (find == 'u') {
			if (t_textBox->Text == "" || tta_textBox->Text == "" || g_comboBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else {
			if (t_textBox->Text == "" || u_textBox->Text == "" || g_comboBox->Text == "") {
				return 1;
			}
			else return 0;
		}
	}

	//คำนวณ
	void cal(char find) {
		if (find == 't') {
			u = System::Convert::ToDouble(u_textBox->Text); if (u_comboBox->SelectedItem == "km/h") u *= (1000.0000 / 3600.0000);
			d = System::Convert::ToDouble(tta_textBox->Text) * (pi/180);
			g = System::Convert::ToDouble(g_comboBox->Text);
			ans = (2*u*sin(d))/g;
		}
		else if (find == 'u') {
			t = System::Convert::ToDouble(t_textBox->Text);	if (t_comboBox->SelectedItem == "min") t *= 60;
															else if (t_comboBox->SelectedItem == "h") t *= 3600;
			d = System::Convert::ToDouble(tta_textBox->Text) * (pi / 180);
			g = System::Convert::ToDouble(g_comboBox->Text);
			ans = (t*g)/(2*sin(d));
		}
		else {
			t = System::Convert::ToDouble(t_textBox->Text); if (t_comboBox->SelectedItem == "min") t *= 60;
															else if (t_comboBox->SelectedItem == "h") t *= 3600;
			u = System::Convert::ToDouble(u_textBox->Text); if (u_comboBox->SelectedItem == "km/h") u *= (1000.0000 / 3600.0000);
			g = System::Convert::ToDouble(g_comboBox->Text);
			ans = (asin((t*g)/(2*u))/pi) * 180;
		}
	}

	//เซ็ตช่องเลือกหน่วยของคำตอบ
	void set_ans_combobox(char find) {
		if (find == 't') {
			ans_combo->Items->Add("s");
			ans_combo->Items->Add("min");
			ans_combo->Items->Add("h");
		}
		else if (find == 'u') {
			ans_combo->Items->Add("m/s");
			ans_combo->Items->Add("km/h");
		}
		else {
			ans_combo->Items->Add("°");
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
		unit = System::Convert::ToString(ans_combo->SelectedItem);
	}

	void reset() {
		clear_textbox();
		cal_button->Enabled = 0;
		convert_button->Enabled = 0;
		ans_label->Hide();
		ans_label2->Hide();

		t_label->Enabled = 0;
		t_textBox->Enabled = 0;
		t_comboBox->Hide();

		u_label->Enabled = 0;
		u_textBox->Enabled = 0;
		u_comboBox->Hide();

		tta_label->Enabled = 0;
		tta_textBox->Enabled = 0;
		tta_u_label->Enabled = 0;

		g_label->Enabled = 0;
		g_u_label->Enabled = 0;
		g_comboBox->Enabled = 0;

		comboBox1->Items->Clear();
		comboBox1->Items->Add("t (Time)");
		comboBox1->Items->Add("u (Initial Velocity)");
		comboBox1->Items->Add("Theta (Angle)");

		ans_combo->Items->Clear();
		ans_combo->Enabled = 0;
	}

	//==========================================[โค้ดGUI]==============================================//

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	set_window();
	clear_textbox();
	cal_button->Enabled = 1;
	ans_combo->Items->Clear();
	ans_combo->Enabled = 0;
	if (findwhat() == 't') {
		ans_label2->Text = "t = ";
	}
	else if (findwhat() == 'u') {
		ans_label2->Text = "u = ";
	}
	else {
		ans_label2->Text = "Theta = ";
	}
}
private: System::Void cal_button_Click(System::Object^ sender, System::EventArgs^ e) {
	ans_combo->Items->Clear();
	char find = findwhat();
	if (checkblank(find) == 1) {
		label1->Text = "Please Input all Blanks.";
		label1->Visible = 1;
	}
	else {
		cal(find);
		//String^ ans = System::Convert::ToString(cal(find));
		if (find == 't') {
			set_ans_combobox('t');
			ans_combo->SelectedIndex = 0;
		}
		else if (find == 'u') {
			set_ans_combobox('u');
			ans_combo->SelectedIndex = 0;
		}
		else {
			set_ans_combobox('d');
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
	};
}
