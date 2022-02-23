#pragma once
#include "CH1_E1.h"
namespace PhysicsCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ HomeHeader;
	private: System::Windows::Forms::FlowLayoutPanel^ Topic_flowLayoutPanel;
	private: System::Windows::Forms::Button^ Chapter1_button;
	private: System::Windows::Forms::FlowLayoutPanel^ Equation_flowLayoutPanel;
	private: System::Windows::Forms::Label^ Topic_label;
	private: System::Windows::Forms::Label^ Equation_label;
	private: System::Windows::Forms::Button^ Chapter2_button;
	private: System::Windows::Forms::Button^ Chapter3_button;
	private: System::Windows::Forms::Button^ Chapter4_button;
	private: System::Windows::Forms::Button^ Chapter5_button;
	private: System::Windows::Forms::Label^ Find_label;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ CH1_E1_button;
	private: System::Windows::Forms::Button^ CH1_E2_button;
	private: System::Windows::Forms::Button^ CH1_E3_button;
	private: System::Windows::Forms::Button^ CH1_E4_button;
	private: System::Windows::Forms::Button^ CH1_E5_button;
	private: System::Windows::Forms::Button^ CH1_E6_button;
	private: System::Windows::Forms::Button^ CH2_E1_button;
	private: System::Windows::Forms::Button^ CH2_E2_button;
	private: System::Windows::Forms::Button^ CH2_E3_button;
	private: System::Windows::Forms::Button^ CH3_E1_button;
	private: System::Windows::Forms::Button^ CH3_E2_button;
	private: System::Windows::Forms::Button^ CH3_E3_button;
	private: System::Windows::Forms::Button^ CH3_E4_button;
	private: System::Windows::Forms::Button^ CH4_E1_button;
	private: System::Windows::Forms::Button^ CH4_E2_button;
	private: System::Windows::Forms::Button^ CH4_E3_button;
	private: System::Windows::Forms::Button^ CH4_E4_button;
	private: System::Windows::Forms::Button^ CH5_E1_button;
	private: System::Windows::Forms::Button^ CH5_E2_button;
	private: System::Windows::Forms::Button^ CH5_E3_button;
	private: System::Windows::Forms::Button^ CH5_E4_button;
	private: System::Windows::Forms::Button^ CH5_E5_button;
	private: System::Windows::Forms::Button^ CH5_E6_button;
	private: System::Windows::Forms::Button^ CH5_E7_button;
	private: System::Windows::Forms::Button^ reset_button;


	protected:

	protected:

	protected:

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
			this->HomeHeader = (gcnew System::Windows::Forms::Label());
			this->Topic_flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Chapter1_button = (gcnew System::Windows::Forms::Button());
			this->Chapter2_button = (gcnew System::Windows::Forms::Button());
			this->Chapter3_button = (gcnew System::Windows::Forms::Button());
			this->Chapter4_button = (gcnew System::Windows::Forms::Button());
			this->Chapter5_button = (gcnew System::Windows::Forms::Button());
			this->Equation_flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->CH1_E1_button = (gcnew System::Windows::Forms::Button());
			this->CH1_E2_button = (gcnew System::Windows::Forms::Button());
			this->CH1_E3_button = (gcnew System::Windows::Forms::Button());
			this->CH1_E4_button = (gcnew System::Windows::Forms::Button());
			this->CH1_E5_button = (gcnew System::Windows::Forms::Button());
			this->CH1_E6_button = (gcnew System::Windows::Forms::Button());
			this->CH2_E1_button = (gcnew System::Windows::Forms::Button());
			this->CH2_E2_button = (gcnew System::Windows::Forms::Button());
			this->CH2_E3_button = (gcnew System::Windows::Forms::Button());
			this->CH3_E1_button = (gcnew System::Windows::Forms::Button());
			this->CH3_E2_button = (gcnew System::Windows::Forms::Button());
			this->CH3_E3_button = (gcnew System::Windows::Forms::Button());
			this->CH3_E4_button = (gcnew System::Windows::Forms::Button());
			this->CH4_E1_button = (gcnew System::Windows::Forms::Button());
			this->CH4_E2_button = (gcnew System::Windows::Forms::Button());
			this->CH4_E3_button = (gcnew System::Windows::Forms::Button());
			this->CH4_E4_button = (gcnew System::Windows::Forms::Button());
			this->CH5_E1_button = (gcnew System::Windows::Forms::Button());
			this->CH5_E2_button = (gcnew System::Windows::Forms::Button());
			this->CH5_E3_button = (gcnew System::Windows::Forms::Button());
			this->CH5_E4_button = (gcnew System::Windows::Forms::Button());
			this->CH5_E5_button = (gcnew System::Windows::Forms::Button());
			this->CH5_E6_button = (gcnew System::Windows::Forms::Button());
			this->CH5_E7_button = (gcnew System::Windows::Forms::Button());
			this->Topic_label = (gcnew System::Windows::Forms::Label());
			this->Equation_label = (gcnew System::Windows::Forms::Label());
			this->Find_label = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->reset_button = (gcnew System::Windows::Forms::Button());
			this->Topic_flowLayoutPanel->SuspendLayout();
			this->Equation_flowLayoutPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// HomeHeader
			// 
			this->HomeHeader->AutoSize = true;
			this->HomeHeader->Font = (gcnew System::Drawing::Font(L"FC Iconic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HomeHeader->Location = System::Drawing::Point(12, 15);
			this->HomeHeader->Name = L"HomeHeader";
			this->HomeHeader->Size = System::Drawing::Size(331, 48);
			this->HomeHeader->TabIndex = 0;
			this->HomeHeader->Text = L"Physics Calculator";
			// 
			// Topic_flowLayoutPanel
			// 
			this->Topic_flowLayoutPanel->Controls->Add(this->Chapter1_button);
			this->Topic_flowLayoutPanel->Controls->Add(this->Chapter2_button);
			this->Topic_flowLayoutPanel->Controls->Add(this->Chapter3_button);
			this->Topic_flowLayoutPanel->Controls->Add(this->Chapter4_button);
			this->Topic_flowLayoutPanel->Controls->Add(this->Chapter5_button);
			this->Topic_flowLayoutPanel->Location = System::Drawing::Point(12, 122);
			this->Topic_flowLayoutPanel->Name = L"Topic_flowLayoutPanel";
			this->Topic_flowLayoutPanel->Size = System::Drawing::Size(282, 502);
			this->Topic_flowLayoutPanel->TabIndex = 1;
			// 
			// Chapter1_button
			// 
			this->Chapter1_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chapter1_button->Location = System::Drawing::Point(3, 3);
			this->Chapter1_button->Name = L"Chapter1_button";
			this->Chapter1_button->Size = System::Drawing::Size(279, 76);
			this->Chapter1_button->TabIndex = 0;
			this->Chapter1_button->Text = L"การเคลื่อนที่แนวเส้นตรง";
			this->Chapter1_button->UseVisualStyleBackColor = true;
			this->Chapter1_button->Click += gcnew System::EventHandler(this, &Home::Chapter1_button_Click);
			// 
			// Chapter2_button
			// 
			this->Chapter2_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chapter2_button->Location = System::Drawing::Point(3, 85);
			this->Chapter2_button->Name = L"Chapter2_button";
			this->Chapter2_button->Size = System::Drawing::Size(279, 76);
			this->Chapter2_button->TabIndex = 1;
			this->Chapter2_button->Text = L"การเคลื่อนที่แบบโพรเจคไทล์";
			this->Chapter2_button->UseVisualStyleBackColor = true;
			this->Chapter2_button->Click += gcnew System::EventHandler(this, &Home::Chapter2_button_Click);
			// 
			// Chapter3_button
			// 
			this->Chapter3_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chapter3_button->Location = System::Drawing::Point(3, 167);
			this->Chapter3_button->Name = L"Chapter3_button";
			this->Chapter3_button->Size = System::Drawing::Size(279, 76);
			this->Chapter3_button->TabIndex = 2;
			this->Chapter3_button->Text = L"การเคลื่อนที่แบบวงกลม";
			this->Chapter3_button->UseVisualStyleBackColor = true;
			this->Chapter3_button->Click += gcnew System::EventHandler(this, &Home::Chapter3_button_Click);
			// 
			// Chapter4_button
			// 
			this->Chapter4_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chapter4_button->Location = System::Drawing::Point(3, 249);
			this->Chapter4_button->Name = L"Chapter4_button";
			this->Chapter4_button->Size = System::Drawing::Size(279, 76);
			this->Chapter4_button->TabIndex = 3;
			this->Chapter4_button->Text = L"การเคลื่อนที่แบบฮาร์มอนิก";
			this->Chapter4_button->UseVisualStyleBackColor = true;
			this->Chapter4_button->Click += gcnew System::EventHandler(this, &Home::Chapter4_button_Click);
			// 
			// Chapter5_button
			// 
			this->Chapter5_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chapter5_button->Location = System::Drawing::Point(3, 331);
			this->Chapter5_button->Name = L"Chapter5_button";
			this->Chapter5_button->Size = System::Drawing::Size(279, 76);
			this->Chapter5_button->TabIndex = 4;
			this->Chapter5_button->Text = L"งาน และ พลังงาน";
			this->Chapter5_button->UseVisualStyleBackColor = true;
			this->Chapter5_button->Click += gcnew System::EventHandler(this, &Home::Chapter5_button_Click);
			// 
			// Equation_flowLayoutPanel
			// 
			this->Equation_flowLayoutPanel->AutoScroll = true;
			this->Equation_flowLayoutPanel->Controls->Add(this->CH1_E1_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH1_E2_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH1_E3_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH1_E4_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH1_E5_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH1_E6_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH2_E1_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH2_E2_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH2_E3_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH3_E1_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH3_E2_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH3_E3_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH3_E4_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH4_E1_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH4_E2_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH4_E3_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH4_E4_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH5_E1_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH5_E2_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH5_E3_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH5_E4_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH5_E5_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH5_E6_button);
			this->Equation_flowLayoutPanel->Controls->Add(this->CH5_E7_button);
			this->Equation_flowLayoutPanel->Location = System::Drawing::Point(300, 122);
			this->Equation_flowLayoutPanel->Name = L"Equation_flowLayoutPanel";
			this->Equation_flowLayoutPanel->Size = System::Drawing::Size(492, 502);
			this->Equation_flowLayoutPanel->TabIndex = 2;
			// 
			// CH1_E1_button
			// 
			this->CH1_E1_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH1_E1_button->Location = System::Drawing::Point(3, 3);
			this->CH1_E1_button->Name = L"CH1_E1_button";
			this->CH1_E1_button->Size = System::Drawing::Size(468, 76);
			this->CH1_E1_button->TabIndex = 1;
			this->CH1_E1_button->Text = L"CH1_E1_button";
			this->CH1_E1_button->UseVisualStyleBackColor = true;
			this->CH1_E1_button->Click += gcnew System::EventHandler(this, &Home::CH1_E1_button_Click);
			// 
			// CH1_E2_button
			// 
			this->CH1_E2_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH1_E2_button->Location = System::Drawing::Point(3, 85);
			this->CH1_E2_button->Name = L"CH1_E2_button";
			this->CH1_E2_button->Size = System::Drawing::Size(468, 76);
			this->CH1_E2_button->TabIndex = 2;
			this->CH1_E2_button->Text = L"CH1_E2_button";
			this->CH1_E2_button->UseVisualStyleBackColor = true;
			// 
			// CH1_E3_button
			// 
			this->CH1_E3_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH1_E3_button->Location = System::Drawing::Point(3, 167);
			this->CH1_E3_button->Name = L"CH1_E3_button";
			this->CH1_E3_button->Size = System::Drawing::Size(468, 76);
			this->CH1_E3_button->TabIndex = 3;
			this->CH1_E3_button->Text = L"CH1_E3_button";
			this->CH1_E3_button->UseVisualStyleBackColor = true;
			// 
			// CH1_E4_button
			// 
			this->CH1_E4_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH1_E4_button->Location = System::Drawing::Point(3, 249);
			this->CH1_E4_button->Name = L"CH1_E4_button";
			this->CH1_E4_button->Size = System::Drawing::Size(468, 76);
			this->CH1_E4_button->TabIndex = 4;
			this->CH1_E4_button->Text = L"CH1_E4_button";
			this->CH1_E4_button->UseVisualStyleBackColor = true;
			// 
			// CH1_E5_button
			// 
			this->CH1_E5_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH1_E5_button->Location = System::Drawing::Point(3, 331);
			this->CH1_E5_button->Name = L"CH1_E5_button";
			this->CH1_E5_button->Size = System::Drawing::Size(468, 76);
			this->CH1_E5_button->TabIndex = 5;
			this->CH1_E5_button->Text = L"CH1_E5_button";
			this->CH1_E5_button->UseVisualStyleBackColor = true;
			// 
			// CH1_E6_button
			// 
			this->CH1_E6_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH1_E6_button->Location = System::Drawing::Point(3, 413);
			this->CH1_E6_button->Name = L"CH1_E6_button";
			this->CH1_E6_button->Size = System::Drawing::Size(468, 76);
			this->CH1_E6_button->TabIndex = 6;
			this->CH1_E6_button->Text = L"CH1_E6_button";
			this->CH1_E6_button->UseVisualStyleBackColor = true;
			// 
			// CH2_E1_button
			// 
			this->CH2_E1_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH2_E1_button->Location = System::Drawing::Point(3, 495);
			this->CH2_E1_button->Name = L"CH2_E1_button";
			this->CH2_E1_button->Size = System::Drawing::Size(468, 76);
			this->CH2_E1_button->TabIndex = 7;
			this->CH2_E1_button->Text = L"CH2_E1_button";
			this->CH2_E1_button->UseVisualStyleBackColor = true;
			// 
			// CH2_E2_button
			// 
			this->CH2_E2_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH2_E2_button->Location = System::Drawing::Point(3, 577);
			this->CH2_E2_button->Name = L"CH2_E2_button";
			this->CH2_E2_button->Size = System::Drawing::Size(468, 76);
			this->CH2_E2_button->TabIndex = 8;
			this->CH2_E2_button->Text = L"CH2_E2_button";
			this->CH2_E2_button->UseVisualStyleBackColor = true;
			// 
			// CH2_E3_button
			// 
			this->CH2_E3_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH2_E3_button->Location = System::Drawing::Point(3, 659);
			this->CH2_E3_button->Name = L"CH2_E3_button";
			this->CH2_E3_button->Size = System::Drawing::Size(468, 76);
			this->CH2_E3_button->TabIndex = 9;
			this->CH2_E3_button->Text = L"CH2_E3_button";
			this->CH2_E3_button->UseVisualStyleBackColor = true;
			// 
			// CH3_E1_button
			// 
			this->CH3_E1_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH3_E1_button->Location = System::Drawing::Point(3, 741);
			this->CH3_E1_button->Name = L"CH3_E1_button";
			this->CH3_E1_button->Size = System::Drawing::Size(468, 76);
			this->CH3_E1_button->TabIndex = 10;
			this->CH3_E1_button->Text = L"CH3_E1_button";
			this->CH3_E1_button->UseVisualStyleBackColor = true;
			// 
			// CH3_E2_button
			// 
			this->CH3_E2_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH3_E2_button->Location = System::Drawing::Point(3, 823);
			this->CH3_E2_button->Name = L"CH3_E2_button";
			this->CH3_E2_button->Size = System::Drawing::Size(468, 76);
			this->CH3_E2_button->TabIndex = 11;
			this->CH3_E2_button->Text = L"CH3_E2_button";
			this->CH3_E2_button->UseVisualStyleBackColor = true;
			// 
			// CH3_E3_button
			// 
			this->CH3_E3_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH3_E3_button->Location = System::Drawing::Point(3, 905);
			this->CH3_E3_button->Name = L"CH3_E3_button";
			this->CH3_E3_button->Size = System::Drawing::Size(468, 76);
			this->CH3_E3_button->TabIndex = 12;
			this->CH3_E3_button->Text = L"CH3_E3_button";
			this->CH3_E3_button->UseVisualStyleBackColor = true;
			// 
			// CH3_E4_button
			// 
			this->CH3_E4_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH3_E4_button->Location = System::Drawing::Point(3, 987);
			this->CH3_E4_button->Name = L"CH3_E4_button";
			this->CH3_E4_button->Size = System::Drawing::Size(468, 76);
			this->CH3_E4_button->TabIndex = 13;
			this->CH3_E4_button->Text = L"CH3_E4_button";
			this->CH3_E4_button->UseVisualStyleBackColor = true;
			// 
			// CH4_E1_button
			// 
			this->CH4_E1_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH4_E1_button->Location = System::Drawing::Point(3, 1069);
			this->CH4_E1_button->Name = L"CH4_E1_button";
			this->CH4_E1_button->Size = System::Drawing::Size(468, 76);
			this->CH4_E1_button->TabIndex = 14;
			this->CH4_E1_button->Text = L"CH4_E1_button";
			this->CH4_E1_button->UseVisualStyleBackColor = true;
			// 
			// CH4_E2_button
			// 
			this->CH4_E2_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH4_E2_button->Location = System::Drawing::Point(3, 1151);
			this->CH4_E2_button->Name = L"CH4_E2_button";
			this->CH4_E2_button->Size = System::Drawing::Size(468, 76);
			this->CH4_E2_button->TabIndex = 15;
			this->CH4_E2_button->Text = L"CH4_E2_button";
			this->CH4_E2_button->UseVisualStyleBackColor = true;
			// 
			// CH4_E3_button
			// 
			this->CH4_E3_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH4_E3_button->Location = System::Drawing::Point(3, 1233);
			this->CH4_E3_button->Name = L"CH4_E3_button";
			this->CH4_E3_button->Size = System::Drawing::Size(468, 76);
			this->CH4_E3_button->TabIndex = 16;
			this->CH4_E3_button->Text = L"CH4_E3_button";
			this->CH4_E3_button->UseVisualStyleBackColor = true;
			// 
			// CH4_E4_button
			// 
			this->CH4_E4_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH4_E4_button->Location = System::Drawing::Point(3, 1315);
			this->CH4_E4_button->Name = L"CH4_E4_button";
			this->CH4_E4_button->Size = System::Drawing::Size(468, 76);
			this->CH4_E4_button->TabIndex = 17;
			this->CH4_E4_button->Text = L"CH4_E4_button";
			this->CH4_E4_button->UseVisualStyleBackColor = true;
			// 
			// CH5_E1_button
			// 
			this->CH5_E1_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH5_E1_button->Location = System::Drawing::Point(3, 1397);
			this->CH5_E1_button->Name = L"CH5_E1_button";
			this->CH5_E1_button->Size = System::Drawing::Size(468, 76);
			this->CH5_E1_button->TabIndex = 18;
			this->CH5_E1_button->Text = L"CH5_E1_button";
			this->CH5_E1_button->UseVisualStyleBackColor = true;
			// 
			// CH5_E2_button
			// 
			this->CH5_E2_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH5_E2_button->Location = System::Drawing::Point(3, 1479);
			this->CH5_E2_button->Name = L"CH5_E2_button";
			this->CH5_E2_button->Size = System::Drawing::Size(468, 76);
			this->CH5_E2_button->TabIndex = 19;
			this->CH5_E2_button->Text = L"CH5_E2_button";
			this->CH5_E2_button->UseVisualStyleBackColor = true;
			// 
			// CH5_E3_button
			// 
			this->CH5_E3_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH5_E3_button->Location = System::Drawing::Point(3, 1561);
			this->CH5_E3_button->Name = L"CH5_E3_button";
			this->CH5_E3_button->Size = System::Drawing::Size(468, 76);
			this->CH5_E3_button->TabIndex = 20;
			this->CH5_E3_button->Text = L"CH5_E3_button";
			this->CH5_E3_button->UseVisualStyleBackColor = true;
			// 
			// CH5_E4_button
			// 
			this->CH5_E4_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH5_E4_button->Location = System::Drawing::Point(3, 1643);
			this->CH5_E4_button->Name = L"CH5_E4_button";
			this->CH5_E4_button->Size = System::Drawing::Size(468, 76);
			this->CH5_E4_button->TabIndex = 21;
			this->CH5_E4_button->Text = L"CH5_E4_button";
			this->CH5_E4_button->UseVisualStyleBackColor = true;
			// 
			// CH5_E5_button
			// 
			this->CH5_E5_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH5_E5_button->Location = System::Drawing::Point(3, 1725);
			this->CH5_E5_button->Name = L"CH5_E5_button";
			this->CH5_E5_button->Size = System::Drawing::Size(468, 76);
			this->CH5_E5_button->TabIndex = 22;
			this->CH5_E5_button->Text = L"CH5_E5_button";
			this->CH5_E5_button->UseVisualStyleBackColor = true;
			// 
			// CH5_E6_button
			// 
			this->CH5_E6_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH5_E6_button->Location = System::Drawing::Point(3, 1807);
			this->CH5_E6_button->Name = L"CH5_E6_button";
			this->CH5_E6_button->Size = System::Drawing::Size(468, 76);
			this->CH5_E6_button->TabIndex = 23;
			this->CH5_E6_button->Text = L"CH5_E6_button";
			this->CH5_E6_button->UseVisualStyleBackColor = true;
			// 
			// CH5_E7_button
			// 
			this->CH5_E7_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CH5_E7_button->Location = System::Drawing::Point(3, 1889);
			this->CH5_E7_button->Name = L"CH5_E7_button";
			this->CH5_E7_button->Size = System::Drawing::Size(468, 76);
			this->CH5_E7_button->TabIndex = 24;
			this->CH5_E7_button->Text = L"CH5_E7_button";
			this->CH5_E7_button->UseVisualStyleBackColor = true;
			// 
			// Topic_label
			// 
			this->Topic_label->AutoSize = true;
			this->Topic_label->Font = (gcnew System::Drawing::Font(L"Bangna New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Topic_label->Location = System::Drawing::Point(110, 74);
			this->Topic_label->Name = L"Topic_label";
			this->Topic_label->Size = System::Drawing::Size(89, 48);
			this->Topic_label->TabIndex = 3;
			this->Topic_label->Text = L"TOPIC";
			this->Topic_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Equation_label
			// 
			this->Equation_label->AutoSize = true;
			this->Equation_label->Font = (gcnew System::Drawing::Font(L"Bangna New", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Equation_label->Location = System::Drawing::Point(295, 74);
			this->Equation_label->Name = L"Equation_label";
			this->Equation_label->Size = System::Drawing::Size(155, 48);
			this->Equation_label->TabIndex = 4;
			this->Equation_label->Text = L"EQUATIONS";
			this->Equation_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Find_label
			// 
			this->Find_label->AutoSize = true;
			this->Find_label->Font = (gcnew System::Drawing::Font(L"Bangna New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Find_label->Location = System::Drawing::Point(456, 79);
			this->Find_label->Name = L"Find_label";
			this->Find_label->Size = System::Drawing::Size(73, 37);
			this->Find_label->TabIndex = 5;
			this->Find_label->Text = L"Find :";
			this->Find_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->ItemHeight = 37;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(22) {
				L"(Default)", L"s (Displacement)", L"u (Initial Velocity)",
					L"v (Final Velocity)", L"a (Acceleration)", L"t (Time)", L"s[x] (Horizontal Displacement)", L"s[y] (Vertical Displacement)",
					L"f (Frequency)", L"T (Period)", L"R (Radius)", L"F[c] (Centripetal Force)", L"a[c] (Centripetal Acceleration)", L"w (Angular Velocity)",
					L"L (Rope Lenght)", L"W (Work)", L"F (Force)", L"P (Power)", L"E[k] (Kinetic Energy)", L"E[h] (Potential Energy)", L"k (Spring Constant)",
					L"x (Spring Stretch/Compression)"
			});
			this->comboBox1->Location = System::Drawing::Point(524, 74);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(247, 45);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::comboBox1_SelectedIndexChanged);
			// 
			// reset_button
			// 
			this->reset_button->Font = (gcnew System::Drawing::Font(L"CordiaUPC", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset_button->Location = System::Drawing::Point(696, 12);
			this->reset_button->Name = L"reset_button";
			this->reset_button->Size = System::Drawing::Size(75, 34);
			this->reset_button->TabIndex = 7;
			this->reset_button->Text = L"RESET";
			this->reset_button->UseVisualStyleBackColor = true;
			this->reset_button->Click += gcnew System::EventHandler(this, &Home::reset_button_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(804, 636);
			this->Controls->Add(this->reset_button);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Find_label);
			this->Controls->Add(this->Equation_label);
			this->Controls->Add(this->Topic_label);
			this->Controls->Add(this->Equation_flowLayoutPanel);
			this->Controls->Add(this->Topic_flowLayoutPanel);
			this->Controls->Add(this->HomeHeader);
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->Topic_flowLayoutPanel->ResumeLayout(false);
			this->Equation_flowLayoutPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//โค้ดเริ่มตรงนี้
		//โค้ดเริ่มตรงนี้
		//โค้ดเริ่มตรงนี้

		int selected_topic = 0;

private: System::Void Chapter1_button_Click(System::Object^ sender, System::EventArgs^ e) {
	selected_topic = 1;
	//set topic
	{Chapter1_button->Enabled = false;
	Chapter2_button->Enabled = true;
	Chapter3_button->Enabled = true;
	Chapter4_button->Enabled = true;
	Chapter5_button->Enabled = true; }
	//set combobox
	{comboBox1->Items->Clear();
	comboBox1->Items->Add("(Default)");
	comboBox1->Items->Add("s (Displacement)");
	comboBox1->Items->Add("u (Initial Velocity)");
	comboBox1->Items->Add("v (Final Velocity)");
	comboBox1->Items->Add("a (Acceleration)");
	comboBox1->Items->Add("t (Time)"); }
	//set equation
	{//ch1
		CH1_E1_button->Visible = true;
		CH1_E2_button->Visible = true;
		CH1_E3_button->Visible = true;
		CH1_E4_button->Visible = true;
		CH1_E5_button->Visible = true;
		CH1_E6_button->Visible = true;
		//ch2
		CH2_E1_button->Visible = false;
		CH2_E2_button->Visible = false;
		CH2_E3_button->Visible = false;
		//ch3
		CH3_E1_button->Visible = false;
		CH3_E2_button->Visible = false;
		CH3_E3_button->Visible = false;
		CH3_E4_button->Visible = false;
		//ch4
		CH4_E1_button->Visible = false;
		CH4_E2_button->Visible = false;
		CH4_E3_button->Visible = false;
		CH4_E4_button->Visible = false;
		//ch5
		CH5_E1_button->Visible = false;
		CH5_E2_button->Visible = false;
		CH5_E3_button->Visible = false;
		CH5_E4_button->Visible = false;
		CH5_E5_button->Visible = false;
		CH5_E6_button->Visible = false;
		CH5_E7_button->Visible = false; }
}
private: System::Void Chapter2_button_Click(System::Object^ sender, System::EventArgs^ e) {
	selected_topic = 2;
	//set topic
	{Chapter1_button->Enabled = true;
	Chapter2_button->Enabled = false;
	Chapter3_button->Enabled = true;
	Chapter4_button->Enabled = true;
	Chapter5_button->Enabled = true; }
	//set combobox
	{comboBox1->Items->Clear();
	comboBox1->Items->Add("(Default)");
	comboBox1->Items->Add("s[x] (Horizontal Displacement)");
	comboBox1->Items->Add("s[y] (Vertical Displacement)");
	comboBox1->Items->Add("u (Initial Velocity)");
	comboBox1->Items->Add("t (Time)"); }
	//set equation
	{//ch1
		CH1_E1_button->Visible = false;
		CH1_E2_button->Visible = false;
		CH1_E3_button->Visible = false;
		CH1_E4_button->Visible = false;
		CH1_E5_button->Visible = false;
		CH1_E6_button->Visible = false;
		//ch2
		CH2_E1_button->Visible = true;
		CH2_E2_button->Visible = true;
		CH2_E3_button->Visible = true;
		//ch3
		CH3_E1_button->Visible = false;
		CH3_E2_button->Visible = false;
		CH3_E3_button->Visible = false;
		CH3_E4_button->Visible = false;
		//ch4
		CH4_E1_button->Visible = false;
		CH4_E2_button->Visible = false;
		CH4_E3_button->Visible = false;
		CH4_E4_button->Visible = false;
		//ch5
		CH5_E1_button->Visible = false;
		CH5_E2_button->Visible = false;
		CH5_E3_button->Visible = false;
		CH5_E4_button->Visible = false;
		CH5_E5_button->Visible = false;
		CH5_E6_button->Visible = false;
		CH5_E7_button->Visible = false; }
}
private: System::Void Chapter3_button_Click(System::Object^ sender, System::EventArgs^ e) {
	selected_topic = 3;
	//set topic
	{Chapter1_button->Enabled = true;
	Chapter2_button->Enabled = true;
	Chapter3_button->Enabled = false;
	Chapter4_button->Enabled = true;
	Chapter5_button->Enabled = true; }
	//set combobox
	{comboBox1->Items->Clear();
	comboBox1->Items->Add("(Default)");
	comboBox1->Items->Add("v (Velocity)");
	comboBox1->Items->Add("f (Frequency)");
	comboBox1->Items->Add("T (Period)");
	comboBox1->Items->Add("R (Radius)");
	comboBox1->Items->Add("F[c] (Centripetal Force)");
	comboBox1->Items->Add("a[c] (Centripetal Acceleration)");
	comboBox1->Items->Add("t (Time)"); }
	//set equation
	{//ch1
		CH1_E1_button->Visible = false;
		CH1_E2_button->Visible = false;
		CH1_E3_button->Visible = false;
		CH1_E4_button->Visible = false;
		CH1_E5_button->Visible = false;
		CH1_E6_button->Visible = false;
		//ch2
		CH2_E1_button->Visible = false;
		CH2_E2_button->Visible = false;
		CH2_E3_button->Visible = false;
		//ch3
		CH3_E1_button->Visible = true;
		CH3_E2_button->Visible = true;
		CH3_E3_button->Visible = true;
		CH3_E4_button->Visible = true;
		//ch4
		CH4_E1_button->Visible = false;
		CH4_E2_button->Visible = false;
		CH4_E3_button->Visible = false;
		CH4_E4_button->Visible = false;
		//ch5
		CH5_E1_button->Visible = false;
		CH5_E2_button->Visible = false;
		CH5_E3_button->Visible = false;
		CH5_E4_button->Visible = false;
		CH5_E5_button->Visible = false;
		CH5_E6_button->Visible = false;
		CH5_E7_button->Visible = false; }
}
private: System::Void Chapter4_button_Click(System::Object^ sender, System::EventArgs^ e) {
	selected_topic = 4;
	//set topic
	{Chapter1_button->Enabled = true;
	Chapter2_button->Enabled = true;
	Chapter3_button->Enabled = true;
	Chapter4_button->Enabled = false;
	Chapter5_button->Enabled = true; }
	//set combobox
	{comboBox1->Items->Clear();
	comboBox1->Items->Add("(Default)");
	comboBox1->Items->Add("v (Velocity)");
	comboBox1->Items->Add("a (Acceleration)");
	comboBox1->Items->Add("f (Frequency)");
	comboBox1->Items->Add("T (Period)");
	comboBox1->Items->Add("w (Angular Velocity)");
	comboBox1->Items->Add("L (Rope Lenght)"); }
	//set equation
	{//ch1
		CH1_E1_button->Visible = false;
		CH1_E2_button->Visible = false;
		CH1_E3_button->Visible = false;
		CH1_E4_button->Visible = false;
		CH1_E5_button->Visible = false;
		CH1_E6_button->Visible = false;
		//ch2
		CH2_E1_button->Visible = false;
		CH2_E2_button->Visible = false;
		CH2_E3_button->Visible = false;
		//ch3
		CH3_E1_button->Visible = true;
		CH3_E2_button->Visible = false;
		CH3_E3_button->Visible = false;
		CH3_E4_button->Visible = false;
		//ch4
		CH4_E1_button->Visible = true;
		CH4_E2_button->Visible = true;
		CH4_E3_button->Visible = true;
		CH4_E4_button->Visible = true;
		//ch5
		CH5_E1_button->Visible = false;
		CH5_E2_button->Visible = false;
		CH5_E3_button->Visible = false;
		CH5_E4_button->Visible = false;
		CH5_E5_button->Visible = false;
		CH5_E6_button->Visible = false;
		CH5_E7_button->Visible = false; }
}
private: System::Void Chapter5_button_Click(System::Object^ sender, System::EventArgs^ e) {
	selected_topic = 5;
	//set topic
	{Chapter1_button->Enabled = true;
	Chapter2_button->Enabled = true;
	Chapter3_button->Enabled = true;
	Chapter4_button->Enabled = true;
	Chapter5_button->Enabled = false; }
	//set combobox
	{comboBox1->Items->Clear();
	comboBox1->Items->Add("(Default)");
	comboBox1->Items->Add("W (Work)");
	comboBox1->Items->Add("F (Force)");
	comboBox1->Items->Add("s (Displacement)");
	comboBox1->Items->Add("P (Power)");
	comboBox1->Items->Add("t (Time)");
	comboBox1->Items->Add("v (Velocity)");
	comboBox1->Items->Add("E[k] (Kinetic Energy)");
	comboBox1->Items->Add("E[h] (Potential Energy)");
	comboBox1->Items->Add("k (Spring Constant)");
	comboBox1->Items->Add("x (Spring stretch/compression)"); }
	//set equation
	{//ch1
		CH1_E1_button->Visible = false;
		CH1_E2_button->Visible = false;
		CH1_E3_button->Visible = false;
		CH1_E4_button->Visible = false;
		CH1_E5_button->Visible = false;
		CH1_E6_button->Visible = false;
		//ch2
		CH2_E1_button->Visible = false;
		CH2_E2_button->Visible = false;
		CH2_E3_button->Visible = false;
		//ch3
		CH3_E1_button->Visible = false;
		CH3_E2_button->Visible = false;
		CH3_E3_button->Visible = false;
		CH3_E4_button->Visible = false;
		//ch4
		CH4_E1_button->Visible = false;
		CH4_E2_button->Visible = false;
		CH4_E3_button->Visible = false;
		CH4_E4_button->Visible = false;
		//ch5
		CH5_E1_button->Visible = true;
		CH5_E2_button->Visible = true;
		CH5_E3_button->Visible = true;
		CH5_E4_button->Visible = true;
		CH5_E5_button->Visible = true;
		CH5_E6_button->Visible = true;
		CH5_E7_button->Visible = true; }
}
private: System::Void reset_button_Click(System::Object^ sender, System::EventArgs^ e) {
	selected_topic = 0;
	//set topic
	{Chapter1_button->Enabled = true;
	Chapter2_button->Enabled = true;
	Chapter3_button->Enabled = true;
	Chapter4_button->Enabled = true;
	Chapter5_button->Enabled = true; }
	//set combobox
	{comboBox1->Items->Clear();
	comboBox1->Items->Add("(Default)");
	comboBox1->Items->Add("s (Displacement)");
	comboBox1->Items->Add("u (Initial Velocity)");
	comboBox1->Items->Add("v (Final Velocity)");
	comboBox1->Items->Add("a (Acceleration)");
	comboBox1->Items->Add("t (Time)");
	comboBox1->Items->Add("s[x] (Horizontal Displacement)");
	comboBox1->Items->Add("s[y] (Vertical Displacement)");
	comboBox1->Items->Add("f (Frequency)");
	comboBox1->Items->Add("T (Period)");
	comboBox1->Items->Add("R (Radius)");
	comboBox1->Items->Add("F[c] (Centripetal Force)");
	comboBox1->Items->Add("a[c] (Centripetal Acceleration)");
	comboBox1->Items->Add("w (Angular Velocity)");
	comboBox1->Items->Add("L (Rope Lenght)");
	comboBox1->Items->Add("W (Work)");
	comboBox1->Items->Add("F (Force)");
	comboBox1->Items->Add("P (Power)");
	comboBox1->Items->Add("v (Velocity)");
	comboBox1->Items->Add("E[k] (Kinetic Energy)");
	comboBox1->Items->Add("E[h] (Potential Energy)");
	comboBox1->Items->Add("k (Spring Constant)");
	comboBox1->Items->Add("x (Spring stretch/compression)"); }
	//set equation
	{//ch1
	CH1_E1_button->Visible = true;
	CH1_E2_button->Visible = true;
	CH1_E3_button->Visible = true;
	CH1_E4_button->Visible = true;
	CH1_E5_button->Visible = true;
	CH1_E6_button->Visible = true;
	//ch2
	CH2_E1_button->Visible = true;
	CH2_E2_button->Visible = true;
	CH2_E3_button->Visible = true;
	//ch3
	CH3_E1_button->Visible = true;
	CH3_E2_button->Visible = true;
	CH3_E3_button->Visible = true;
	CH3_E4_button->Visible = true;
	//ch4
	CH4_E1_button->Visible = true;
	CH4_E2_button->Visible = true;
	CH4_E3_button->Visible = true;
	CH4_E4_button->Visible = true;
	//ch5
	CH5_E1_button->Visible = true;
	CH5_E2_button->Visible = true;
	CH5_E3_button->Visible = true;
	CH5_E4_button->Visible = true;
	CH5_E5_button->Visible = true;
	CH5_E6_button->Visible = true;
	CH5_E7_button->Visible = true;}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//set topic0
	if (selected_topic == 0) {
		if (comboBox1->SelectedItem == "(Default)"){
			CH1_E1_button->Visible = true;
			CH1_E2_button->Visible = true;
			CH1_E3_button->Visible = true;
			CH1_E4_button->Visible = true;
			CH1_E5_button->Visible = true;
			CH1_E6_button->Visible = true;
			CH2_E1_button->Visible = true;
			CH2_E2_button->Visible = true;
			CH2_E3_button->Visible = true;
			CH3_E1_button->Visible = true;
			CH3_E2_button->Visible = true;
			CH3_E3_button->Visible = true;
			CH3_E4_button->Visible = true;
			CH4_E1_button->Visible = true;
			CH4_E2_button->Visible = true;
			CH4_E3_button->Visible = true;
			CH4_E4_button->Visible = true;
			CH5_E1_button->Visible = true;
			CH5_E2_button->Visible = true;
			CH5_E3_button->Visible = true;
			CH5_E4_button->Visible = true;
			CH5_E5_button->Visible = true;
			CH5_E6_button->Visible = true;
			CH5_E7_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "s (Displacement)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = true;
			CH1_E3_button->Visible = true;
			CH1_E4_button->Visible = true;
			CH1_E5_button->Visible = true;
			CH1_E6_button->Visible = true;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = true;
			CH2_E3_button->Visible = true;
			CH3_E1_button->Visible = true;
			CH3_E2_button->Visible = true;
			CH3_E3_button->Visible = true;
			CH3_E4_button->Visible = true;
			CH4_E1_button->Visible = true;
			CH4_E2_button->Visible = true;
			CH4_E3_button->Visible = true;
			CH4_E4_button->Visible = true;
			CH5_E1_button->Visible = true;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "u (Initial Velocity)") {
			CH1_E1_button->Visible = true;
			CH1_E2_button->Visible = true;
			CH1_E3_button->Visible = true;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = true;
			CH1_E6_button->Visible = true;
			CH2_E1_button->Visible = true;
			CH2_E2_button->Visible = true;
			CH2_E3_button->Visible = true;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = true;
			CH3_E3_button->Visible = true;
			CH3_E4_button->Visible = true;
			CH4_E1_button->Visible = true;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "v (Final Velocity)") {
			CH1_E1_button->Visible = true;
			CH1_E2_button->Visible = true;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = true;
			CH1_E5_button->Visible = true;
			CH1_E6_button->Visible = true;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = true;
			CH3_E3_button->Visible = true;
			CH3_E4_button->Visible = true;
			CH4_E1_button->Visible = true;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = true;
			CH5_E4_button->Visible = true;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "a (Acceleration)") {
			CH1_E1_button->Visible = true;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = true;
			CH1_E4_button->Visible = true;
			CH1_E5_button->Visible = true;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = true;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = true;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "t (Time)") {
			CH1_E1_button->Visible = true;
			CH1_E2_button->Visible = true;
			CH1_E3_button->Visible = true;
			CH1_E4_button->Visible = true;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = true;
			CH2_E1_button->Visible = true;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = true;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "s[x] (Horizontal Displacement)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = true;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "s[y] (Vertical Displacement)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = true;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "f (Frequency)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = true;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "T (Period)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = true;
			CH3_E2_button->Visible = true;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = true;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "R (Radius)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = true;
			CH3_E3_button->Visible = true;
			CH3_E4_button->Visible = true;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "F[c] (Centripetal Force)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = true;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "a[c] (Centripetal Acceleration)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = true;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "w (Angular Velocity)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = true;
			CH4_E2_button->Visible = true;
			CH4_E3_button->Visible = true;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "L (Rope Lenght)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = true;
			CH4_E4_button->Visible = true;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "W (Work)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = true;
			CH5_E2_button->Visible = true;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "F (Force)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = true;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = true;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "P (Power)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = true;
			CH5_E3_button->Visible = true;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "E[k] (Kinetic Energy)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = true;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "E[h] (Potential Energy)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = true;
			CH5_E6_button->Visible = true;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "k (Spring Constant)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = true;
			CH5_E7_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "x (Spring Stretch/Compression)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = false;
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = true;
			CH5_E7_button->Visible = true;
		}
	}
	//set topic1
	if (selected_topic == 1) {
		if (comboBox1->SelectedItem == "(Default)") {
			CH1_E1_button->Visible = true;
			CH1_E2_button->Visible = true;
			CH1_E3_button->Visible = true;
			CH1_E4_button->Visible = true;
			CH1_E5_button->Visible = true;
			CH1_E6_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "s (Displacement)") {
			CH1_E1_button->Visible = false;
			CH1_E2_button->Visible = true;
			CH1_E3_button->Visible = true;
			CH1_E4_button->Visible = true;
			CH1_E5_button->Visible = true;
			CH1_E6_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "u (Initial Velocity)") {
			CH1_E1_button->Visible = true;
			CH1_E2_button->Visible = true;
			CH1_E3_button->Visible = true;
			CH1_E4_button->Visible = false;
			CH1_E5_button->Visible = true;
			CH1_E6_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "v (Final Velocity)") {
			CH1_E1_button->Visible = true;
			CH1_E2_button->Visible = true;
			CH1_E3_button->Visible = false;
			CH1_E4_button->Visible = true;
			CH1_E5_button->Visible = true;
			CH1_E6_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "a (Acceleration)") {
			CH1_E1_button->Visible = true;
			CH1_E2_button->Visible = false;
			CH1_E3_button->Visible = true;
			CH1_E4_button->Visible = true;
			CH1_E5_button->Visible = true;
			CH1_E6_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "t (Time)") {
			CH1_E1_button->Visible = true;
			CH1_E2_button->Visible = true;
			CH1_E3_button->Visible = true;
			CH1_E4_button->Visible = true;
			CH1_E5_button->Visible = false;
			CH1_E6_button->Visible = true;
		}
	}
	//set topic2
	if (selected_topic == 2) {
		if (comboBox1->SelectedItem == "(Default)") {
			CH2_E1_button->Visible = true;
			CH2_E2_button->Visible = true;
			CH2_E3_button->Visible = true;

		}
		else if (comboBox1->SelectedItem == "s[x] (Horizontal Displacement)") {
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = true;
			CH2_E3_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "s[y] (Vertical Displacement)") {
			CH2_E1_button->Visible = false;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "u (Initial Velocity)") {
			CH2_E1_button->Visible = true;
			CH2_E2_button->Visible = true;
			CH2_E3_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "t (Time)") {
			CH2_E1_button->Visible = true;
			CH2_E2_button->Visible = false;
			CH2_E3_button->Visible = false;
		}
	}
	//set topic3
	if (selected_topic == 3) {
		if (comboBox1->SelectedItem == "(Default)") {
			CH3_E1_button->Visible = true;
			CH3_E2_button->Visible = true;
			CH3_E3_button->Visible = true;
			CH3_E4_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "v (Velocity)") {
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = true;
			CH3_E3_button->Visible = true;
			CH3_E4_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "f (Frequency)") {
			CH3_E1_button->Visible = true;
			CH3_E2_button->Visible = true;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "T (Period)") {
			CH3_E1_button->Visible = true;
			CH3_E2_button->Visible = true;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "R (Radius)") {
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = true;
			CH3_E3_button->Visible = true;
			CH3_E4_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "F[c] (Centripetal Force)") {
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = true;
			CH3_E4_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "a[c] (Centripetal Acceleration)") {
			CH3_E1_button->Visible = false;
			CH3_E2_button->Visible = false;
			CH3_E3_button->Visible = false;
			CH3_E4_button->Visible = true;
		}
	}
	//set topic4
	if (selected_topic == 4) {
		if (comboBox1->SelectedItem == "(Default)") {
			CH3_E1_button->Visible = true;
			CH4_E1_button->Visible = true;
			CH4_E2_button->Visible = true;
			CH4_E3_button->Visible = true;
			CH4_E4_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "v (Velocity)") {
			CH3_E1_button->Visible = false;
			CH4_E1_button->Visible = true;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "a (Acceleration)") {
			CH3_E1_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = true;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "f (Frequency)") {
			CH3_E1_button->Visible = true;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "T (Period)") {
			CH3_E1_button->Visible = true;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = true;
			CH4_E4_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "w (Angular Velocity)") {
			CH3_E1_button->Visible = false;
			CH4_E1_button->Visible = true;
			CH4_E2_button->Visible = true;
			CH4_E3_button->Visible = false;
			CH4_E4_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "L (Rope Lenght)") {
			CH3_E1_button->Visible = false;
			CH4_E1_button->Visible = false;
			CH4_E2_button->Visible = false;
			CH4_E3_button->Visible = true;
			CH4_E4_button->Visible = true;
		}
	}
	//set topic5
	if (selected_topic == 5) {
		if (comboBox1->SelectedItem == "(Default)") {
			CH5_E1_button->Visible = true;
			CH5_E2_button->Visible = true;
			CH5_E3_button->Visible = true;
			CH5_E4_button->Visible = true;
			CH5_E5_button->Visible = true;
			CH5_E6_button->Visible = true;
			CH5_E7_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "W (Work)") {
			CH5_E1_button->Visible = true;
			CH5_E2_button->Visible = true;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "F (Force)") {
			CH5_E1_button->Visible = true;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = true;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = true;
		}
		else if (comboBox1->SelectedItem == "s (Displacement)") {
			CH5_E1_button->Visible = true;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "P (Power)") {
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = true;
			CH5_E3_button->Visible = true;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "t (Time)") {
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = true;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "v (Velocity)") {
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = true;
			CH5_E4_button->Visible = true;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "E[k] (Kinetic Energy)") {
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = true;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = false;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "E[h] (Potential Energy)") {
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = true;
			CH5_E6_button->Visible = true;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "k (Spring Constant)") {
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = true;
			CH5_E7_button->Visible = false;
		}
		else if (comboBox1->SelectedItem == "x (Spring stretch/compression)") {
			CH5_E1_button->Visible = false;
			CH5_E2_button->Visible = false;
			CH5_E3_button->Visible = false;
			CH5_E4_button->Visible = false;
			CH5_E5_button->Visible = false;
			CH5_E6_button->Visible = true;
			CH5_E7_button->Visible = true;
		}
	}
}
private: System::Void CH1_E1_button_Click(System::Object^ sender, System::EventArgs^ e) {
	CH1_E1 obj;
	//this->Hide();
	obj.ShowDialog();
}
};
}
