#pragma once
#include <cstdlib>
#include <string>

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
		int language_now;
		MainWindow(int language)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			this->Text = "�������� ����";
			this->language_now = language;
			if (language == 0)
			{
				this->�������ToolStripMenuItem->PerformClick();
			}
			else if (language == 1)
			{
				this->����ToolStripMenuItem->PerformClick();
			}
			else if (language == 2)
			{
				this->����������ToolStripMenuItem->PerformClick();
			}
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;

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
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			// 
			// textBox1_1
			// 
			this->textBox1_1->Location = System::Drawing::Point(287, 150);
			this->textBox1_1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1_1->Name = L"textBox1_1";
			this->textBox1_1->Size = System::Drawing::Size(363, 22);
			this->textBox1_1->TabIndex = 3;
			// 
			// textBox_distance
			// 
			this->textBox_distance->Location = System::Drawing::Point(286, 283);
			this->textBox_distance->Margin = System::Windows::Forms::Padding(4);
			this->textBox_distance->Name = L"textBox_distance";
			this->textBox_distance->Size = System::Drawing::Size(363, 22);
			this->textBox_distance->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(315, 109);
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1390, 28);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem,
					this->����ToolStripMenuItem, this->�������ToolStripMenuItem
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
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
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
			this->����ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
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
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�����������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�������ToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(707, 277);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 28);
			this->button1->TabIndex = 18;
			this->button1->Text = L"����� ������� ����";
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
			this->label3->Location = System::Drawing::Point(103, 150);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 16);
			this->label3->TabIndex = 23;
			this->label3->Text = L"������� ������� 1:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(99, 200);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 16);
			this->label4->TabIndex = 24;
			this->label4->Text = L"������� ������� 2:";
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
			this->label6->Location = System::Drawing::Point(82, 379);
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
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(0, 474);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1365, 463);
			this->panel1->TabIndex = 30;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainWindow::panel1_Paint);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(979, 65);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(363, 22);
			this->textBox5->TabIndex = 31;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(772, 68);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(189, 16);
			this->label10->TabIndex = 32;
			this->label10->Text = L"����� ����������� �� ����";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(877, 112);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 16);
			this->label11->TabIndex = 34;
			this->label11->Text = L"����������";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(980, 109);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(363, 22);
			this->textBox6->TabIndex = 33;
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�����ToolStripMenuItem_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1390, 949);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->panel1);
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

		void DrawGraph(Graphics^ g, int** graph, int size)
		{
			// ���������� ��������� ����������� �����, ����� ��� ������ ����� � �����
			int nodeSize = 30;
			Color nodeColor = Color::Blue;
			Color edgeColor = Color::Black;
			Pen^ pen = gcnew Pen(edgeColor);
			SolidBrush^ brush = gcnew SolidBrush(nodeColor);

			// ��������� ���������� ����� ������, ������ �� ������� ������ ���������
			int distance = g->VisibleClipBounds.Width / (size + 1);

			// ���������� ���� �����
			for (int i = 0; i < size; i++)
			{
				int x = (i + 1) * distance;  // ��������� ���������� ����
				int y = 150;  // ������������� ���������� ���� �� ��� Y
				g->FillEllipse(brush, x - nodeSize / 2, y - nodeSize / 2, nodeSize, nodeSize);  // ��������� ����
				g->DrawString((i + 1).ToString(), gcnew System::Drawing::Font("Arial", 12), Brushes::Black, x - 10, y - 10);
			}

			// ���������� ����� ����� ������
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (graph[i][j] > 0)
					{
						int x1 = (i + 1) * distance;  // ��������� ���������� ���������� ���� �����
						int y1 = 150;  // ������������� ���������� ���������� ���� �� ��� Y
						int x2 = (j + 1) * distance;  // ��������� ���������� ��������� ���� �����
						int y2 = 250;  // ������������� ���������� ��������� ���� �� ��� Y
						g->DrawLine(pen, x1, y1, x2, y2);  // ��������� �����
						g->DrawString((i + 1).ToString(), gcnew System::Drawing::Font("Arial", 12), Brushes::Black, x1 - 10, y1 - 10);
						g->DrawString((j + 1).ToString(), gcnew System::Drawing::Font("Arial", 12), Brushes::Black, x2 - 10, y2 - 10);
					}
				}
			}
		}
		void dijkstra(int** a, int SIZE, int begin_index, int end_index)
		{
			// �������� ��������� ���� ����� �������� ���������
			this->textBox4->Clear();
			this->textBox5->Clear();
			this->textBox6->Clear();

			const float speed = 1.5;  // �������� �������� (��/�)

			long long* d = new long long[SIZE];  // ������ ��� �������� ����������� ����������
			long long* v = new long long[SIZE];  // ������ ��� ������� ���������� �����
			long long temp, minindex, min;

			// ������������� ��������
			for (int i = 0; i < SIZE; i++) {
				d[i] = 9223372036854775807;  // ������ ��������� ���������� ��� ������������
				v[i] = 1;  // �������� ��� ���� ��� ������������
			}

			d[begin_index] = 0;  // ��������� ���������� �� ���������� ���� ����� 0

			do {
				minindex = 9223372036854775807;
				min = 9223372036854775807;

				// ����� ���� � ����������� ����������� �� ������������ �����
				for (int i = 0; i < SIZE; i++) {
					if ((v[i] == 1) && (d[i] < min)) {
						min = d[i];
						minindex = i;
					}
				}

				// ���� ��������� ���� �� ����� ������������� ��������
				if (minindex != 9223372036854775807) {
					// �������� ���������� �� �������� ����� ����� ������� ����
					for (int i = 0; i < SIZE; i++) {
						if (a[minindex][i] > 0) {
							temp = min + a[minindex][i];
							if (temp < d[i]) {
								d[i] = temp;
							}
						}
					}
					v[minindex] = 0;  // �������� ���� ��� ����������
				}
			} while (minindex < 9223372036854775807);

			long long* ver = new long long[SIZE];  // ������ ��� �������� ����
			ver[0] = end_index;  // ������ � ��������� ����
			int k = 1;
			int weight = d[end_index];  // �������� ����� ���������� ����
			this->textBox6->Text = Convert::ToString(weight) + " m.    ( " + Convert::ToString(weight / 1000.0) + " ��. )";

			// ���������� ����� � �������� � ������������� � ������ ����:������:�������
			int timeInSeconds = static_cast<int>(weight / speed);
			int hours = timeInSeconds / 3600;
			int minutes = (timeInSeconds % 3600) / 60;
			int seconds = timeInSeconds % 60;
			this->textBox5->Text = hours.ToString() + " ��� : " + minutes.ToString() + " ��� : " + seconds.ToString() + " �";

			// �������������� ���� �� ��������� ���� �� ����������
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

			// ����� ���� � �������� �������
			for (int i = k - 1; i >= 0; i--) {
				this->textBox4->Text += Convert::ToString(" " + (ver[i] + 1));
			}

			// ������������ ���������� ������
			delete[] d;
			delete[] v;
			delete[] ver;
		}

#pragma endregion
	String^ filename = "file_with_Coordinates.txt";
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
		this->label2->Text = "�������� ���������� ����� ����� ��������";
		this->label3->Text = "������� ������� 1:";
		this->label4->Text = "������� ������� 2:";
		this->label5->Text = "������� ���������� ����� ������:";
		this->label6->Text = "���������� �����:";
		this->label7->Text = "��:";
		this->label8->Text = "��:";
		this->label9->Text = "���������:";
		this->label10->Text = "����� ����������� �� ����";
		this->label11->Text = "����������";
		this->button1->Text = "����� ������� ����";
		this->button2->Text = "����";
		this->���������ToolStripMenuItem->Text = "���������";
		this->�������ToolStripMenuItem->Text = "�������";
		this->�����ToolStripMenuItem->Text = "Ƹ����";
		this->�����ToolStripMenuItem->Text = "�����";
		this->��������ToolStripMenuItem->Text = "���� ����";
		this->����ToolStripMenuItem->Text = "����";
		this->���������ToolStripMenuItem->Text = "���������";
		this->����ToolStripMenuItem->Text = "����������";
		this->����������ToolStripMenuItem->Text = "����������";
		this->�������ToolStripMenuItem->Text = "�������";
		this->�������ToolStripMenuItem->Text = "�������";
		this->�����ToolStripMenuItem->Text = "�����";
	}

	private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "Main window";
		language_now = 1;
		this->label2->Text = "Add distance between two buildings";
		this->label3->Text = "Enter vertex 1:";
		this->label4->Text = "Enter vertex 2:";
		this->label5->Text = "Enter distances between houses:";
		this->label6->Text = "Number of houses:";
		this->label7->Text = "from:";
		this->label8->Text = "to:";
		this->label9->Text = "result:";
		this->label10->Text = "time spent on the path";
		this->label11->Text = "Distance";
		this->button1->Text = "Find shortest path";
		this->button2->Text = "Input";
		this->���������ToolStripMenuItem->Text = "Turquoise";
		this->�������ToolStripMenuItem->Text = "Red";
		this->�����ToolStripMenuItem->Text = "Yellow";
		this->�����ToolStripMenuItem->Text = "White";
		this->��������ToolStripMenuItem->Text = "Window color";
		this->����ToolStripMenuItem->Text = "Language";
		this->���������ToolStripMenuItem->Text = "Settings";
		this->����ToolStripMenuItem->Text = "English";
		this->����������ToolStripMenuItem->Text = "Belarusian";
		this->�������ToolStripMenuItem->Text = "Russian";
		this->�������ToolStripMenuItem->Text = "help";
		this->�����ToolStripMenuItem->Text = "Exit";

	}

	private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "������� ����";
		language_now = 2;
		this->label2->Text = "������ ���������� ���� ����� ��������";
		this->label3->Text = "������� ������� 1:";
		this->label4->Text = "������� ������� 2:";
		this->label5->Text = "������� ���������� ���� �����:";
		this->label6->Text = "��������� ����:";
		this->label7->Text = "��:";
		this->label8->Text = "��:";
		this->label9->Text = "����:";
		this->label10->Text = "���, ��������� �� ����";
		this->label11->Text = "����������";
		this->button1->Text = "������� ������ ����";
		this->button2->Text = "����";
		this->���������ToolStripMenuItem->Text = "��������";
		this->�������ToolStripMenuItem->Text = "�������";
		this->�����ToolStripMenuItem->Text = "����";
		this->�����ToolStripMenuItem->Text = "����";
		this->��������ToolStripMenuItem->Text = "����� ����";
		this->����ToolStripMenuItem->Text = "����";
		this->���������ToolStripMenuItem->Text = "������";
		this->����ToolStripMenuItem->Text = "���������";
		this->����������ToolStripMenuItem->Text = "����������";
		this->�������ToolStripMenuItem->Text = "������";
		this->�������ToolStripMenuItem->Text = "����������";
		this->�����ToolStripMenuItem->Text = "�����";

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			int size_array;

			// ��������, �������� �� ��������� ���� ������
			if (this->textBox1->Text == "")
			{
				// ������ ������� ������� �� �����
				StreamReader^ reader1 = gcnew StreamReader(filename);
				String^ line;
				if ((line = reader1->ReadLine()) != nullptr)
				{
					array<String^>^ tokens = line->Split(' ');
					size_array = tokens->Length;
					size_array--;
				}
				reader1->Close();
			}
			else
			{
				// ������ ������� ������� �� ���������� ����
				try
				{
					size_array = Convert::ToInt32(this->textBox1->Text);
					if (size_array <= 1)
					{
						MessageBox::Show("Invalid input! Please enter a positive number.");
						return;
					}
				}
				catch (...)
				{
				}
			}

			bool sizeChanged = false;
			int oldSizeArray = 0;

			// ��������, ���������� �� ���������� ������
			bool fileExists = File::Exists(filename);
			if (fileExists)
			{
				// ������ ������ �� �����
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

			// �������� ������ ������� ��� ������
			int** dynamicArray_for_work = new int* [size_array];
			for (int i = 0; i < size_array; i++)
			{
				dynamicArray_for_work[i] = new int[size_array];
			}

			// �������� ������ ������� ��� ���������
			int** dynamicArray_for_change = new int* [size_array];
			for (int i = 0; i < size_array; i++)
			{
				dynamicArray_for_change[i] = new int[size_array];
			}

			if (fileExists)
			{
				// ������ ������ �� ����� � ���������� ��������
				StreamReader^ reader = gcnew StreamReader(filename);
				String^ line;
				int row = 0;
				while ((line = reader->ReadLine()) != nullptr)
				{
					array<String^>^ tokens = line->Split(' ');

					for (int col = 0; col < tokens->Length - 1; col++)
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
					if (row == size_array)
					{
						break;
					}
				}
				reader->Close();
			}
			else
			{
				// ��������� ������ ���������� �����
				// ...
			}

			// ��������� ��������� ������� �������
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
			String^ graphFromTo = this->textBox1_1->Text;
			String^ graphSourceTarget = this->textBox2_1->Text;
			String^ distance = this->textBox_distance->Text;

			// �������� �����
			if (Convert::ToInt32(graphFromTo) <= 0 || Convert::ToInt32(graphSourceTarget) <= 0)
			{
				if (language_now == 0)
				{
					MessageBox::Show("������: ���� ����� �������������� � ������� (1)");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("Error: Graph input is performed from one (1)");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("�������: ���� ����� ������������ � ����� (1)");
				}
				return;
			}
			if (Convert::ToInt32(graphFromTo) > size_array || Convert::ToInt32(graphSourceTarget) > size_array)
			{
				if (language_now == 0)
				{
					MessageBox::Show("������: ������ ��� ����� ����� ��������� �������� ��� �����������");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("Error: Start or end of the graph exceeds its size");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("�������: ������� ��� ����� ����� ��������� �������� ��� ������");
				}
				return;
			}
			if (graphFromTo == graphSourceTarget)
			{
				if (language_now == 0)
				{
					MessageBox::Show("���� ���������� ��� ��� �� ��� ���������� � ���� �����");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("Input is not possible as you are already at this point");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("���� ���������, �� �� ��� ����������� � ����� ������");
				}
				return;
			}
			if (Convert::ToInt32(distance) <= 0)
			{
				if (language_now == 0)
				{
					MessageBox::Show("���������� ����� ������ �� ����� ���� ����� 0 ��� ���� �������������");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("Distance between houses cannot be equal to 0 or negative");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("���������� ���� ����� �� ���� ���� ����� 0 ��� �������");
				}
				return;
			}

			// ���������� �������� � �������
			dynamicArray_for_work[Convert::ToInt32(graphFromTo) - 1][Convert::ToInt32(graphSourceTarget) - 1] = Convert::ToInt32(distance);
			dynamicArray_for_work[Convert::ToInt32(graphSourceTarget) - 1][Convert::ToInt32(graphFromTo) - 1] = Convert::ToInt32(distance);

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

			// ��������� ����� �� ������
			Panel^ graphPanel = this->panel1;
			Graphics^ g = graphPanel->CreateGraphics();
			g->Clear(Color::White);  // ������� ������� ��������� ����� ����������
			DrawGraph(g, dynamicArray_for_work, size_array);

			// ������������ ������
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
		catch (...)
		{
			// ��������� ������ ��� ����� � ��������� ����
			if (language_now == 0)
			{
				MessageBox::Show("������ ��� ����� � ��������� ����");
			}
			else if (language_now == 1)
			{
				MessageBox::Show("Error when entering into textbox");
			}
			else if (language_now == 2)
			{
				MessageBox::Show("������� ��� ������ � ��������� ����");
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			// ������ ����������� ����� �� �����
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

			// ��������� ��������� � �������� ����� �� ��������� �����
			int begin_index, end_index;
			begin_index = Convert::ToInt32(this->textBox2->Text);
			end_index = Convert::ToInt32(this->textBox3->Text);

			// �������� ������� ����� � �����
			if (begin_index == end_index)
			{
				if (language_now == 0)
				{
					MessageBox::Show("�� ��� ���������� � ���� �����");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("You are already at this point");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("�� ��� ����������� � ����� ������");
				}
				this->textBox4->Clear();
				this->textBox5->Clear();
				this->textBox6->Clear();
				return;
			}

			// �������� ����� ��������� � �������� �����
			if (begin_index <= 0 || end_index <= 0)
			{
				if (language_now == 0)
				{
					MessageBox::Show("������: ������ ��� ����� ����� �� ����� ���� ����� 0 ��� �������������� �����");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("Error: Start or end of the graph cannot be equal to or less than 0");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("�������: ������� ��� ����� ����� �� ���� ���� ���� 0 ��� ������� ����");
				}
				this->textBox4->Clear();
				this->textBox5->Clear();
				this->textBox6->Clear();
				return;
			}

			// �������� ������� ��������� � �������� ����� � �����
			if (begin_index > size_array || end_index > size_array)
			{
				if (language_now == 0)
				{
					MessageBox::Show("������: ������ ��� ����� ����� ��������� �������� ��� �����������");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("Error: Start or end of the graph exceeds its size");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("�������: ������� ��� ����� ����� ��������� �������� ��� ������");
				}
				this->textBox4->Clear();
				this->textBox5->Clear();
				this->textBox6->Clear();
				return;
			}

			// �������� ���������� ������� ��� �������� �����
			int** dynamicArray = new int* [size_array];
			for (int i = 0; i < size_array; i++)
			{
				dynamicArray[i] = new int[size_array];
			}

			// ������ ����� �� ����� � ���������� �������
			StreamReader^ reader2 = gcnew StreamReader(filename);
			int row = 0;
			while ((line = reader2->ReadLine()) != nullptr)
			{
				array<String^>^ tokens = line->Split(' ');

				for (int col = 0; col < tokens->Length - 1; col++)
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
				if (row == size_array)
				{
					break;
				}
			}
			reader2->Close();

			// ���������� ��������� ��������
			dijkstra(dynamicArray, size_array, begin_index - 1, end_index - 1);

			// ������������ ������, ���������� ��� �������
			for (int i = 0; i < size_array; i++)
			{
				delete[] dynamicArray[i];
			}
			delete[] dynamicArray;
		}
		catch (...)
		{
			// ��������� ������
		}
	}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
		int size_array = 0;
		bool sizeChanged = false;
		int oldSizeArray = 0;

		// ������ ����������� ����� �� �����
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
				size_array = oldSizeArray;  // ������������ �������� ���������� size_array
			}
		}
		reader->Close();

		// �������� ������ ������� ��� ������
		int** dynamicArray_for_work = new int* [size_array];
		for (int i = 0; i < size_array; i++)
		{
			dynamicArray_for_work[i] = new int[size_array];
		}

		// ������ ������ �� ����� � ���������� �������
		reader = gcnew StreamReader(filename);  // �������������� ���������� reader
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
					}
				}
				else
				{
					dynamicArray_for_work[row][col] = 0;
				}
			}
			row++;
			if (row == size_array)
			{
				break;
			}
		}
		reader->Close();

		// ��������� ������� Graphics ��� ������
		Graphics^ g = panel1->CreateGraphics();

		// ����� ������� ��������� �����
		DrawGraph(g, dynamicArray_for_work, size_array);

		// ������������ ������, ���������� ��� �������
		for (int i = 0; i < size_array; i++)
		{
			delete[] dynamicArray_for_work[i];
		}
		delete[] dynamicArray_for_work;
	}

	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// �������� ����� �������
		if (language_now == 0)
		{
			system(("start " + std::string("�������RU.chm")).c_str());
		}
		else if (language_now == 1)
		{
			system(("start " + std::string("�������EN.chm")).c_str());
		}
		else if (language_now == 2)
		{
			system(("start " + std::string("�������BL.chm")).c_str());
		}
		
	}

	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		exit(0);
	}
};
}