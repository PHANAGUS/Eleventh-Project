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
	/// Summary for CH1_E2
	/// </summary>
	public ref class CH1_E2 : public System::Windows::Forms::Form
	{
	public:
		CH1_E2(void)
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
		~CH1_E2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ convert_button;
	protected:
	private: System::Windows::Forms::Button^ reset_button;
	private: System::Windows::Forms::ComboBox^ t_comboBox;
	private: System::Windows::Forms::ComboBox^ s_comboBox;

	private: System::Windows::Forms::ComboBox^ u_comboBox;
	private: System::Windows::Forms::ComboBox^ ans_combo;
	private: System::Windows::Forms::ComboBox^ v_comboBox;
	private: System::Windows::Forms::TextBox^ t_textBox;
	private: System::Windows::Forms::TextBox^ s_textBox;

	private: System::Windows::Forms::TextBox^ u_textBox;
	private: System::Windows::Forms::TextBox^ v_textBox;
	private: System::Windows::Forms::Label^ t_label;
	private: System::Windows::Forms::Label^ s_label;

	private: System::Windows::Forms::Label^ u_label;
	private: System::Windows::Forms::Label^ ans_label2;
	private: System::Windows::Forms::Label^ ans_label;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ v_label;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CH1_E2::typeid));
			this->convert_button = (gcnew System::Windows::Forms::Button());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->t_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->s_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->u_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ans_combo = (gcnew System::Windows::Forms::ComboBox());
			this->v_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->t_textBox = (gcnew System::Windows::Forms::TextBox());
			this->s_textBox = (gcnew System::Windows::Forms::TextBox());
			this->u_textBox = (gcnew System::Windows::Forms::TextBox());
			this->v_textBox = (gcnew System::Windows::Forms::TextBox());
			this->t_label = (gcnew System::Windows::Forms::Label());
			this->s_label = (gcnew System::Windows::Forms::Label());
			this->u_label = (gcnew System::Windows::Forms::Label());
			this->ans_label2 = (gcnew System::Windows::Forms::Label());
			this->ans_label = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->v_label = (gcnew System::Windows::Forms::Label());
			this->cal_button = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Find_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// convert_button
			// 
			this->convert_button->Enabled = false;
			this->convert_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convert_button->Location = System::Drawing::Point(700, 576);
			this->convert_button->Name = L"convert_button";
			this->convert_button->Size = System::Drawing::Size(89, 48);
			this->convert_button->TabIndex = 36;
			this->convert_button->Text = L"CONVERT";
			this->convert_button->UseVisualStyleBackColor = true;
			this->convert_button->Click += gcnew System::EventHandler(this, &CH1_E2::convert_button_Click);
			// 
			// reset_button
			// 
			this->reset_button->BackColor = System::Drawing::Color::OrangeRed;
			this->reset_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset_button->ForeColor = System::Drawing::Color::White;
			this->reset_button->Location = System::Drawing::Point(712, 257);
			this->reset_button->Name = L"reset_button";
			this->reset_button->Size = System::Drawing::Size(77, 45);
			this->reset_button->TabIndex = 35;
			this->reset_button->Text = L"RESET";
			this->reset_button->UseVisualStyleBackColor = false;
			this->reset_button->Click += gcnew System::EventHandler(this, &CH1_E2::reset_button_Click);
			// 
			// t_comboBox
			// 
			this->t_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->t_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->t_comboBox->FormattingEnabled = true;
			this->t_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"s", L"min", L"h" });
			this->t_comboBox->Location = System::Drawing::Point(309, 502);
			this->t_comboBox->Name = L"t_comboBox";
			this->t_comboBox->Size = System::Drawing::Size(94, 48);
			this->t_comboBox->TabIndex = 34;
			this->t_comboBox->Visible = false;
			// 
			// s_comboBox
			// 
			this->s_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->s_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->s_comboBox->FormattingEnabled = true;
			this->s_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"m", L"km" });
			this->s_comboBox->Location = System::Drawing::Point(308, 328);
			this->s_comboBox->Name = L"s_comboBox";
			this->s_comboBox->Size = System::Drawing::Size(94, 48);
			this->s_comboBox->TabIndex = 33;
			this->s_comboBox->Visible = false;
			// 
			// u_comboBox
			// 
			this->u_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->u_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->u_comboBox->FormattingEnabled = true;
			this->u_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"m/s", L"km/h" });
			this->u_comboBox->Location = System::Drawing::Point(309, 386);
			this->u_comboBox->Name = L"u_comboBox";
			this->u_comboBox->Size = System::Drawing::Size(94, 48);
			this->u_comboBox->TabIndex = 32;
			this->u_comboBox->Visible = false;
			// 
			// ans_combo
			// 
			this->ans_combo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ans_combo->Enabled = false;
			this->ans_combo->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->ans_combo->FormattingEnabled = true;
			this->ans_combo->Location = System::Drawing::Point(600, 576);
			this->ans_combo->Name = L"ans_combo";
			this->ans_combo->Size = System::Drawing::Size(94, 48);
			this->ans_combo->TabIndex = 31;
			this->ans_combo->SelectedIndexChanged += gcnew System::EventHandler(this, &CH1_E2::ans_combo_SelectedIndexChanged);
			// 
			// v_comboBox
			// 
			this->v_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->v_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->v_comboBox->FormattingEnabled = true;
			this->v_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"m/s", L"km/h" });
			this->v_comboBox->Location = System::Drawing::Point(308, 444);
			this->v_comboBox->Name = L"v_comboBox";
			this->v_comboBox->Size = System::Drawing::Size(94, 48);
			this->v_comboBox->TabIndex = 30;
			this->v_comboBox->Visible = false;
			// 
			// t_textBox
			// 
			this->t_textBox->Enabled = false;
			this->t_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_textBox->Location = System::Drawing::Point(130, 502);
			this->t_textBox->Name = L"t_textBox";
			this->t_textBox->Size = System::Drawing::Size(178, 48);
			this->t_textBox->TabIndex = 28;
			this->t_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// s_textBox
			// 
			this->s_textBox->Enabled = false;
			this->s_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->s_textBox->Location = System::Drawing::Point(129, 328);
			this->s_textBox->Name = L"s_textBox";
			this->s_textBox->Size = System::Drawing::Size(178, 48);
			this->s_textBox->TabIndex = 27;
			this->s_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// u_textBox
			// 
			this->u_textBox->Enabled = false;
			this->u_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->u_textBox->Location = System::Drawing::Point(130, 386);
			this->u_textBox->Name = L"u_textBox";
			this->u_textBox->Size = System::Drawing::Size(178, 48);
			this->u_textBox->TabIndex = 26;
			this->u_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// v_textBox
			// 
			this->v_textBox->Enabled = false;
			this->v_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->v_textBox->Location = System::Drawing::Point(129, 444);
			this->v_textBox->Name = L"v_textBox";
			this->v_textBox->Size = System::Drawing::Size(178, 48);
			this->v_textBox->TabIndex = 29;
			this->v_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// t_label
			// 
			this->t_label->AutoSize = true;
			this->t_label->BackColor = System::Drawing::Color::Transparent;
			this->t_label->Enabled = false;
			this->t_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_label->Location = System::Drawing::Point(79, 505);
			this->t_label->Name = L"t_label";
			this->t_label->Size = System::Drawing::Size(40, 40);
			this->t_label->TabIndex = 25;
			this->t_label->Text = L"t =";
			this->t_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// s_label
			// 
			this->s_label->AutoSize = true;
			this->s_label->BackColor = System::Drawing::Color::Transparent;
			this->s_label->Enabled = false;
			this->s_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->s_label->Location = System::Drawing::Point(81, 331);
			this->s_label->Name = L"s_label";
			this->s_label->Size = System::Drawing::Size(45, 40);
			this->s_label->TabIndex = 24;
			this->s_label->Text = L"s =";
			this->s_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// u_label
			// 
			this->u_label->AutoSize = true;
			this->u_label->BackColor = System::Drawing::Color::Transparent;
			this->u_label->Enabled = false;
			this->u_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->u_label->Location = System::Drawing::Point(79, 389);
			this->u_label->Name = L"u_label";
			this->u_label->Size = System::Drawing::Size(46, 40);
			this->u_label->TabIndex = 23;
			this->u_label->Text = L"u =";
			this->u_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ans_label2
			// 
			this->ans_label2->AutoSize = true;
			this->ans_label2->BackColor = System::Drawing::Color::Transparent;
			this->ans_label2->Font = (gcnew System::Drawing::Font(L"FC Lamoon", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ans_label2->Location = System::Drawing::Point(90, 575);
			this->ans_label2->Name = L"ans_label2";
			this->ans_label2->Size = System::Drawing::Size(56, 38);
			this->ans_label2->TabIndex = 22;
			this->ans_label2->Text = L"s =";
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
			this->ans_label->Location = System::Drawing::Point(141, 576);
			this->ans_label->Name = L"ans_label";
			this->ans_label->Size = System::Drawing::Size(35, 38);
			this->ans_label->TabIndex = 21;
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
			this->label3->Location = System::Drawing::Point(546, 581);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 37);
			this->label3->TabIndex = 20;
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
			this->label2->Location = System::Drawing::Point(20, 581);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 37);
			this->label2->TabIndex = 19;
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
			this->label1->Location = System::Drawing::Point(98, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 37);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Please Select What to Find.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// v_label
			// 
			this->v_label->AutoSize = true;
			this->v_label->BackColor = System::Drawing::Color::Transparent;
			this->v_label->Enabled = false;
			this->v_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->v_label->Location = System::Drawing::Point(81, 447);
			this->v_label->Name = L"v_label";
			this->v_label->Size = System::Drawing::Size(45, 40);
			this->v_label->TabIndex = 17;
			this->v_label->Text = L"v =";
			this->v_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// cal_button
			// 
			this->cal_button->BackColor = System::Drawing::Color::SandyBrown;
			this->cal_button->Enabled = false;
			this->cal_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cal_button->ForeColor = System::Drawing::Color::White;
			this->cal_button->Location = System::Drawing::Point(341, 257);
			this->cal_button->Name = L"cal_button";
			this->cal_button->Size = System::Drawing::Size(62, 45);
			this->cal_button->TabIndex = 16;
			this->cal_button->Text = L"CAL";
			this->cal_button->UseVisualStyleBackColor = false;
			this->cal_button->Click += gcnew System::EventHandler(this, &CH1_E2::cal_button_Click);
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
				L"s (Displacement)", L"u (Initial Velocity)", L"v (Final Velocity)",
					L"t (Time)"
			});
			this->comboBox1->Location = System::Drawing::Point(88, 257);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(247, 45);
			this->comboBox1->TabIndex = 15;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CH1_E2::comboBox1_SelectedIndexChanged_1);
			// 
			// Find_label
			// 
			this->Find_label->AutoSize = true;
			this->Find_label->BackColor = System::Drawing::Color::Transparent;
			this->Find_label->Font = (gcnew System::Drawing::Font(L"Bangna New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Find_label->Location = System::Drawing::Point(20, 262);
			this->Find_label->Name = L"Find_label";
			this->Find_label->Size = System::Drawing::Size(73, 37);
			this->Find_label->TabIndex = 14;
			this->Find_label->Text = L"Find :";
			this->Find_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CH1_E2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(804, 636);
			this->Controls->Add(this->convert_button);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->t_comboBox);
			this->Controls->Add(this->s_comboBox);
			this->Controls->Add(this->u_comboBox);
			this->Controls->Add(this->ans_combo);
			this->Controls->Add(this->v_comboBox);
			this->Controls->Add(this->t_textBox);
			this->Controls->Add(this->s_textBox);
			this->Controls->Add(this->u_textBox);
			this->Controls->Add(this->v_textBox);
			this->Controls->Add(this->t_label);
			this->Controls->Add(this->s_label);
			this->Controls->Add(this->u_label);
			this->Controls->Add(this->ans_label2);
			this->Controls->Add(this->ans_label);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->v_label);
			this->Controls->Add(this->cal_button);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Find_label);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(820, 675);
			this->MinimumSize = System::Drawing::Size(820, 675);
			this->Name = L"CH1_E2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CH1_E2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//==========================================[เขียนฟังก์ชัน]==============================================//

public:
	double v, u, s, t, ans;
	String^ unit;

	//ตั้งค่าหน้าต่าง
	void set_window() {
		label1->Visible = 0;

		s_comboBox->Show();
		u_comboBox->Show();
		v_comboBox->Show();
		t_comboBox->Show();

		if (comboBox1->SelectedItem == "s (Displacement)") {
			s_label->Enabled = false;
			s_textBox->Enabled = false;
			s_comboBox->Hide();

			u_label->Enabled = true;
			u_textBox->Enabled = true;
			u_comboBox->Show();	u_comboBox->SelectedIndex = 0;

			v_label->Enabled = true;
			v_textBox->Enabled = true;
			v_comboBox->Show(); v_comboBox->SelectedIndex = 0;

			t_label->Enabled = true;
			t_textBox->Enabled = true;
			t_comboBox->Show(); t_comboBox->SelectedIndex = 0;
		}
		else if (comboBox1->SelectedItem == "u (Initial Velocity)") {
			s_label->Enabled = true;
			s_textBox->Enabled = true;
			s_comboBox->Show(); s_comboBox->SelectedIndex = 0;

			u_label->Enabled = false;
			u_textBox->Enabled = false;
			u_comboBox->Hide();

			v_label->Enabled = true;
			v_textBox->Enabled = true;
			v_comboBox->Show(); v_comboBox->SelectedIndex = 0;

			t_label->Enabled = true;
			t_textBox->Enabled = true;
			t_comboBox->Show(); t_comboBox->SelectedIndex = 0;
		}
		else if (comboBox1->SelectedItem == "v (Final Velocity)") {
			s_label->Enabled = true;
			s_textBox->Enabled = true;
			s_comboBox->Show(); s_comboBox->SelectedIndex = 0;

			u_label->Enabled = true;
			u_textBox->Enabled = true;
			u_comboBox->Show(); u_comboBox->SelectedIndex = 0;

			v_label->Enabled = false;
			v_textBox->Enabled = false;
			v_comboBox->Hide();

			t_label->Enabled = true;
			t_textBox->Enabled = true;
			t_comboBox->Show(); t_comboBox->SelectedIndex = 0;
		}
		else if (comboBox1->SelectedItem == "t (Time)") {
			s_label->Enabled = true;
			s_textBox->Enabled = true;
			s_comboBox->Show(); s_comboBox->SelectedIndex = 0;

			u_label->Enabled = true;
			u_textBox->Enabled = true;
			u_comboBox->Show(); u_comboBox->SelectedIndex = 0;

			v_label->Enabled = true;
			v_textBox->Enabled = true;
			v_comboBox->Show(); v_comboBox->SelectedIndex = 0;

			t_label->Enabled = false;
			t_textBox->Enabled = false;
			t_comboBox->Hide();
		}
	}

	//เคลียร์ช่อง
	void clear_textbox() {
		s_textBox->Clear();
		u_textBox->Clear();
		v_textBox->Clear();
		t_textBox->Clear();
		ans_label->Visible = 0;
	}

	//รีเทิร์นออกมาเป็นตัวแปรที่ต้องการหา
	char findwhat() {
		if (s_textBox->Enabled == 0) return 's';
		else if (u_textBox->Enabled == 0) return 'u';
		else if (v_textBox->Enabled == 0) return 'v';
		else return 't';
	}

	//เช็คว่ามีช่องว่างอยู่มั้ย
	bool checkblank(char find) {
		if (find == 's') {
			if (u_textBox->Text == "" || v_textBox->Text == "" || t_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else if (find == 'u') {
			if (v_textBox->Text == "" || s_textBox->Text == "" || t_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else if (find == 'v') {
			if (s_textBox->Text == "" || u_textBox->Text == "" || t_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else {
			if (v_textBox->Text == "" || u_textBox->Text == "" || s_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
	}

	//คำนวณ
	void cal(char find) {
		if (find == 's') {
			u = System::Convert::ToDouble(u_textBox->Text); if (u_comboBox->SelectedItem == "km/h") u *= (1000.0000 / 3600.0000);
			v = System::Convert::ToDouble(v_textBox->Text); if (v_comboBox->SelectedItem == "km/h") v *= (1000.0000 / 3600.0000);
			t = System::Convert::ToDouble(t_textBox->Text); if (t_comboBox->SelectedItem == "min") t *= 60;
															else if (t_comboBox->SelectedItem == "h") t *= 3600;
			ans = ((u + v)/2) * t;
		}
		else if (find == 'u') {
			s = System::Convert::ToDouble(s_textBox->Text); if (s_comboBox->SelectedItem == "km") s *= 1000.0000;
			v = System::Convert::ToDouble(v_textBox->Text); if (v_comboBox->SelectedItem == "km/h") v *= (1000.0000 / 3600.0000);
			t = System::Convert::ToDouble(t_textBox->Text);	if (t_comboBox->SelectedItem == "min") t *= 60;
															else if (t_comboBox->SelectedItem == "h") t *= 3600;
			ans = (2 * s / t) - v;
		}
		else if (find == 'v') {
			s = System::Convert::ToDouble(s_textBox->Text); if (s_comboBox->SelectedItem == "km") s *= 1000.0000;
			u = System::Convert::ToDouble(u_textBox->Text); if (u_comboBox->SelectedItem == "km/h") u *= (1000.0000 / 3600.0000);
			t = System::Convert::ToDouble(t_textBox->Text); if (t_comboBox->SelectedItem == "min") t *= 60;
															else if (t_comboBox->SelectedItem == "h") t *= 3600;
			ans = (2 * s / t) - u;
		}
		else {
			s = System::Convert::ToDouble(s_textBox->Text); if (s_comboBox->SelectedItem == "km") s *= 1000.0000;
			u = System::Convert::ToDouble(u_textBox->Text); if (u_comboBox->SelectedItem == "km/h") u *= (1000.0000 / 3600.0000);
			v = System::Convert::ToDouble(v_textBox->Text); if (v_comboBox->SelectedItem == "km/h") v *= (1000.0000 / 3600.0000);
			ans = (2*s)/(u+v);
		}
	}

	//เซ็ตช่องเลือกหน่วยของคำตอบ
	void set_ans_combobox(char find) {
		if (find == 's') {
			ans_combo->Items->Add("m");
			ans_combo->Items->Add("km");
		}
		else if (find == 'u') {
			ans_combo->Items->Add("m/s");
			ans_combo->Items->Add("km/h");
		}
		else if (find == 'v') {
			ans_combo->Items->Add("m/s");
			ans_combo->Items->Add("km/h");
		}
		else {
			ans_combo->Items->Add("s");
			ans_combo->Items->Add("min");
			ans_combo->Items->Add("h");
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

		s_label->Enabled = 0;
		s_textBox->Enabled = 0;
		s_comboBox->Hide();

		u_label->Enabled = 0;
		u_textBox->Enabled = 0;
		u_comboBox->Hide();

		v_label->Enabled = 0;
		v_textBox->Enabled = 0;
		v_comboBox->Hide();

		t_label->Enabled = 0;
		t_textBox->Enabled = 0;
		t_comboBox->Hide();

		comboBox1->Items->Clear();
		comboBox1->Items->Add("s (Displacement)");
		comboBox1->Items->Add("u (Initial Velocity)");
		comboBox1->Items->Add("v (Final Velocity)");
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
		if (find == 's') {
			set_ans_combobox('s');
			ans_combo->SelectedIndex = 0;
		}
		else if (find == 'u') {
			set_ans_combobox('u');
			ans_combo->SelectedIndex = 0;
		}
		else if (find == 'v') {
			set_ans_combobox('v');
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
	if (findwhat() == 's') {
		ans_label2->Text = "s = ";
	}
	else if (findwhat() == 'u') {
		ans_label2->Text = "u = ";
	}
	else if (findwhat() == 'v') {
		ans_label2->Text = "v = ";
	}
	else {
		ans_label2->Text = "t = ";
	}
}
};
}
