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
	/// Summary for CH5_E5
	/// </summary>
	public ref class CH5_E5 : public System::Windows::Forms::Form
	{
	public:
		CH5_E5(void)
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
		~CH5_E5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ E_textBox;
	protected:
	private: System::Windows::Forms::Label^ E_label;
	private: System::Windows::Forms::Button^ convert_button;
	private: System::Windows::Forms::Button^ reset_button;
	private: System::Windows::Forms::ComboBox^ m_comboBox;
	private: System::Windows::Forms::ComboBox^ E_comboBox;
	private: System::Windows::Forms::ComboBox^ g_comboBox;

	private: System::Windows::Forms::ComboBox^ ans_combo;

	private: System::Windows::Forms::TextBox^ m_textBox;
	private: System::Windows::Forms::Label^ g_label;

	private: System::Windows::Forms::Label^ m_label;
	private: System::Windows::Forms::Label^ ans_label2;
	private: System::Windows::Forms::Label^ ans_label;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ cal_button;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ Find_label;
	private: System::Windows::Forms::Label^ h_label;

	private: System::Windows::Forms::TextBox^ h_textBox;
	private: System::Windows::Forms::ComboBox^ h_comboBox;


	private: System::Windows::Forms::Label^ g_u_label;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CH5_E5::typeid));
			this->E_textBox = (gcnew System::Windows::Forms::TextBox());
			this->E_label = (gcnew System::Windows::Forms::Label());
			this->convert_button = (gcnew System::Windows::Forms::Button());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->m_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->E_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->g_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ans_combo = (gcnew System::Windows::Forms::ComboBox());
			this->m_textBox = (gcnew System::Windows::Forms::TextBox());
			this->g_label = (gcnew System::Windows::Forms::Label());
			this->m_label = (gcnew System::Windows::Forms::Label());
			this->ans_label2 = (gcnew System::Windows::Forms::Label());
			this->ans_label = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cal_button = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Find_label = (gcnew System::Windows::Forms::Label());
			this->h_label = (gcnew System::Windows::Forms::Label());
			this->h_textBox = (gcnew System::Windows::Forms::TextBox());
			this->h_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->g_u_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// E_textBox
			// 
			this->E_textBox->Enabled = false;
			this->E_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->E_textBox->Location = System::Drawing::Point(132, 326);
			this->E_textBox->Name = L"E_textBox";
			this->E_textBox->Size = System::Drawing::Size(178, 48);
			this->E_textBox->TabIndex = 210;
			this->E_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// E_label
			// 
			this->E_label->AutoSize = true;
			this->E_label->BackColor = System::Drawing::Color::Transparent;
			this->E_label->Enabled = false;
			this->E_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->E_label->Location = System::Drawing::Point(60, 330);
			this->E_label->Name = L"E_label";
			this->E_label->Size = System::Drawing::Size(71, 40);
			this->E_label->TabIndex = 209;
			this->E_label->Text = L"E[p] =";
			this->E_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// convert_button
			// 
			this->convert_button->Enabled = false;
			this->convert_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convert_button->Location = System::Drawing::Point(703, 578);
			this->convert_button->Name = L"convert_button";
			this->convert_button->Size = System::Drawing::Size(89, 48);
			this->convert_button->TabIndex = 208;
			this->convert_button->Text = L"CONVERT";
			this->convert_button->UseVisualStyleBackColor = true;
			this->convert_button->Click += gcnew System::EventHandler(this, &CH5_E5::convert_button_Click);
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
			this->reset_button->TabIndex = 207;
			this->reset_button->Text = L"RESET";
			this->reset_button->UseVisualStyleBackColor = false;
			this->reset_button->Click += gcnew System::EventHandler(this, &CH5_E5::reset_button_Click);
			// 
			// m_comboBox
			// 
			this->m_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->m_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->m_comboBox->FormattingEnabled = true;
			this->m_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"kg", L"g" });
			this->m_comboBox->Location = System::Drawing::Point(311, 386);
			this->m_comboBox->Name = L"m_comboBox";
			this->m_comboBox->Size = System::Drawing::Size(94, 48);
			this->m_comboBox->TabIndex = 206;
			this->m_comboBox->Visible = false;
			// 
			// E_comboBox
			// 
			this->E_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->E_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->E_comboBox->FormattingEnabled = true;
			this->E_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"J", L"kJ" });
			this->E_comboBox->Location = System::Drawing::Point(311, 326);
			this->E_comboBox->Name = L"E_comboBox";
			this->E_comboBox->Size = System::Drawing::Size(94, 48);
			this->E_comboBox->TabIndex = 205;
			this->E_comboBox->Visible = false;
			// 
			// g_comboBox
			// 
			this->g_comboBox->Enabled = false;
			this->g_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->g_comboBox->FormattingEnabled = true;
			this->g_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"9.8", L"9.81", L"10" });
			this->g_comboBox->Location = System::Drawing::Point(132, 447);
			this->g_comboBox->Name = L"g_comboBox";
			this->g_comboBox->Size = System::Drawing::Size(178, 48);
			this->g_comboBox->TabIndex = 204;
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
			this->ans_combo->TabIndex = 203;
			this->ans_combo->SelectedIndexChanged += gcnew System::EventHandler(this, &CH5_E5::ans_combo_SelectedIndexChanged);
			// 
			// m_textBox
			// 
			this->m_textBox->Enabled = false;
			this->m_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_textBox->Location = System::Drawing::Point(132, 386);
			this->m_textBox->Name = L"m_textBox";
			this->m_textBox->Size = System::Drawing::Size(178, 48);
			this->m_textBox->TabIndex = 201;
			this->m_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// g_label
			// 
			this->g_label->AutoSize = true;
			this->g_label->BackColor = System::Drawing::Color::Transparent;
			this->g_label->Enabled = false;
			this->g_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->g_label->Location = System::Drawing::Point(84, 451);
			this->g_label->Name = L"g_label";
			this->g_label->Size = System::Drawing::Size(47, 40);
			this->g_label->TabIndex = 200;
			this->g_label->Text = L"g =";
			this->g_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// m_label
			// 
			this->m_label->AutoSize = true;
			this->m_label->BackColor = System::Drawing::Color::Transparent;
			this->m_label->Enabled = false;
			this->m_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_label->Location = System::Drawing::Point(78, 390);
			this->m_label->Name = L"m_label";
			this->m_label->Size = System::Drawing::Size(51, 40);
			this->m_label->TabIndex = 199;
			this->m_label->Text = L"m =";
			this->m_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
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
			this->ans_label2->Size = System::Drawing::Size(91, 38);
			this->ans_label2->TabIndex = 198;
			this->ans_label2->Text = L"E[h] =";
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
			this->ans_label->Location = System::Drawing::Point(177, 579);
			this->ans_label->Name = L"ans_label";
			this->ans_label->Size = System::Drawing::Size(35, 38);
			this->ans_label->TabIndex = 197;
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
			this->label3->TabIndex = 196;
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
			this->label2->TabIndex = 195;
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
			this->label1->TabIndex = 194;
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
			this->cal_button->TabIndex = 193;
			this->cal_button->Text = L"CAL";
			this->cal_button->UseVisualStyleBackColor = false;
			this->cal_button->Click += gcnew System::EventHandler(this, &CH5_E5::cal_button_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->ItemHeight = 37;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"E[h] (Potential Energy)", L"m (Mass)", L"h (Height)" });
			this->comboBox1->Location = System::Drawing::Point(91, 259);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(247, 45);
			this->comboBox1->TabIndex = 192;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CH5_E5::comboBox1_SelectedIndexChanged_1);
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
			this->Find_label->TabIndex = 191;
			this->Find_label->Text = L"Find :";
			this->Find_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// h_label
			// 
			this->h_label->AutoSize = true;
			this->h_label->BackColor = System::Drawing::Color::Transparent;
			this->h_label->Enabled = false;
			this->h_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->h_label->Location = System::Drawing::Point(84, 511);
			this->h_label->Name = L"h_label";
			this->h_label->Size = System::Drawing::Size(46, 40);
			this->h_label->TabIndex = 200;
			this->h_label->Text = L"h =";
			this->h_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// h_textBox
			// 
			this->h_textBox->Enabled = false;
			this->h_textBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->h_textBox->Location = System::Drawing::Point(132, 507);
			this->h_textBox->Name = L"h_textBox";
			this->h_textBox->Size = System::Drawing::Size(178, 48);
			this->h_textBox->TabIndex = 202;
			this->h_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// h_comboBox
			// 
			this->h_comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->h_comboBox->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F));
			this->h_comboBox->FormattingEnabled = true;
			this->h_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"m", L"km" });
			this->h_comboBox->Location = System::Drawing::Point(311, 507);
			this->h_comboBox->Name = L"h_comboBox";
			this->h_comboBox->Size = System::Drawing::Size(94, 48);
			this->h_comboBox->TabIndex = 204;
			this->h_comboBox->Visible = false;
			// 
			// g_u_label
			// 
			this->g_u_label->AutoSize = true;
			this->g_u_label->BackColor = System::Drawing::Color::Transparent;
			this->g_u_label->Enabled = false;
			this->g_u_label->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->g_u_label->Location = System::Drawing::Point(313, 451);
			this->g_u_label->Name = L"g_u_label";
			this->g_u_label->Size = System::Drawing::Size(72, 40);
			this->g_u_label->TabIndex = 200;
			this->g_u_label->Text = L"m/s^2";
			this->g_u_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(170, 77);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(468, 76);
			this->pictureBox1->TabIndex = 211;
			this->pictureBox1->TabStop = false;
			// 
			// CH5_E5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(804, 636);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->E_textBox);
			this->Controls->Add(this->E_label);
			this->Controls->Add(this->convert_button);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->m_comboBox);
			this->Controls->Add(this->E_comboBox);
			this->Controls->Add(this->h_comboBox);
			this->Controls->Add(this->g_comboBox);
			this->Controls->Add(this->ans_combo);
			this->Controls->Add(this->h_textBox);
			this->Controls->Add(this->h_label);
			this->Controls->Add(this->m_textBox);
			this->Controls->Add(this->g_u_label);
			this->Controls->Add(this->g_label);
			this->Controls->Add(this->m_label);
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
			this->Name = L"CH5_E5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CH5_E5";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//==========================================[เขียนฟังก์ชัน]==============================================//

public:
	double E, m, g, h, ans;
	String^ unit;

	//ตั้งค่าหน้าต่าง
	void set_window() {
		label1->Visible = 0;

		E_comboBox->Show();
		m_comboBox->Show();
		h_comboBox->Show();

		if (comboBox1->SelectedItem == "E[h] (Potential Energy)") {
			E_label->Enabled = 0;
			E_textBox->Enabled = 0;
			E_comboBox->Hide();

			m_label->Enabled = 1;
			m_textBox->Enabled = 1;
			m_comboBox->Show(); m_comboBox->SelectedIndex = 0;

			g_label->Enabled = 1;
			g_u_label->Enabled = 1;
			g_comboBox->Enabled = 1;

			h_label->Enabled = 1;
			h_textBox->Enabled = 1;
			h_comboBox->Show(); h_comboBox->SelectedIndex = 0;
		}
		else if (comboBox1->SelectedItem == "m (Mass)") {
			E_label->Enabled = 1;
			E_textBox->Enabled = 1;
			E_comboBox->Show(); E_comboBox->SelectedIndex = 0;

			m_label->Enabled = 0;
			m_textBox->Enabled = 0;
			m_comboBox->Hide();

			g_label->Enabled = 1;
			g_u_label->Enabled = 1;
			g_comboBox->Enabled = 1;

			h_label->Enabled = 1;
			h_textBox->Enabled = 1;
			h_comboBox->Show(); h_comboBox->SelectedIndex = 0;
		}
		else if (comboBox1->SelectedItem == "h (Height)") {
			E_label->Enabled = 1;
			E_textBox->Enabled = 1;
			E_comboBox->Show(); E_comboBox->SelectedIndex = 0;

			m_label->Enabled = 1;
			m_textBox->Enabled = 1;
			m_comboBox->Show(); m_comboBox->SelectedIndex = 0;

			g_label->Enabled = 1;
			g_u_label->Enabled = 1;
			g_comboBox->Enabled = 1;

			h_label->Enabled = 0;
			h_textBox->Enabled = 0;
			h_comboBox->Hide();
		}
	}

	//เคลียร์ช่อง
	void clear_textbox() {
		E_textBox->Clear();
		m_textBox->Clear();
		h_textBox->Clear();
		g_comboBox->Text = "";
		ans_label->Visible = 0;
	}

	//รีเทิร์นออกมาเป็นตัวแปรที่ต้องการหา
	char findwhat() {
		if (E_textBox->Enabled == 0) return 'E';
		else if (m_textBox->Enabled == 0) return 'm';
		else return 'g';
	}

	//เช็คว่ามีช่องว่างอยู่มั้ย
	bool checkblank(char find) {
		if (find == 'E') {
			if (m_textBox->Text == "" || g_comboBox->Text == "" || h_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else if (find == 'm') {
			if (E_textBox->Text == "" || g_comboBox->Text == "" || h_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
		else {
			if (E_textBox->Text == "" || g_comboBox->Text == "" || m_textBox->Text == "") {
				return 1;
			}
			else return 0;
		}
	}

	//คำนวณ
	void cal(char find) {
		if (find == 'E') {
			m = System::Convert::ToDouble(m_textBox->Text); if (m_comboBox->SelectedItem == "g") m /= 1000.0000;
			h = System::Convert::ToDouble(h_textBox->Text); if (h_comboBox->SelectedItem == "km") h *= (1000.0000 / 3600.0000);
			g = System::Convert::ToDouble(g_comboBox->Text);
			ans = m*g*h;
		}
		else if (find == 'm') {
			E = System::Convert::ToDouble(E_textBox->Text); if (E_comboBox->SelectedItem == "kJ") E *= 1000.0000;
			h = System::Convert::ToDouble(h_textBox->Text); if (h_comboBox->SelectedItem == "km") h *= (1000.0000 / 3600.0000);
			g = System::Convert::ToDouble(g_comboBox->Text);
			ans = E/(g*h);
		}
		else {
			E = System::Convert::ToDouble(E_textBox->Text); if (E_comboBox->SelectedItem == "kJ") E *= 1000.0000;
			m = System::Convert::ToDouble(m_textBox->Text); if (m_comboBox->SelectedItem == "g") m /= 1000.0000;
			g = System::Convert::ToDouble(g_comboBox->Text);
			ans = E/(m*g);
		}
	}

	//เซ็ตช่องเลือกหน่วยของคำตอบ
	void set_ans_combobox(char find) {
		if (find == 'E') {
			ans_combo->Items->Add("J");
			ans_combo->Items->Add("kJ");
		}
		else if (find == 'm') {
			ans_combo->Items->Add("kg");
			ans_combo->Items->Add("g");
		}
		else {
			ans_combo->Items->Add("m");
			ans_combo->Items->Add("km");
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

		E_label->Enabled = 0;
		E_textBox->Enabled = 0;
		E_comboBox->Hide();

		m_label->Enabled = 0;
		m_textBox->Enabled = 0;
		m_comboBox->Hide();

		g_label->Enabled = 0;
		g_u_label->Enabled = 0;
		g_comboBox->Enabled = 0;

		h_label->Enabled = 0;
		h_textBox->Enabled = 0;
		h_comboBox->Hide();

		comboBox1->Items->Clear();
		comboBox1->Items->Add("E[h] (Potential Energy)");
		comboBox1->Items->Add("m (Mass)");
		comboBox1->Items->Add("h (Height)");

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
		if (find == 'E') {
			set_ans_combobox('E');
			ans_combo->SelectedIndex = 0;
		}
		else if (find == 'm') {
			set_ans_combobox('m');
			ans_combo->SelectedIndex = 0;
		}
		else {
			set_ans_combobox('h');
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
	if (findwhat() == 'E') {
		ans_label2->Text = "E[k] = ";
	}
	else if (findwhat() == 'm') {
		ans_label2->Text = "m = ";
	}
	else {
		ans_label2->Text = "h = ";
	}
}
};
}
