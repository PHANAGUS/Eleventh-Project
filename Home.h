#pragma once
namespace ProjectTest {

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
	private: System::Windows::Forms::TableLayoutPanel^ HomeTable;
	private: System::Windows::Forms::Label^ label_Topic;
	private: System::Windows::Forms::Label^ label_Equation;
	private: System::Windows::Forms::Label^ label_Filter;
	private: System::Windows::Forms::Label^ label_HomeHead;
	private: System::Windows::Forms::FlowLayoutPanel^ TopicListBox;
	private: System::Windows::Forms::Button^ Chapter1_button;
	private: System::Windows::Forms::Button^ Chapter2_button;
	private: System::Windows::Forms::Button^ Chapter3_button;
	private: System::Windows::Forms::Button^ Chapter4_button;
	private: System::Windows::Forms::Button^ Chapter5_button;
	private: System::Windows::Forms::FlowLayoutPanel^ EquationListBox;
	private: System::Windows::Forms::Panel^ Chapter5_panel;
	private: System::Windows::Forms::Label^ Chapter5_label1;
	private: System::Windows::Forms::ComboBox^ Chapter5_comboBox1;


	private: System::Windows::Forms::Button^ Chapter1_E1;
	private: System::Windows::Forms::Button^ Chapter1_E2;













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
			this->HomeTable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label_Filter = (gcnew System::Windows::Forms::Label());
			this->label_Equation = (gcnew System::Windows::Forms::Label());
			this->label_Topic = (gcnew System::Windows::Forms::Label());
			this->TopicListBox = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Chapter1_button = (gcnew System::Windows::Forms::Button());
			this->Chapter2_button = (gcnew System::Windows::Forms::Button());
			this->Chapter3_button = (gcnew System::Windows::Forms::Button());
			this->Chapter4_button = (gcnew System::Windows::Forms::Button());
			this->Chapter5_button = (gcnew System::Windows::Forms::Button());
			this->EquationListBox = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Chapter1_E1 = (gcnew System::Windows::Forms::Button());
			this->Chapter1_E2 = (gcnew System::Windows::Forms::Button());
			this->Chapter5_panel = (gcnew System::Windows::Forms::Panel());
			this->Chapter5_comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Chapter5_label1 = (gcnew System::Windows::Forms::Label());
			this->label_HomeHead = (gcnew System::Windows::Forms::Label());
			this->HomeTable->SuspendLayout();
			this->TopicListBox->SuspendLayout();
			this->EquationListBox->SuspendLayout();
			this->Chapter5_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// HomeTable
			// 
			this->HomeTable->ColumnCount = 3;
			this->HomeTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 30)));
			this->HomeTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 40)));
			this->HomeTable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 30)));
			this->HomeTable->Controls->Add(this->label_Filter, 2, 0);
			this->HomeTable->Controls->Add(this->label_Equation, 1, 0);
			this->HomeTable->Controls->Add(this->label_Topic, 0, 0);
			this->HomeTable->Controls->Add(this->TopicListBox, 0, 1);
			this->HomeTable->Controls->Add(this->EquationListBox, 1, 1);
			this->HomeTable->Controls->Add(this->Chapter5_panel, 2, 1);
			this->HomeTable->Location = System::Drawing::Point(12, 59);
			this->HomeTable->Name = L"HomeTable";
			this->HomeTable->RowCount = 2;
			this->HomeTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->HomeTable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 580)));
			this->HomeTable->Size = System::Drawing::Size(860, 626);
			this->HomeTable->TabIndex = 0;
			// 
			// label_Filter
			// 
			this->label_Filter->AutoSize = true;
			this->label_Filter->BackColor = System::Drawing::Color::PowderBlue;
			this->label_Filter->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_Filter->Font = (gcnew System::Drawing::Font(L"Quark", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Filter->Location = System::Drawing::Point(605, 0);
			this->label_Filter->Name = L"label_Filter";
			this->label_Filter->Size = System::Drawing::Size(252, 46);
			this->label_Filter->TabIndex = 2;
			this->label_Filter->Text = L"Filter";
			this->label_Filter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_Equation
			// 
			this->label_Equation->AutoSize = true;
			this->label_Equation->BackColor = System::Drawing::Color::Wheat;
			this->label_Equation->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_Equation->Font = (gcnew System::Drawing::Font(L"Quark", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Equation->Location = System::Drawing::Point(261, 0);
			this->label_Equation->Name = L"label_Equation";
			this->label_Equation->Size = System::Drawing::Size(338, 46);
			this->label_Equation->TabIndex = 1;
			this->label_Equation->Text = L"Equation";
			this->label_Equation->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_Topic
			// 
			this->label_Topic->AutoSize = true;
			this->label_Topic->BackColor = System::Drawing::Color::SandyBrown;
			this->label_Topic->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label_Topic->Font = (gcnew System::Drawing::Font(L"Quark", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Topic->Location = System::Drawing::Point(3, 0);
			this->label_Topic->Name = L"label_Topic";
			this->label_Topic->Size = System::Drawing::Size(252, 46);
			this->label_Topic->TabIndex = 0;
			this->label_Topic->Text = L"Topic";
			this->label_Topic->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TopicListBox
			// 
			this->TopicListBox->AutoScroll = true;
			this->TopicListBox->Controls->Add(this->Chapter1_button);
			this->TopicListBox->Controls->Add(this->Chapter2_button);
			this->TopicListBox->Controls->Add(this->Chapter3_button);
			this->TopicListBox->Controls->Add(this->Chapter4_button);
			this->TopicListBox->Controls->Add(this->Chapter5_button);
			this->TopicListBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TopicListBox->Location = System::Drawing::Point(3, 49);
			this->TopicListBox->Name = L"TopicListBox";
			this->TopicListBox->Size = System::Drawing::Size(252, 574);
			this->TopicListBox->TabIndex = 3;
			// 
			// Chapter1_button
			// 
			this->Chapter1_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chapter1_button->Location = System::Drawing::Point(3, 3);
			this->Chapter1_button->Name = L"Chapter1_button";
			this->Chapter1_button->Size = System::Drawing::Size(245, 75);
			this->Chapter1_button->TabIndex = 0;
			this->Chapter1_button->Text = L"การเคลื่อนที่แนวเส้นตรง";
			this->Chapter1_button->UseVisualStyleBackColor = true;
			this->Chapter1_button->Click += gcnew System::EventHandler(this, &Home::Chapter1_button_Click);
			// 
			// Chapter2_button
			// 
			this->Chapter2_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chapter2_button->Location = System::Drawing::Point(3, 84);
			this->Chapter2_button->Name = L"Chapter2_button";
			this->Chapter2_button->Size = System::Drawing::Size(245, 75);
			this->Chapter2_button->TabIndex = 0;
			this->Chapter2_button->Text = L"การเคลื่อนที่แบบโพเจคไทล์";
			this->Chapter2_button->UseVisualStyleBackColor = true;
			this->Chapter2_button->Click += gcnew System::EventHandler(this, &Home::Chapter2_button_Click);
			// 
			// Chapter3_button
			// 
			this->Chapter3_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chapter3_button->Location = System::Drawing::Point(3, 165);
			this->Chapter3_button->Name = L"Chapter3_button";
			this->Chapter3_button->Size = System::Drawing::Size(245, 75);
			this->Chapter3_button->TabIndex = 0;
			this->Chapter3_button->Text = L"การเคลื่อนที่แบบวงกลม";
			this->Chapter3_button->UseVisualStyleBackColor = true;
			this->Chapter3_button->Click += gcnew System::EventHandler(this, &Home::Chapter3_button_Click);
			// 
			// Chapter4_button
			// 
			this->Chapter4_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chapter4_button->Location = System::Drawing::Point(3, 246);
			this->Chapter4_button->Name = L"Chapter4_button";
			this->Chapter4_button->Size = System::Drawing::Size(245, 75);
			this->Chapter4_button->TabIndex = 0;
			this->Chapter4_button->Text = L"การเคลื่อนที่แบบฮาร์มอนิก";
			this->Chapter4_button->UseVisualStyleBackColor = true;
			this->Chapter4_button->Click += gcnew System::EventHandler(this, &Home::Chapter4_button_Click);
			// 
			// Chapter5_button
			// 
			this->Chapter5_button->Font = (gcnew System::Drawing::Font(L"TH Sarabun New", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chapter5_button->Location = System::Drawing::Point(3, 327);
			this->Chapter5_button->Name = L"Chapter5_button";
			this->Chapter5_button->Size = System::Drawing::Size(245, 75);
			this->Chapter5_button->TabIndex = 0;
			this->Chapter5_button->Text = L"งาน และ พลังงาน";
			this->Chapter5_button->UseVisualStyleBackColor = true;
			this->Chapter5_button->Click += gcnew System::EventHandler(this, &Home::Chapter5_button_Click);
			// 
			// EquationListBox
			// 
			this->EquationListBox->AutoScroll = true;
			this->EquationListBox->Controls->Add(this->Chapter1_E1);
			this->EquationListBox->Controls->Add(this->Chapter1_E2);
			this->EquationListBox->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->EquationListBox->Location = System::Drawing::Point(261, 49);
			this->EquationListBox->Name = L"EquationListBox";
			this->EquationListBox->Size = System::Drawing::Size(338, 574);
			this->EquationListBox->TabIndex = 4;
			// 
			// Chapter1_E1
			// 
			this->Chapter1_E1->Location = System::Drawing::Point(3, 3);
			this->Chapter1_E1->Name = L"Chapter1_E1";
			this->Chapter1_E1->Size = System::Drawing::Size(335, 75);
			this->Chapter1_E1->TabIndex = 0;
			this->Chapter1_E1->Text = L"v = u + at";
			this->Chapter1_E1->UseVisualStyleBackColor = true;
			this->Chapter1_E1->Visible = false;
			// 
			// Chapter1_E2
			// 
			this->Chapter1_E2->Location = System::Drawing::Point(3, 84);
			this->Chapter1_E2->Name = L"Chapter1_E2";
			this->Chapter1_E2->Size = System::Drawing::Size(335, 75);
			this->Chapter1_E2->TabIndex = 1;
			this->Chapter1_E2->Text = L"s = ut + 1/2at2";
			this->Chapter1_E2->UseVisualStyleBackColor = true;
			this->Chapter1_E2->Visible = false;
			// 
			// Chapter5_panel
			// 
			this->Chapter5_panel->Controls->Add(this->Chapter5_comboBox1);
			this->Chapter5_panel->Controls->Add(this->Chapter5_label1);
			this->Chapter5_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Chapter5_panel->Location = System::Drawing::Point(605, 49);
			this->Chapter5_panel->Name = L"Chapter5_panel";
			this->Chapter5_panel->Size = System::Drawing::Size(252, 574);
			this->Chapter5_panel->TabIndex = 5;
			// 
			// Chapter5_comboBox1
			// 
			this->Chapter5_comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Chapter5_comboBox1->Font = (gcnew System::Drawing::Font(L"Quark", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chapter5_comboBox1->FormattingEnabled = true;
			this->Chapter5_comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"s (Displacement)", L"t (Time)", L"v (Velocity)" });
			this->Chapter5_comboBox1->Location = System::Drawing::Point(72, 22);
			this->Chapter5_comboBox1->Name = L"Chapter5_comboBox1";
			this->Chapter5_comboBox1->Size = System::Drawing::Size(158, 33);
			this->Chapter5_comboBox1->TabIndex = 1;
			this->Chapter5_comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::Chapter5_comboBox1_SelectedIndexChanged);
			// 
			// Chapter5_label1
			// 
			this->Chapter5_label1->AutoSize = true;
			this->Chapter5_label1->Font = (gcnew System::Drawing::Font(L"Quark", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chapter5_label1->Location = System::Drawing::Point(16, 26);
			this->Chapter5_label1->Name = L"Chapter5_label1";
			this->Chapter5_label1->Size = System::Drawing::Size(57, 28);
			this->Chapter5_label1->TabIndex = 0;
			this->Chapter5_label1->Text = L"Find :";
			// 
			// label_HomeHead
			// 
			this->label_HomeHead->AutoSize = true;
			this->label_HomeHead->Font = (gcnew System::Drawing::Font(L"Quark", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_HomeHead->Location = System::Drawing::Point(284, 9);
			this->label_HomeHead->Name = L"label_HomeHead";
			this->label_HomeHead->Size = System::Drawing::Size(327, 43);
			this->label_HomeHead->TabIndex = 1;
			this->label_HomeHead->Text = L"PHYSICS CALCULATOR";
			this->label_HomeHead->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 711);
			this->Controls->Add(this->label_HomeHead);
			this->Controls->Add(this->HomeTable);
			this->MaximizeBox = false;
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->HomeTable->ResumeLayout(false);
			this->HomeTable->PerformLayout();
			this->TopicListBox->ResumeLayout(false);
			this->EquationListBox->ResumeLayout(false);
			this->Chapter5_panel->ResumeLayout(false);
			this->Chapter5_panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int Topic = 0;

private: System::Void Chapter1_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Topic = 1;
	Chapter1_E1->Visible = true;
	Chapter1_E2->Visible = true;
}
private: System::Void Chapter2_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Topic = 2;
	Chapter1_E1->Visible = false;
	Chapter1_E2->Visible = false;
}
private: System::Void Chapter3_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Topic = 3;
	Chapter1_E1->Visible = false;
	Chapter1_E2->Visible = false;
}
private: System::Void Chapter4_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Topic = 4;
	Chapter1_E1->Visible = false;
	Chapter1_E2->Visible = false;
}
private: System::Void Chapter5_button_Click(System::Object^ sender, System::EventArgs^ e) {
	Topic = 5;
	Chapter1_E1->Visible = false;
	Chapter1_E2->Visible = false;
}
private: System::Void Chapter5_comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (Chapter5_comboBox1->SelectedItem == "v (Velocity)" && Topic == 1) {
		Chapter1_E1->Visible = true;
		Chapter1_E2->Visible = false;
	}
	else if (Chapter5_comboBox1->SelectedItem == "s (Displacement)" && Topic == 1) {
		Chapter1_E1->Visible = false;
		Chapter1_E2->Visible = true;
	}
	else if (Chapter5_comboBox1->SelectedItem == "t (Time)" && Topic == 1) {
		Chapter1_E1->Visible = true;
		Chapter1_E2->Visible = true;
	}
	/*if (Chapter5_comboBox1->SelectedItem == "v (Velocity)" && Topic == 1) {
		Chapter1_E1->Visible = true;
	}
	else if (Chapter5_comboBox1->SelectedItem == "s (Displacement)" && Topic == 1) {
		Chapter1_E1->Visible = false;
	}*/
	/*s (Displacement)
t (Time)
F (Force)
W (Work)
P (Power)
v (Velocity)*/
}
};
}
