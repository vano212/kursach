#pragma once
#include <vector>
#include <queue>

namespace kursov {

	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			this->Text = "�������� ����";
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::TextBox^ textBox2_1;
	private: System::Windows::Forms::TextBox^ textBox1_1;


	private: System::Windows::Forms::TextBox^ textBox_distance;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox2_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_distance = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox2_1
			// 
			this->textBox2_1->Location = System::Drawing::Point(286, 197);
			this->textBox2_1->Margin = System::Windows::Forms::Padding(4);
			this->textBox2_1->Name = L"textBox2_1";
			this->textBox2_1->Size = System::Drawing::Size(363, 22);
			this->textBox2_1->TabIndex = 4;
			this->textBox2_1->Click += gcnew System::EventHandler(this, &MainWindow::textbox2_1);
			// 
			// textBox1_1
			// 
			this->textBox1_1->Location = System::Drawing::Point(287, 150);
			this->textBox1_1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1_1->Name = L"textBox1_1";
			this->textBox1_1->Size = System::Drawing::Size(363, 22);
			this->textBox1_1->TabIndex = 3;
			this->textBox1_1->Click += gcnew System::EventHandler(this, &MainWindow::textbox1_1);
			// 
			// textBox_distance
			// 
			this->textBox_distance->Location = System::Drawing::Point(286, 283);
			this->textBox_distance->Margin = System::Windows::Forms::Padding(4);
			this->textBox_distance->Name = L"textBox_distance";
			this->textBox_distance->Size = System::Drawing::Size(363, 22);
			this->textBox_distance->TabIndex = 7;
			this->textBox_distance->Click += gcnew System::EventHandler(this, &MainWindow::textbox_dist);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(239, 109);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(304, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"�������� ���������� ����� ����� ��������";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(724, 150);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 10;
			this->button2->Text = L"����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���������ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1390, 28);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������ToolStripMenuItem,
					this->����ToolStripMenuItem
			});
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->���������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->�����ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(162, 26);
			this->��������ToolStripMenuItem->Text = L"���� ����";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::���������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->�����ToolStripMenuItem->Text = L"Ƹ����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�����ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�����ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(162, 26);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->����ToolStripMenuItem->Text = L"����������";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::����ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->����������ToolStripMenuItem->Text = L"�����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::����������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�������ToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(239, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(446, 16);
			this->label1->TabIndex = 17;
			this->label1->Text = L"�������� ���������� ��� ����� ����� � ��������� �� 0 �� 10000";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(707, 277);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 28);
			this->button1->TabIndex = 18;
			this->button1->Text = L"��������� ����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(243, 376);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 22);
			this->textBox1->TabIndex = 19;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(979, 324);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(363, 22);
			this->textBox3->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(980, 277);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(363, 22);
			this->textBox2->TabIndex = 20;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(980, 376);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(363, 64);
			this->textBox4->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(133, 150);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 16);
			this->label3->TabIndex = 23;
			this->label3->Text = L"������� X:";
			this->label3->Click += gcnew System::EventHandler(this, &MainWindow::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(133, 203);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 16);
			this->label4->TabIndex = 24;
			this->label4->Text = L"������� Y:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 286);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(242, 16);
			this->label5->TabIndex = 25;
			this->label5->Text = L"������� ���������� ����� ������:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(103, 379);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 16);
			this->label6->TabIndex = 26;
			this->label6->Text = L"���������� �����:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(936, 280);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 16);
			this->label7->TabIndex = 27;
			this->label7->Text = L"��:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(936, 324);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 16);
			this->label8->TabIndex = 28;
			this->label8->Text = L"��:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(893, 402);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 16);
			this->label9->TabIndex = 29;
			this->label9->Text = L"���������:";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1390, 453);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_distance);
			this->Controls->Add(this->textBox2_1);
			this->Controls->Add(this->textBox1_1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void dijkstra(int** a, int SIZE, int begin_index, int end_index)
		{
			this->textBox4->Clear();
			int* d = new int[SIZE];
			int* v = new int[SIZE];
			int temp, minindex, min;

			for (int i = 0; i < SIZE; i++) {
				d[i] = 10000;
				v[i] = 1;
			}
			d[begin_index] = 0;

			do {
				minindex = 10000;
				min = 10000;
				for (int i = 0; i < SIZE; i++) {
					if ((v[i] == 1) && (d[i] < min)) {
						min = d[i];
						minindex = i;
					}
				}
				if (minindex != 10000) {
					for (int i = 0; i < SIZE; i++) {
						if (a[minindex][i] > 0) {
							temp = min + a[minindex][i];
							if (temp < d[i]) {
								d[i] = temp;
							}
						}
					}
					v[minindex] = 0;
				}
			} while (minindex < 10000);

			int* ver = new int[SIZE];
			ver[0] = end_index;
			int k = 1;
			int weight = d[end_index];

			while (end_index != begin_index) {
				for (int i = 0; i < SIZE; i++) {
					if (a[i][end_index] != 0) {
						int temp = weight - a[i][end_index];
						if (temp == d[i]) {
							weight = temp;
							end_index = i;
							ver[k] = i;
							k++;
						}
					}
				}
			}

			for (int i = k - 1; i >= 0; i--) {
				this->textBox4->Text += Convert::ToString(" " + (ver[i] + 1));
			}

			delete[] d;
			delete[] v;
			delete[] ver;
		}




#pragma endregion
	//String^ filename ="C:\\program_lenguage\\file_with_Coordinates.txt";
	String^ filename = "file_with_Coordinates.txt";
	bool flag_for_textbox1 = false;
	bool flag_for_textbox2 = false;
	bool flag_for_textbox3 = false;
	bool flag_for_textbox4 = false;
	short int language_now = 0;//0-���, 1-����, 2-���
	//const int size_array = 1000;//�������� � ������� ��� ��������� �������

	
	
	private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = System::Drawing::Color::Turquoise; //��� ���������� �����
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = System::Drawing::Color::Red; //��� �������� �����
	}
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = System::Drawing::Color::Yellow; //��� ������� �����
	}
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = System::Drawing::Color::White; //��� ������ �����
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "�������� ����";
		language_now = 0;
		this->label1->Text = "�������� ������ � ����";
		this->label2->Text = "�������� ���������� ����� ����� ��������";
		this->button2->Text = "����";
		this->textBox1_1->Text = "������� X1:";
		this->textBox2_1->Text = "������� Y1:";
		this->textBox_distance->Text = "������� ���������� ����� ������:";
		flag_for_textbox1 = false;
		flag_for_textbox2 = false;
		flag_for_textbox3 = false;
		flag_for_textbox4 = false;
		this->���������ToolStripMenuItem->Text = "���������";
		this->�������ToolStripMenuItem->Text = "�������";
		this->�����ToolStripMenuItem->Text = "Ƹ����";
		this->�����ToolStripMenuItem->Text = "�����";
		this->��������ToolStripMenuItem->Text = "���� ����";
		this->����ToolStripMenuItem->Text = "����";
		this->���������ToolStripMenuItem->Text = "���������";
	}

	private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "Main window";
		language_now = 1;
		this->label1->Text = "Add building to file";
		this->label2->Text = "Add distance between two buildings";
		this->button2->Text = "Input";
		this->textBox1_1->Text = "Enter X1:";
		this->textBox2_1->Text = "Enter Y1:";
		this->textBox_distance->Text = "Enter distance between houses:";
		flag_for_textbox1 = false;
		flag_for_textbox2 = false;
		flag_for_textbox3 = false;
		flag_for_textbox4 = false;
		this->���������ToolStripMenuItem->Text = "Turquoise";
		this->�������ToolStripMenuItem->Text = "Red";
		this->�����ToolStripMenuItem->Text = "Yellow";
		this->�����ToolStripMenuItem->Text = "White";
		this->��������ToolStripMenuItem->Text = "Window color";
		this->����ToolStripMenuItem->Text = "Language";
		this->���������ToolStripMenuItem->Text = "Settings";
	}
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "������� ����";
		language_now = 2;
		this->label1->Text = "������ ������� � ����";
		this->label2->Text = "������ ���������� ���� ����� ��������";
		this->button2->Text = "����";
		this->textBox1_1->Text = "������� X1:";
		this->textBox2_1->Text = "������� Y1:";
		this->textBox_distance->Text = "������� ���������� ���� �����:";
		flag_for_textbox1 = false;
		flag_for_textbox2 = false;
		flag_for_textbox3 = false;
		flag_for_textbox4 = false;
		this->���������ToolStripMenuItem->Text = "��������";
		this->�������ToolStripMenuItem->Text = "�������";
		this->�����ToolStripMenuItem->Text = "����";
		this->�����ToolStripMenuItem->Text = "����";
		this->��������ToolStripMenuItem->Text = "���� ����";
		this->����ToolStripMenuItem->Text = "����";
		this->���������ToolStripMenuItem->Text = "��������";
	}
	private: System::Void textbox1_1(System::Object^ sender, System::EventArgs^ e) 
	{
		//������� ����������� ��� �� �������
		try
		{
			if (flag_for_textbox2 == false)
			{
				textBox1_1->Clear();
				textBox2_1->Clear();
				flag_for_textbox2 = true;
			}
			
		}
		catch (...)
		{
			if (language_now == 0)
			{
				MessageBox::Show("������ ��� ������� textbox");
			}
			else if (language_now == 1)
			{
				MessageBox::Show("Error clearing textbox");
			}
			else if (language_now == 2)
			{
				MessageBox::Show("������ ��� ������� textbox");
			}
			
		}
	}
	private: System::Void textbox2_1(System::Object^ sender, System::EventArgs^ e) 
	{
		//������� ����������� ��� �� �������
		try
		{
			if (flag_for_textbox2 == false)
			{
				textBox1_1->Clear();
				textBox2_1->Clear();
				flag_for_textbox2 = true;
			}
			
		}
		catch (...)
		{
			if (language_now == 0)
			{
				MessageBox::Show("������ ��� ������� textbox");
			}
			else if (language_now == 1)
			{
				MessageBox::Show("Error clearing textbox");
			}
			else if (language_now == 2)
			{
				MessageBox::Show("������ ��� ������� textbox");
			}
		}
	}
	
	private: System::Void textbox_dist(System::Object^ sender, System::EventArgs^ e) 
	{
		//������� ����������� ��� �� �������
		try
		{
			if (flag_for_textbox4 == false)
			{
				textBox_distance->Clear();
				flag_for_textbox4 = true;
			}
		}
		catch (...)
		{
			if (language_now == 0)
			{
				MessageBox::Show("������ ��� ������� textbox");
			}
			else if (language_now == 1)
			{
				MessageBox::Show("Error clearing textbox");
			}
			else if (language_now == 2)
			{
				MessageBox::Show("������ ��� ������� textbox");
			}
		}
	}
		   ////////////////////////////////
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			int size_array = Convert::ToInt32(this->textBox1->Text);
			if (size_array <= 1)
			{
				MessageBox::Show("Invalid input! Please enter a positive number.");
				return;
			}

			bool sizeChanged = false;
			int oldSizeArray = 0;

			// ��������, ���������� �� ���������� ������
			bool fileExists = File::Exists(filename);
			if (fileExists)
			{
				StreamReader^ reader = gcnew StreamReader(filename);
				String^ line;
				if ((line = reader->ReadLine()) != nullptr)
				{
					array<String^>^ tokens = line->Split(' ');
					oldSizeArray = tokens->Length;
					oldSizeArray--;
					if (size_array != oldSizeArray)
					{
						sizeChanged = true;
					}
				}
				reader->Close();
			}

			// �������� ������ �������
			int** dynamicArray_for_work = new int* [size_array];
			for (int i = 0; i < size_array; i++)
			{
				dynamicArray_for_work[i] = new int[size_array];
			}

			int** dynamicArray_for_change = new int* [size_array];
			for (int i = 0; i < size_array; i++)
			{
				dynamicArray_for_change[i] = new int[size_array];
			}

			if (fileExists)
			{
				// ������ ������ �� �����
				StreamReader^ reader = gcnew StreamReader(filename);
				String^ line;
				int row = 0;
				while ((line = reader->ReadLine()) != nullptr)
				{
					array<String^>^ tokens = line->Split(' ');

					for (int col = 0; col < tokens->Length - 1; col++)  // �������� ������� �����
					{
						int value;
						String^ token = tokens[col];
						value = Convert::ToInt32(token);
						if (value >= 0)
						{
							if (row < size_array && col < size_array)
							{
								dynamicArray_for_work[row][col] = value;
								dynamicArray_for_change[row][col] = value;
							}
						}
						else
						{
							dynamicArray_for_work[row][col] = 0;
							dynamicArray_for_change[row][col] = 0;
						}
					}
					row++;
					//MessageBox::Show(Convert::ToString(tokens[row]));
					if (row == size_array)
					{
						break;
					}
				}
				reader->Close();
			}
			else
			{
				//if file don't live
			}
			if (sizeChanged)
			{
				if (oldSizeArray > size_array)
				{
					// ����������� ������ �� dynamicArray_for_change � dynamicArray_for_work ������ ��� ������ �������
					for (int i = 0; i < size_array; i++)
					{
						for (int j = 0; j < size_array; j++)
						{
							dynamicArray_for_work[i][j] = dynamicArray_for_change[i][j];
						}
					}
				}
				else
				{
					// ����������� ������ �� dynamicArray_for_change � dynamicArray_for_work ������ ��� ������� �������
					for (int i = 0; i < oldSizeArray; i++)
					{
						for (int j = 0; j < oldSizeArray; j++)
						{
							dynamicArray_for_work[i][j] = dynamicArray_for_change[i][j];
						}
					}
				}
			}

			// ���������� ������� � ������ ���������� �� ��������� �����
			String^ textwindowX1_1 = this->textBox1_1->Text;
			String^ textwindowY2_1 = this->textBox2_1->Text;
			String^ textwindow_distance = this->textBox_distance->Text;
			dynamicArray_for_work[Convert::ToInt32(textwindowX1_1) - 1][Convert::ToInt32(textwindowY2_1) - 1] = Convert::ToInt32(textwindow_distance);

			// ������ ������� ������� � ����
			StreamWriter^ sw = gcnew StreamWriter(filename);
			for (int i = 0; i < size_array; i++)
			{
				for (int j = 0; j < size_array; j++)
				{
					if (dynamicArray_for_work[i][j] <= 0)
					{
						sw->Write("0 ");
					}
					else
					{
						sw->Write(dynamicArray_for_work[i][j] + " ");
					}
				}
				sw->WriteLine();
			}
			sw->Close();

			for (int i = 0; i < size_array; i++)
			{
				delete[] dynamicArray_for_work[i];
			}
			delete[] dynamicArray_for_work;

			for (int i = 0; i < size_array; i++)
			{
				delete[] dynamicArray_for_change[i];
			}
			delete[] dynamicArray_for_change;
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message);
		}




		//catch (...)
		//{
		//	// ��������� ������ ��� ����� � ��������� ����
		//	if (language_now == 0)
		//	{
		//		MessageBox::Show("������ ��� ����� � ��������� ����");
		//		textBox1_1->Text = "������� X1:";
		//		textBox2_1->Text = "������� Y1:";
		//		textBox_distance->Text = "������� ���������� ����� ������:";
		//	}
		//	else if (language_now == 1)
		//	{
		//		MessageBox::Show("Error when entering into textbox");
		//		textBox1_1->Text = "Enter X1:";
		//		textBox2_1->Text = "Enter Y1:";
		//		textBox_distance->Text = "Enter distance between houses:";
		//	}
		//	else if (language_now == 2)
		//	{
		//		MessageBox::Show("������� ��� ������ � ��������� ����");
		//		textBox1_1->Text = "������� X1:";
		//		textBox2_1->Text = "������� Y1:";
		//		textBox_distance->Text = "������� ���������� ���� �����:";
		//	}
		//	flag_for_textbox1 = false;
		//}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		StreamReader^ reader1 = gcnew StreamReader(filename);
		String^ line;
		int size_array;
		if ((line = reader1->ReadLine()) != nullptr)
		{
			array<String^>^ tokens = line->Split(' ');
			size_array = tokens->Length;
			size_array--;
		}
		reader1->Close();

		int** dynamicArray = new int* [size_array];
		for (int i = 0; i < size_array; i++)
		{
			dynamicArray[i] = new int[size_array];
		}

		StreamReader^ reader2 = gcnew StreamReader(filename);
		//String^ line;
		int row = 0;
		while ((line = reader2->ReadLine()) != nullptr)
		{
			array<String^>^ tokens = line->Split(' ');

			for (int col = 0; col < tokens->Length - 1; col++)  // �������� ������� �����
			{
				int value;
				String^ token = tokens[col];
				value = Convert::ToInt32(token);
				if (value >= 0)
				{
					if (row < size_array && col < size_array)
					{
						dynamicArray[row][col] = value;
					}
				}
				else
				{
					dynamicArray[row][col] = 0;
				}
			}
			row++;
			//MessageBox::Show(Convert::ToString(tokens[row]));
			if (row == size_array)
			{
				break;
			}
		}
		reader2->Close();

		int begin_index, end_index;
		begin_index = Convert::ToInt32(this->textBox2->Text);
		end_index = Convert::ToInt32(this->textBox3->Text);

		dijkstra(dynamicArray, size_array, begin_index-1, end_index-1);

		for (int i = 0; i < size_array; i++)
		{
			delete[] dynamicArray[i];
		}
		delete[] dynamicArray;
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}


