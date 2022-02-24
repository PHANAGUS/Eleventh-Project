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
	/// Summary for CH1_E4
	/// </summary>
	public ref class CH1_E4 : public System::Windows::Forms::Form
	{
	public:
		CH1_E4(void)
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
		~CH1_E4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ a_comboBox;
	protected:
	private: System::Windows::Forms::TextBox^ a_textBox;
	private: System::Windows::Forms::Label^ a_label;
	private: System::Windows::Forms::Button^ convert_button;
	private: System::Windows::Forms::Button^ reset_button;
	private: System::Windows::Forms::ComboBox^ t_comboBox;
	private: System::Windows::Forms::ComboBox^ s_comboBox;

	private: System::Windows::Forms::ComboBox^ ans_combo;
	private: System::Windows::Forms::TextBox^ t_textBox;
	private: System::Windows::Forms::TextBox^ s_textBox;

	private: System::Windows::Forms::Label^ t_label;
	private: System::Windows::Forms::Label^ s_label;

	private: System::Windows::Forms::Label^ ans_label2;
	private: System::Windows::Forms::Label^ ans_label;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ cal_button;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ Find_label;
	private: System::Windows::Forms::ComboBox^ v_comboBox;
	private: System::Windows::Forms::TextBox^ v_textBox;
	private: System::Windows::Forms::Label^ v_label;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ ans2_label;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CH1_E4::typeid));
			this->a_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->a_textBox = (gcnew System::Windows::Forms::TextBox());
			this->a_label = (gcnew System::Windows::Forms::Label());
			this->convert_button = (gcnew System::Windows::Forms::Button());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->t_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->s_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ans_combo = (gcnew System::Windows::Forms::ComboBox());
			this->t_textBox = (gcnew System::Windows::Forms::TextBox());
			this->s_textBox = (gcnew System::Windows::Forms::TextBox());
			this->t_label = (gcnew System::Windows::Forms::Label());
			this->s_label = (gcnew System::Windows::Forms::Label());
			this->ans_label2 = (gcnew System::Windows::Forms::Label());
			this->ans_label = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cal_button = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Find_label = (gcnew System::Windows::Forms::Label());
			this->v_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->v_textBox = (gcnew System::Windows::Forms::TextBox());
			this->v_label = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ans2_label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// a_comboBox
			// 
			this->a_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->a_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->a_comboBox->FormattingEnabled = true;
			this->a_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"m/s^2" });
			this->a_comboBox->Location = System::Drawing::Point(307, 444);
			this->a_comboBox->Name = L"a_comboBox";
			this->a_comboBox->Size = System::Drawing::Size(94, 48);
			this->a_comboBox->TabIndex = 85;
			this->a_comboBox->Visible = false;
			// 
			// a_textBox
			// 
			this->a_textBox->Enabled = false;
			this->a_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->a_textBox->Location = System::Drawing::Point(128, 444);
			this->a_textBox->Name = L"a_textBox";
			this->a_textBox->Size = System::Drawing::Size(178, 48);
			this->a_textBox->TabIndex = 84;
			this->a_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// a_label
			// 
			this->a_label->AutoSize = true;
			this->a_label->BackColor = System::Drawing::Color::Transparent;
			this->a_label->Enabled = false;
			this->a_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->a_label->Location = System::Drawing::Point(76, 447);
			this->a_label->Name = L"a_label";
			this->a_label->Size = System::Drawing::Size(46, 40);
			this->a_label->TabIndex = 83;
			this->a_label->Text = L"a =";
			this->a_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// convert_button
			// 
			this->convert_button->Enabled = false;
			this->convert_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convert_button->Location = System::Drawing::Point(699, 502);
			this->convert_button->Name = L"convert_button";
			this->convert_button->Size = System::Drawing::Size(89, 48);
			this->convert_button->TabIndex = 82;
			this->convert_button->Text = L"CONVERT";
			this->convert_button->UseVisualStyleBackColor = true;
			this->convert_button->Click += gcnew System::EventHandler(this, &CH1_E4::convert_button_Click);
			// 
			// reset_button
			// 
			this->reset_button->BackColor = System::Drawing::Color::OrangeRed;
			this->reset_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset_button->ForeColor = System::Drawing::Color::White;
			this->reset_button->Location = System::Drawing::Point(711, 257);
			this->reset_button->Name = L"reset_button";
			this->reset_button->Size = System::Drawing::Size(77, 45);
			this->reset_button->TabIndex = 81;
			this->reset_button->Text = L"RESET";
			this->reset_button->UseVisualStyleBackColor = false;
			this->reset_button->Click += gcnew System::EventHandler(this, &CH1_E4::reset_button_Click);
			// 
			// t_comboBox
			// 
			this->t_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->t_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->t_comboBox->FormattingEnabled = true;
			this->t_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"s", L"min", L"h" });
			this->t_comboBox->Location = System::Drawing::Point(307, 502);
			this->t_comboBox->Name = L"t_comboBox";
			this->t_comboBox->Size = System::Drawing::Size(94, 48);
			this->t_comboBox->TabIndex = 80;
			this->t_comboBox->Visible = false;
			// 
			// s_comboBox
			// 
			this->s_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->s_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->s_comboBox->FormattingEnabled = true;
			this->s_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"m", L"km" });
			this->s_comboBox->Location = System::Drawing::Point(307, 328);
			this->s_comboBox->Name = L"s_comboBox";
			this->s_comboBox->Size = System::Drawing::Size(94, 48);
			this->s_comboBox->TabIndex = 79;
			this->s_comboBox->Visible = false;
			// 
			// ans_combo
			// 
			this->ans_combo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ans_combo->Enabled = false;
			this->ans_combo->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->ans_combo->FormattingEnabled = true;
			this->ans_combo->Location = System::Drawing::Point(599, 502);
			this->ans_combo->Name = L"ans_combo";
			this->ans_combo->Size = System::Drawing::Size(94, 48);
			this->ans_combo->TabIndex = 77;
			this->ans_combo->SelectedIndexChanged += gcnew System::EventHandler(this, &CH1_E4::ans_combo_SelectedIndexChanged);
			// 
			// t_textBox
			// 
			this->t_textBox->Enabled = false;
			this->t_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_textBox->Location = System::Drawing::Point(128, 502);
			this->t_textBox->Name = L"t_textBox";
			this->t_textBox->Size = System::Drawing::Size(178, 48);
			this->t_textBox->TabIndex = 76;
			this->t_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// s_textBox
			// 
			this->s_textBox->Enabled = false;
			this->s_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->s_textBox->Location = System::Drawing::Point(128, 328);
			this->s_textBox->Name = L"s_textBox";
			this->s_textBox->Size = System::Drawing::Size(178, 48);
			this->s_textBox->TabIndex = 75;
			this->s_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// t_label
			// 
			this->t_label->AutoSize = true;
			this->t_label->BackColor = System::Drawing::Color::Transparent;
			this->t_label->Enabled = false;
			this->t_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t_label->Location = System::Drawing::Point(77, 505);
			this->t_label->Name = L"t_label";
			this->t_label->Size = System::Drawing::Size(40, 40);
			this->t_label->TabIndex = 73;
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
			this->s_label->Location = System::Drawing::Point(80, 331);
			this->s_label->Name = L"s_label";
			this->s_label->Size = System::Drawing::Size(45, 40);
			this->s_label->TabIndex = 72;
			this->s_label->Text = L"s =";
			this->s_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ans_label2
			// 
			this->ans_label2->AutoSize = true;
			this->ans_label2->BackColor = System::Drawing::Color::Transparent;
			this->ans_label2->Font = (gcnew System::Drawing::Font(L"FC Lamoon", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ans_label2->Location = System::Drawing::Point(89, 576);
			this->ans_label2->Name = L"ans_label2";
			this->ans_label2->Size = System::Drawing::Size(56, 38);
			this->ans_label2->TabIndex = 70;
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
			this->ans_label->Location = System::Drawing::Point(140, 577);
			this->ans_label->Name = L"ans_label";
			this->ans_label->Size = System::Drawing::Size(35, 38);
			this->ans_label->TabIndex = 69;
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
			this->label3->Location = System::Drawing::Point(545, 507);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 37);
			this->label3->TabIndex = 68;
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
			this->label2->Location = System::Drawing::Point(19, 581);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 37);
			this->label2->TabIndex = 67;
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
			this->label1->Location = System::Drawing::Point(97, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 37);
			this->label1->TabIndex = 66;
			this->label1->Text = L"Please Select What to Find.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cal_button
			// 
			this->cal_button->BackColor = System::Drawing::Color::SandyBrown;
			this->cal_button->Enabled = false;
			this->cal_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cal_button->ForeColor = System::Drawing::Color::White;
			this->cal_button->Location = System::Drawing::Point(340, 257);
			this->cal_button->Name = L"cal_button";
			this->cal_button->Size = System::Drawing::Size(62, 45);
			this->cal_button->TabIndex = 65;
			this->cal_button->Text = L"CAL";
			this->cal_button->UseVisualStyleBackColor = false;
			this->cal_button->Click += gcnew System::EventHandler(this, &CH1_E4::cal_button_Click);
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
				L"s (Displacement)", L"v (Final Velocity)", L"a (Acceleration)",
					L"t (Time)"
			});
			this->comboBox1->Location = System::Drawing::Point(87, 257);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(247, 45);
			this->comboBox1->TabIndex = 64;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CH1_E4::comboBox1_SelectedIndexChanged_1);
			// 
			// Find_label
			// 
			this->Find_label->AutoSize = true;
			this->Find_label->BackColor = System::Drawing::Color::Transparent;
			this->Find_label->Font = (gcnew System::Drawing::Font(L"Bangna New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Find_label->Location = System::Drawing::Point(19, 262);
			this->Find_label->Name = L"Find_label";
			this->Find_label->Size = System::Drawing::Size(73, 37);
			this->Find_label->TabIndex = 63;
			this->Find_label->Text = L"Find :";
			this->Find_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// v_comboBox
			// 
			this->v_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->v_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->v_comboBox->FormattingEnabled = true;
			this->v_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"m/s", L"km/h" });
			this->v_comboBox->Location = System::Drawing::Point(307, 386);
			this->v_comboBox->Name = L"v_comboBox";
			this->v_comboBox->Size = System::Drawing::Size(94, 48);
			this->v_comboBox->TabIndex = 88;
			this->v_comboBox->Visible = false;
			// 
			// v_textBox
			// 
			this->v_textBox->Enabled = false;
			this->v_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->v_textBox->Location = System::Drawing::Point(128, 386);
			this->v_textBox->Name = L"v_textBox";
			this->v_textBox->Size = System::Drawing::Size(178, 48);
			this->v_textBox->TabIndex = 87;
			this->v_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// v_label
			// 
			this->v_label->AutoSize = true;
			this->v_label->BackColor = System::Drawing::Color::Transparent;
			this->v_label->Enabled = false;
			this->v_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->v_label->Location = System::Drawing::Point(80, 389);
			this->v_label->Name = L"v_label";
			this->v_label->Size = System::Drawing::Size(45, 40);
			this->v_label->TabIndex = 86;
			this->v_label->Text = L"v =";
			this->v_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(426, 581);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 37);
			this->label4->TabIndex = 67;
			this->label4->Text = L"and";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Visible = false;
			// 
			// ans2_label
			// 
			this->ans2_label->AutoSize = true;
			this->ans2_label->BackColor = System::Drawing::Color::Transparent;
			this->ans2_label->Font = (gcnew System::Drawing::Font(L"FC Lamoon", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans2_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ans2_label->Location = System::Drawing::Point(470, 576);
			this->ans2_label->Name = L"ans2_label";
			this->ans2_label->Size = System::Drawing::Size(35, 38);
			this->ans2_label->TabIndex = 69;
			this->ans2_label->Text = L"0";
			this->ans2_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ans2_label->Visible = false;
			// 
			// CH1_E4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(804, 636);
			this->Controls->Add(this->v_comboBox);
			this->Controls->Add(this->v_textBox);
			this->Controls->Add(this->v_label);
			this->Controls->Add(this->a_comboBox);
			this->Controls->Add(this->a_textBox);
			this->Controls->Add(this->a_label);
			this->Controls->Add(this->convert_button);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->t_comboBox);
			this->Controls->Add(this->s_comboBox);
			this->Controls->Add(this->ans_combo);
			this->Controls->Add(this->t_textBox);
			this->Controls->Add(this->s_textBox);
			this->Controls->Add(this->t_label);
			this->Controls->Add(this->s_label);
			this->Controls->Add(this->ans_label2);
			this->Controls->Add(this->ans2_label);
			this->Controls->Add(this->ans_label);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cal_button);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Find_label);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(820, 675);
			this->MinimumSize = System::Drawing::Size(820, 675);
			this->Name = L"CH1_E4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CH1_E4";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//==========================================[เขียนฟังก์ชัน]==============================================//

public:
	double s, v, a, t, ans, ans2;
	String^ unit;

	//ตั้งค่าหน้าต่าง
	void set_window() {
		label1->Visible = 0;
		label4->Hide();
		ans2_label->Hide();

		s_comboBox->Show();
		v_comboBox->Show();
		a_comboBox->Show();
		t_comboBox->Show();

		if (comboBox1->SelectedItem == "s (Displacement)") {
			s_label->Enabled = false;
			s_textBox->Enabled = false;
			s_comboBox->Hide();

			v_label->Enabled = true;
			v_textBox->Enabled = true;
			v_comboBox->Show();	v_comboBox->SelectedIndex = 0;

			a_label->Enabled = true;
			a_textBox->Enabled = true;
			a_comboBox->Show(); a_comboBox->SelectedIndex = 0;

			t_label->Enabled = true;
			t_textBox->Enabled = true;
			t_comboBox->Show(); t_comboBox->SelectedIndex = 0;
		}
		else if (comboBox1->SelectedItem == "v (Final Velocity)") {
			s_label->Enabled = true;
			s_textBox->Enabled = true;
			s_comboBox->Show(); s_comboBox->SelectedIndex = 0;

			v_label->Enabled = false;
			v_textBox->Enabled = false;
			v_comboBox->Hide();

			a_label->Enabled = true;
			a_textBox->Enabled = true;
			a_comboBox->Show(); a_comboBox->SelectedIndex = 0;

			t_label->Enabled = true;
			t_textBox->Enabled = true;
			t_comboBox->Show(); t_comboBox->SelectedIndex = 0;
		}
		else if (comboBox1->SelectedItem == "a (Acceleration)") {
			s_label->Enabled = true;
			s_textBox->Enabled = true;
			s_comboBox->Show(); s_comboBox->SelectedIndex = 0;

			v_label->Enabled = true;
			v_textBox->Enabled = true;
			v_comboBox->Show(); v_comboBox->SelectedIndex = 0;

			a_label->Enabled = false;
			a_textBox->Enabled = false;
			a_comboBox->Hide();

			t_label->Enabled = true;
			t_textBox->Enabled = true;
			t_comboBox->Show(); t_comboBox->SelectedIndex = 0;
		}
		else if (comboBox1->SelectedItem == "t (Time)") {
			s_label->Enabled = true;
			s_textBox->Enabled = true;
			s_comboBox->Show(); s_comboBox->SelectedIndex = 0;

			v_label->Enabled = true;
			v_textBox->Enabled = true;
			v_comboBox->Show(); v_comboBox->SelectedIndex = 0;

			a_label->Enabled = true;
			a_textBox->Enabled = true;
			a_comboBox->Show(); a_comboBox->SelectedIndex = 0;

			t_label->Enabled = false;
			t_textBox->Enabled = false;
			t_comboBox->Hide();
		}
	}

	//เคลียร์ช่อง
	void clear_textbox() {
		s_textBox->Clear();
		v_textBox->Clear();
		a_textBox->Clear();
		t_textBox->Clear();
		ans_label->Visible = 0;
	}

	//รีเทิร์นออกมาเป็นตัวแปรที่ต้องการหา
	char findwhat() {
		if (s_textBox->Enabled == 0) return 's';
		else if (v_textBox->Enabled == 0) return 'v';
		else if (a_textBox->Enabled == 0) return 'a';
		else return 't';
	}

	//เช็คว่ามีช่องว่างอยู่มั้ย
	bool checkblank(char find) {
		if (find == 's') {
			if (v_textBox->Text == "" || a_textBox->Text == "" || t_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else if (find == 'v') {
			if (s_textBox->Text == "" || a_textBox->Text == "" || t_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else if (find == 'a') {
			if (s_textBox->Text == "" || v_textBox->Text == "" || t_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else {
			if (s_textBox->Text == "" || v_textBox->Text == "" || a_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
	}

	//คำนวณ
	void cal(char find) {
		if (find == 's') {
			v = System::Convert::ToDouble(v_textBox->Text); if (v_comboBox->SelectedItem == "km/h") v *= (1000.0000 / 3600.0000);
			a = System::Convert::ToDouble(a_textBox->Text);
			t = System::Convert::ToDouble(t_textBox->Text); if (t_comboBox->SelectedItem == "min") t *= 60;
															else if (t_comboBox->SelectedItem == "h") t *= 3600;
			ans = (v*t)-((a*t*t)/2);
		}
		else if (find == 'v') {
			s = System::Convert::ToDouble(s_textBox->Text); if (s_comboBox->SelectedItem == "km") s *= 1000.0000;
			a = System::Convert::ToDouble(a_textBox->Text);
			t = System::Convert::ToDouble(t_textBox->Text);	if (t_comboBox->SelectedItem == "min") t *= 60;
															else if (t_comboBox->SelectedItem == "h") t *= 3600;
			ans = (s-(a*t*t)/2)/t;
		}
		else if (find == 'a') {
			s = System::Convert::ToDouble(s_textBox->Text); if (s_comboBox->SelectedItem == "km") s *= 1000.0000;
			v = System::Convert::ToDouble(v_textBox->Text); if (v_comboBox->SelectedItem == "km/h") v *= (1000.0000 / 3600.0000);
			t = System::Convert::ToDouble(t_textBox->Text); if (t_comboBox->SelectedItem == "min") t *= 60;
															else if (t_comboBox->SelectedItem == "h") t *= 3600;
			ans = (-2)*(s-(v*t))/pow(t,2);
		}
		else {//หา t
			s = System::Convert::ToDouble(s_textBox->Text); if (s_comboBox->SelectedItem == "km") s *= 1000.0000;
			v = System::Convert::ToDouble(v_textBox->Text); if (v_comboBox->SelectedItem == "km/h") v *= (1000.0000 / 3600.0000);
			a = System::Convert::ToDouble(a_textBox->Text);
			if (v * v - 2 * a * s < 0) {
				ans_label2->Text = "Error";
			}
			else {
				ans = ((v) + sqrt(v * v - 2 * a * s)) / a;
				ans2 = ((v) - sqrt(v * v - 2 * a * s)) / a;
			}
		}
	}

	//เซ็ตช่องเลือกหน่วยของคำตอบ
	void set_ans_combobox(char find) {
		if (find == 's') {
			ans_combo->Items->Add("m");
			ans_combo->Items->Add("km");
		}
		else if (find == 'v') {
			ans_combo->Items->Add("m/s");
			ans_combo->Items->Add("km/h");
		}
		else if (find == 'a') {
			ans_combo->Items->Add("m/s^2");
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
				ans2 /= 60;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "h") {
				ans /= 3600;
				ans2 /= 3600;
			}
		}
		else if (unit == "min") {
			if (Convert::ToString(ans_combo->SelectedItem) == "s") {
				ans *= 60;
				ans2 *= 60;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "h") {
				ans /= 60;
				ans2 /= 60;
			}
		}
		else if (unit == "h") {
			if (Convert::ToString(ans_combo->SelectedItem) == "s") {
				ans *= 3600;
				ans2 *= 3600;
			}
			else if (Convert::ToString(ans_combo->SelectedItem) == "min") {
				ans *= 60;
				ans2 *= 60;
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
		label4->Hide();
		ans2_label->Hide();

		s_label->Enabled = 0;
		s_textBox->Enabled = 0;
		s_comboBox->Hide();

		v_label->Enabled = 0;
		v_textBox->Enabled = 0;
		v_comboBox->Hide();

		a_label->Enabled = 0;
		a_textBox->Enabled = 0;
		a_comboBox->Hide();

		t_label->Enabled = 0;
		t_textBox->Enabled = 0;
		t_comboBox->Hide();

		comboBox1->Items->Clear();
		comboBox1->Items->Add("s (Displacement)");
		comboBox1->Items->Add("v (Final Velocity)");
		comboBox1->Items->Add("a (Acceleration)");
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
		if (ans_label2->Text != "Error") {
			if (find == 's') {
				set_ans_combobox('s');
				ans_combo->SelectedIndex = 0;
			}
			else if (find == 'v') {
				set_ans_combobox('v');
				ans_combo->SelectedIndex = 0;
			}
			else if (find == 'a') {
				set_ans_combobox('a');
				ans_combo->SelectedIndex = 0;
			}
			else {
				set_ans_combobox('t');
				ans_combo->SelectedIndex = 0;
			}

			if (find == 't') {
				label4->Visible = 1;
				ans2_label->Text = System::Convert::ToString(ans2);
				ans2_label->Visible = 1;
			}
			ans_label->Text = System::Convert::ToString(ans);
			unit = System::Convert::ToString(ans_combo->SelectedItem);
			ans_label->Visible = 1;
			ans_label2->Visible = 1;
			ans_combo->Enabled = 1;
			ans_combo->Visible = 1;
		}
		ans_label2->Visible = 1;
		label1->Hide();
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
	else if (findwhat() == 'v') {
		ans_label2->Text = "v = ";
	}
	else if (findwhat() == 'a') {
		ans_label2->Text = "a = ";
	}
	else {
		ans_label2->Text = "t = ";
	}
}
	};
}
