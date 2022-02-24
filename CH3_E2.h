﻿#pragma once
#include<cmath>
namespace PhysicsCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CH3_E2
	/// </summary>
	public ref class CH3_E2 : public System::Windows::Forms::Form
	{
	public:
		CH3_E2(void)
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
		~CH3_E2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ v_comboBox;
	protected:
	private: System::Windows::Forms::TextBox^ v_textBox;
	private: System::Windows::Forms::Label^ v_label;
	private: System::Windows::Forms::Button^ convert_button;
	private: System::Windows::Forms::Button^ reset_button;
	private: System::Windows::Forms::ComboBox^ R_comboBox;



	private: System::Windows::Forms::ComboBox^ ans_combo;
	private: System::Windows::Forms::TextBox^ f_textBox;
	private: System::Windows::Forms::TextBox^ R_textBox;



	private: System::Windows::Forms::Label^ R_label;




	private: System::Windows::Forms::Label^ ans_label2;
	private: System::Windows::Forms::Label^ ans_label;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ cal_button;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ Find_label;

	private: System::Windows::Forms::TextBox^ T_textBox;


	private: System::Windows::Forms::Label^ f_u_label;
	private: System::Windows::Forms::Label^ T_u_label;
	private: System::Windows::Forms::Button^ f_button;
	private: System::Windows::Forms::Button^ T_button;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CH3_E2::typeid));
			this->v_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->v_textBox = (gcnew System::Windows::Forms::TextBox());
			this->v_label = (gcnew System::Windows::Forms::Label());
			this->convert_button = (gcnew System::Windows::Forms::Button());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->R_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ans_combo = (gcnew System::Windows::Forms::ComboBox());
			this->f_textBox = (gcnew System::Windows::Forms::TextBox());
			this->R_textBox = (gcnew System::Windows::Forms::TextBox());
			this->R_label = (gcnew System::Windows::Forms::Label());
			this->ans_label2 = (gcnew System::Windows::Forms::Label());
			this->ans_label = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cal_button = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Find_label = (gcnew System::Windows::Forms::Label());
			this->T_textBox = (gcnew System::Windows::Forms::TextBox());
			this->f_u_label = (gcnew System::Windows::Forms::Label());
			this->T_u_label = (gcnew System::Windows::Forms::Label());
			this->f_button = (gcnew System::Windows::Forms::Button());
			this->T_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// v_comboBox
			// 
			this->v_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->v_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->v_comboBox->FormattingEnabled = true;
			this->v_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"m/s", L"km/h" });
			this->v_comboBox->Location = System::Drawing::Point(293, 324);
			this->v_comboBox->Name = L"v_comboBox";
			this->v_comboBox->Size = System::Drawing::Size(94, 48);
			this->v_comboBox->TabIndex = 151;
			this->v_comboBox->Visible = false;
			// 
			// v_textBox
			// 
			this->v_textBox->Enabled = false;
			this->v_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->v_textBox->Location = System::Drawing::Point(114, 324);
			this->v_textBox->Name = L"v_textBox";
			this->v_textBox->Size = System::Drawing::Size(178, 48);
			this->v_textBox->TabIndex = 150;
			this->v_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// v_label
			// 
			this->v_label->AutoSize = true;
			this->v_label->BackColor = System::Drawing::Color::Transparent;
			this->v_label->Enabled = false;
			this->v_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->v_label->Location = System::Drawing::Point(66, 328);
			this->v_label->Name = L"v_label";
			this->v_label->Size = System::Drawing::Size(45, 40);
			this->v_label->TabIndex = 149;
			this->v_label->Text = L"v =";
			this->v_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// convert_button
			// 
			this->convert_button->Enabled = false;
			this->convert_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convert_button->Location = System::Drawing::Point(704, 576);
			this->convert_button->Name = L"convert_button";
			this->convert_button->Size = System::Drawing::Size(89, 48);
			this->convert_button->TabIndex = 148;
			this->convert_button->Text = L"CONVERT";
			this->convert_button->UseVisualStyleBackColor = true;
			this->convert_button->Click += gcnew System::EventHandler(this, &CH3_E2::convert_button_Click);
			// 
			// reset_button
			// 
			this->reset_button->BackColor = System::Drawing::Color::Crimson;
			this->reset_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset_button->ForeColor = System::Drawing::Color::White;
			this->reset_button->Location = System::Drawing::Point(716, 257);
			this->reset_button->Name = L"reset_button";
			this->reset_button->Size = System::Drawing::Size(77, 45);
			this->reset_button->TabIndex = 147;
			this->reset_button->Text = L"RESET";
			this->reset_button->UseVisualStyleBackColor = false;
			this->reset_button->Click += gcnew System::EventHandler(this, &CH3_E2::reset_button_Click);
			// 
			// R_comboBox
			// 
			this->R_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->R_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->R_comboBox->FormattingEnabled = true;
			this->R_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"m", L"km" });
			this->R_comboBox->Location = System::Drawing::Point(293, 382);
			this->R_comboBox->Name = L"R_comboBox";
			this->R_comboBox->Size = System::Drawing::Size(94, 48);
			this->R_comboBox->TabIndex = 145;
			this->R_comboBox->Visible = false;
			// 
			// ans_combo
			// 
			this->ans_combo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ans_combo->Enabled = false;
			this->ans_combo->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->ans_combo->FormattingEnabled = true;
			this->ans_combo->Location = System::Drawing::Point(604, 576);
			this->ans_combo->Name = L"ans_combo";
			this->ans_combo->Size = System::Drawing::Size(94, 48);
			this->ans_combo->TabIndex = 144;
			this->ans_combo->SelectedIndexChanged += gcnew System::EventHandler(this, &CH3_E2::ans_combo_SelectedIndexChanged);
			// 
			// f_textBox
			// 
			this->f_textBox->Enabled = false;
			this->f_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_textBox->Location = System::Drawing::Point(114, 440);
			this->f_textBox->Name = L"f_textBox";
			this->f_textBox->Size = System::Drawing::Size(178, 48);
			this->f_textBox->TabIndex = 143;
			this->f_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// R_textBox
			// 
			this->R_textBox->Enabled = false;
			this->R_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R_textBox->Location = System::Drawing::Point(114, 382);
			this->R_textBox->Name = L"R_textBox";
			this->R_textBox->Size = System::Drawing::Size(178, 48);
			this->R_textBox->TabIndex = 142;
			this->R_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// R_label
			// 
			this->R_label->AutoSize = true;
			this->R_label->BackColor = System::Drawing::Color::Transparent;
			this->R_label->Enabled = false;
			this->R_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->R_label->Location = System::Drawing::Point(64, 386);
			this->R_label->Name = L"R_label";
			this->R_label->Size = System::Drawing::Size(48, 40);
			this->R_label->TabIndex = 140;
			this->R_label->Text = L"R =";
			this->R_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ans_label2
			// 
			this->ans_label2->AutoSize = true;
			this->ans_label2->BackColor = System::Drawing::Color::Transparent;
			this->ans_label2->Font = (gcnew System::Drawing::Font(L"FC Lamoon", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ans_label2->Location = System::Drawing::Point(94, 575);
			this->ans_label2->Name = L"ans_label2";
			this->ans_label2->Size = System::Drawing::Size(57, 38);
			this->ans_label2->TabIndex = 139;
			this->ans_label2->Text = L"v =";
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
			this->ans_label->Location = System::Drawing::Point(145, 576);
			this->ans_label->Name = L"ans_label";
			this->ans_label->Size = System::Drawing::Size(35, 38);
			this->ans_label->TabIndex = 138;
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
			this->label3->Location = System::Drawing::Point(550, 581);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 37);
			this->label3->TabIndex = 137;
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
			this->label2->Location = System::Drawing::Point(24, 581);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 37);
			this->label2->TabIndex = 136;
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
			this->label1->Location = System::Drawing::Point(102, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 37);
			this->label1->TabIndex = 135;
			this->label1->Text = L"Please Select What to Find.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cal_button
			// 
			this->cal_button->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->cal_button->Enabled = false;
			this->cal_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cal_button->ForeColor = System::Drawing::Color::White;
			this->cal_button->Location = System::Drawing::Point(345, 257);
			this->cal_button->Name = L"cal_button";
			this->cal_button->Size = System::Drawing::Size(62, 45);
			this->cal_button->TabIndex = 134;
			this->cal_button->Text = L"CAL";
			this->cal_button->UseVisualStyleBackColor = false;
			this->cal_button->Click += gcnew System::EventHandler(this, &CH3_E2::cal_button_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->ItemHeight = 37;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"v (Velocity)", L"R (Radius)", L"f (Frequency)",
					L"T (Period)"
			});
			this->comboBox1->Location = System::Drawing::Point(92, 257);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(247, 45);
			this->comboBox1->TabIndex = 133;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CH3_E2::comboBox1_SelectedIndexChanged);
			// 
			// Find_label
			// 
			this->Find_label->AutoSize = true;
			this->Find_label->BackColor = System::Drawing::Color::Transparent;
			this->Find_label->Font = (gcnew System::Drawing::Font(L"Bangna New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Find_label->Location = System::Drawing::Point(24, 262);
			this->Find_label->Name = L"Find_label";
			this->Find_label->Size = System::Drawing::Size(73, 37);
			this->Find_label->TabIndex = 132;
			this->Find_label->Text = L"Find :";
			this->Find_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// T_textBox
			// 
			this->T_textBox->Enabled = false;
			this->T_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T_textBox->Location = System::Drawing::Point(114, 499);
			this->T_textBox->Name = L"T_textBox";
			this->T_textBox->Size = System::Drawing::Size(178, 48);
			this->T_textBox->TabIndex = 143;
			this->T_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// f_u_label
			// 
			this->f_u_label->AutoSize = true;
			this->f_u_label->BackColor = System::Drawing::Color::Transparent;
			this->f_u_label->Enabled = false;
			this->f_u_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_u_label->Location = System::Drawing::Point(293, 444);
			this->f_u_label->Name = L"f_u_label";
			this->f_u_label->Size = System::Drawing::Size(41, 40);
			this->f_u_label->TabIndex = 141;
			this->f_u_label->Text = L"Hz";
			this->f_u_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// T_u_label
			// 
			this->T_u_label->AutoSize = true;
			this->T_u_label->BackColor = System::Drawing::Color::Transparent;
			this->T_u_label->Enabled = false;
			this->T_u_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T_u_label->Location = System::Drawing::Point(293, 503);
			this->T_u_label->Name = L"T_u_label";
			this->T_u_label->Size = System::Drawing::Size(27, 40);
			this->T_u_label->TabIndex = 141;
			this->T_u_label->Text = L"s";
			this->T_u_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// f_button
			// 
			this->f_button->Enabled = false;
			this->f_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->f_button->Location = System::Drawing::Point(59, 440);
			this->f_button->Name = L"f_button";
			this->f_button->Size = System::Drawing::Size(54, 48);
			this->f_button->TabIndex = 148;
			this->f_button->Text = L"f =";
			this->f_button->UseVisualStyleBackColor = true;
			this->f_button->Click += gcnew System::EventHandler(this, &CH3_E2::f_button_Click);
			// 
			// T_button
			// 
			this->T_button->Enabled = false;
			this->T_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T_button->Location = System::Drawing::Point(59, 499);
			this->T_button->Name = L"T_button";
			this->T_button->Size = System::Drawing::Size(54, 48);
			this->T_button->TabIndex = 148;
			this->T_button->Text = L"T =";
			this->T_button->UseVisualStyleBackColor = true;
			this->T_button->Click += gcnew System::EventHandler(this, &CH3_E2::T_button_Click);
			// 
			// CH3_E2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(804, 636);
			this->Controls->Add(this->v_comboBox);
			this->Controls->Add(this->v_textBox);
			this->Controls->Add(this->v_label);
			this->Controls->Add(this->T_button);
			this->Controls->Add(this->f_button);
			this->Controls->Add(this->convert_button);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->R_comboBox);
			this->Controls->Add(this->ans_combo);
			this->Controls->Add(this->T_textBox);
			this->Controls->Add(this->f_textBox);
			this->Controls->Add(this->R_textBox);
			this->Controls->Add(this->T_u_label);
			this->Controls->Add(this->f_u_label);
			this->Controls->Add(this->R_label);
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
			this->Name = L"CH3_E2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CH3_E2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//==========================================[เขียนฟังก์ชัน]==============================================//

public:
	double v, R, f, T, ans, pi = 3.14159265358979323846;
	String^ unit;
	char findby = 'f';

	//ตั้งค่าหน้าต่าง
	void set_window() {
		label1->Visible = 0;

		v_comboBox->Show();
		R_comboBox->Show();

		if (comboBox1->SelectedItem == "v (Velocity)") {
			v_label->Enabled = false;
			v_textBox->Enabled = false;
			v_comboBox->Hide();

			R_label->Enabled = true;
			R_textBox->Enabled = true;
			R_comboBox->Show();	R_comboBox->SelectedIndex = 0;

			f_button->Enabled = true;
			f_textBox->Enabled = false;
			f_u_label->Enabled = false;

			T_button->Enabled = true;
			T_textBox->Enabled = false;
			T_u_label->Enabled = false;
		}
		else if (comboBox1->SelectedItem == "R (Radius)") {
			v_label->Enabled = true;
			v_textBox->Enabled = true;
			v_comboBox->Show();	v_comboBox->SelectedIndex = 0;

			R_label->Enabled = false;
			R_textBox->Enabled = false;
			R_comboBox->Hide();

			f_button->Enabled = true;
			f_textBox->Enabled = false;
			f_u_label->Enabled = false;

			T_button->Enabled = true;
			T_textBox->Enabled = false;
			T_u_label->Enabled = false;
		}
		else if (comboBox1->SelectedItem == "f (Frequency)") {
			v_label->Enabled = true;
			v_textBox->Enabled = true;
			v_comboBox->Show();	v_comboBox->SelectedIndex = 0;

			R_label->Enabled = true;
			R_textBox->Enabled = true;
			R_comboBox->Show();	R_comboBox->SelectedIndex = 0;

			f_button->Enabled = false;
			f_textBox->Enabled = false;
			f_u_label->Enabled = false;

			T_button->Enabled = false;
			T_textBox->Enabled = false;
			T_u_label->Enabled = false;
		}
		else if (comboBox1->SelectedItem == "T (Period)") {
			v_label->Enabled = true;
			v_textBox->Enabled = true;
			v_comboBox->Show();	v_comboBox->SelectedIndex = 0;

			R_label->Enabled = true;
			R_textBox->Enabled = true;
			R_comboBox->Show();	R_comboBox->SelectedIndex = 0;

			f_button->Enabled = false;
			f_textBox->Enabled = false;
			f_u_label->Enabled = false;

			T_button->Enabled = false;
			T_textBox->Enabled = false;
			T_u_label->Enabled = false;
		}
	}

	//เคลียร์ช่อง
	void clear_textbox() {
		v_textBox->Clear();
		R_textBox->Clear();
		f_textBox->Clear();
		T_textBox->Clear();
		ans_label->Visible = 0;
	}

	//รีเทิร์นออกมาเป็นตัวแปรที่ต้องการหา
	char findwhat() {
		if (System::Convert::ToString(comboBox1->SelectedItem) == "v (Velocity)") return 'v';
		else if (System::Convert::ToString(comboBox1->SelectedItem) == "R (Radius)") return 'R';
		else if (System::Convert::ToString(comboBox1->SelectedItem) == "f (Frequency)") return 'f';
		else return 'T';
	}

	//เช็คว่ามีช่องว่างอยู่มั้ย
	bool checkblank(char find) {
		if (find == 'v' && findby == 'f') {
			if (R_textBox->Text == "" || f_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else if (find == 'v' && findby == 'T') {
			if (R_textBox->Text == "" || T_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		if (find == 'R' && findby == 'f') {
			if (v_textBox->Text == "" || f_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else if (find == 'R' && findby == 'T') {
			if (v_textBox->Text == "" || T_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else if (find == 'f') {
			if (v_textBox->Text == "" || R_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else {
			if (v_textBox->Text == "" || R_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
	}

	//คำนวณ
	void cal(char find) {
		if (find == 'v' && findby == 'f') {
			R = System::Convert::ToDouble(R_textBox->Text); if (R_comboBox->SelectedItem == "km") R *= 1000.0000;
			f = System::Convert::ToDouble(f_textBox->Text);
			ans = 2*pi*R*f;
		}
		else if (find == 'v' && findby == 'T') {
			R = System::Convert::ToDouble(R_textBox->Text); if (R_comboBox->SelectedItem == "km") R *= 1000.0000;
			T = System::Convert::ToDouble(T_textBox->Text);
			ans = 2 * pi * R / T;
		}
		else if (find == 'R' && findby == 'f') {
			v = System::Convert::ToDouble(v_textBox->Text); if (v_comboBox->SelectedItem == "km/h") v *= (1000.0000 / 3600.0000);
			f = System::Convert::ToDouble(f_textBox->Text);
			ans = v/(2*pi*f);
		}
		else if (find == 'R' && findby == 'T') {
			v = System::Convert::ToDouble(v_textBox->Text); if (v_comboBox->SelectedItem == "km/h") v *= (1000.0000 / 3600.0000);
			T = System::Convert::ToDouble(T_textBox->Text);
			ans = (v * T) / (2 * pi);
		}
		else if (find == 'f') {
			v = System::Convert::ToDouble(v_textBox->Text); if (v_comboBox->SelectedItem == "km/h") v *= (1000.0000 / 3600.0000);
			R = System::Convert::ToDouble(R_textBox->Text); if (R_comboBox->SelectedItem == "km") R *= 1000.0000;
			ans = v/(2*pi*R);
		}
		else if (find == 'T') {
			v = System::Convert::ToDouble(v_textBox->Text); if (v_comboBox->SelectedItem == "km/h") v *= (1000.0000 / 3600.0000);
			R = System::Convert::ToDouble(R_textBox->Text); if (R_comboBox->SelectedItem == "km") R *= 1000.0000;
			ans = (2 * pi * R)/v;
		}
	}

	//เซ็ตช่องเลือกหน่วยของคำตอบ
	void set_ans_combobox(char find) {
		if (find == 'v') {
			ans_combo->Items->Add("m/s");
			ans_combo->Items->Add("km/h");
		}
		else if (find == 'R') {
			ans_combo->Items->Add("m");
			ans_combo->Items->Add("km");
		}
		else if (find == 'f') {
			ans_combo->Items->Add("Hz");
		}
		else {
			ans_combo->Items->Add("s");
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
		unit = System::Convert::ToString(ans_combo->SelectedItem);
	}

	void reset() {
		clear_textbox();
		cal_button->Enabled = 0;
		convert_button->Enabled = 0;
		ans_label->Hide();
		ans_label2->Hide();

		v_label->Enabled = 0;
		v_textBox->Enabled = 0;
		v_comboBox->Hide();

		R_label->Enabled = 0;
		R_textBox->Enabled = 0;
		R_comboBox->Hide();

		f_button->Enabled = 0;
		f_textBox->Enabled = 0;
		f_u_label->Enabled = 0;

		T_button->Enabled = 0;
		T_textBox->Enabled = 0;
		T_u_label->Enabled = 0;

		comboBox1->Items->Clear();
		comboBox1->Items->Add("v (Velocity)");
		comboBox1->Items->Add("R (Radius)");
		comboBox1->Items->Add("f (Frequency)");
		comboBox1->Items->Add("T (Period)");

		ans_combo->Items->Clear();
		ans_combo->Enabled = 0;
	}

	//==========================================[โค้ดGUI]==============================================//

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	set_window();
	clear_textbox();
	//cal_button->Enabled = 1;
	ans_combo->Items->Clear();
	ans_combo->Enabled = 0;
	if (findwhat() == 'v') {
		ans_label2->Text = "v = ";
		label1->Text = "Click \"f or T\" to continue.";
		label1->Show();
	}
	else if (findwhat() == 'R') {
		ans_label2->Text = "R = ";
		label1->Text = "Click \"f or T\" to continue.";
		label1->Show();
	}
	else if (findwhat() == 'f') {
		ans_label2->Text = "f = ";
		cal_button->Enabled = 1;
	}
	else {
		ans_label2->Text = "T = ";
		cal_button->Enabled = 1;
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
		if (find == 'v') {
			set_ans_combobox('v');
			ans_combo->SelectedIndex = 0;
		}
		else if (find == 'R') {
			set_ans_combobox('R');
			ans_combo->SelectedIndex = 0;
		}
		else if (find == 'f') {
			set_ans_combobox('f');
			ans_combo->SelectedIndex = 0;
		}
		else {
			set_ans_combobox('T');
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
private: System::Void f_button_Click(System::Object^ sender, System::EventArgs^ e) {
	f_textBox->Enabled = 1;
	f_u_label->Enabled = 1;
	T_textBox->Enabled = 0;
	T_u_label->Enabled = 0;
	//T_button->Enabled = 0;
	cal_button->Enabled = 1;
	T_textBox->Text = "";
	ans_label->Text = "";
	findby = 'f';
}
private: System::Void T_button_Click(System::Object^ sender, System::EventArgs^ e) {
	f_textBox->Enabled = 0;
	f_u_label->Enabled = 0;
	T_textBox->Enabled = 1;
	T_u_label->Enabled = 1;
	//f_button->Enabled = 0;
	cal_button->Enabled = 1;
	f_textBox->Text = "";
	ans_label->Text = "";
	findby = 'T';
}
};
}
