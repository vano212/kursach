#pragma once

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox2_1;
	private: System::Windows::Forms::TextBox^ textBox1_1;
	private: System::Windows::Forms::TextBox^ textBox2_2;
	private: System::Windows::Forms::TextBox^ textBox1_2;
	private: System::Windows::Forms::TextBox^ textBox_distance;
	private: System::Windows::Forms::Label^ label1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_distance = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(447, 155);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::enter_XY);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(88, 155);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(273, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"������� X:";
			this->textBox1->Click += gcnew System::EventHandler(this, &MainWindow::textbox_X);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(88, 219);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(273, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"������� Y:";
			this->textBox2->Click += gcnew System::EventHandler(this, &MainWindow::textbox_Y);
			// 
			// textBox2_1
			// 
			this->textBox2_1->Location = System::Drawing::Point(88, 449);
			this->textBox2_1->Name = L"textBox2_1";
			this->textBox2_1->Size = System::Drawing::Size(273, 20);
			this->textBox2_1->TabIndex = 4;
			this->textBox2_1->Text = L"������� Y1:";
			this->textBox2_1->Click += gcnew System::EventHandler(this, &MainWindow::textbox2_1);
			// 
			// textBox1_1
			// 
			this->textBox1_1->Location = System::Drawing::Point(88, 423);
			this->textBox1_1->Name = L"textBox1_1";
			this->textBox1_1->Size = System::Drawing::Size(273, 20);
			this->textBox1_1->TabIndex = 3;
			this->textBox1_1->Text = L"������� X1:";
			this->textBox1_1->Click += gcnew System::EventHandler(this, &MainWindow::textbox1_1);
			// 
			// textBox2_2
			// 
			this->textBox2_2->Location = System::Drawing::Point(88, 525);
			this->textBox2_2->Name = L"textBox2_2";
			this->textBox2_2->Size = System::Drawing::Size(273, 20);
			this->textBox2_2->TabIndex = 6;
			this->textBox2_2->Text = L"������� Y2:";
			this->textBox2_2->Click += gcnew System::EventHandler(this, &MainWindow::textbox2_2);
			// 
			// textBox1_2
			// 
			this->textBox1_2->Location = System::Drawing::Point(88, 499);
			this->textBox1_2->Name = L"textBox1_2";
			this->textBox1_2->Size = System::Drawing::Size(273, 20);
			this->textBox1_2->TabIndex = 5;
			this->textBox1_2->Text = L"������� X2:";
			this->textBox1_2->Click += gcnew System::EventHandler(this, &MainWindow::textbox1_2);
			// 
			// textBox_distance
			// 
			this->textBox_distance->Location = System::Drawing::Point(88, 590);
			this->textBox_distance->Name = L"textBox_distance";
			this->textBox_distance->Size = System::Drawing::Size(273, 20);
			this->textBox_distance->TabIndex = 7;
			this->textBox_distance->Text = L"������� ���������� ����� ������:";
			this->textBox_distance->Click += gcnew System::EventHandler(this, &MainWindow::textbox_dist);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(88, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"�������� ������ � ����";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(85, 390);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(242, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"�������� ���������� ����� ����� ��������";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(447, 499);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���������ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1573, 24);
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
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->���������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->�����ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->��������ToolStripMenuItem->Text = L"���� ����";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::���������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->�����ToolStripMenuItem->Text = L"Ƹ����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�����ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
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
			this->����ToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->����ToolStripMenuItem->Text = L"����������";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::����ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->����������ToolStripMenuItem->Text = L"�����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::����������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�������ToolStripMenuItem_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1573, 757);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_distance);
			this->Controls->Add(this->textBox2_2);
			this->Controls->Add(this->textBox1_2);
			this->Controls->Add(this->textBox2_1);
			this->Controls->Add(this->textBox1_1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//String^ filename ="C:\\program_lenguage\\file_with_Coordinates.txt";
	String^ filename = "file_with_Coordinates.txt";
	bool flag_for_textbox1 = false;
	bool flag_for_textbox2 = false;
	bool flag_for_textbox3 = false;
	bool flag_for_textbox4 = false;
	short int language_now = 0;//0-���, 1-����, 2-���

	//
	String^ line;
	String^ x1;
	String^ x2;
	String^ y1;
	String^ y2;
	String^ distation;
	//

	private: System::Void enter_XY(System::Object^ sender, System::EventArgs^ e) 
	{
		//�������� �������� ����� ����� � ������ �������� � ����
		try
		{
			bool flag_have1=false;
			
			String^ textwindowX = this->textBox1->Text;
			String^ textwindowY = this->textBox2->Text;

			StreamReader^ reader = gcnew StreamReader(filename);

			while ((line = reader->ReadLine()) != nullptr)
			{
				array<String^>^ tokens = line->Split(':');
				if (tokens->Length != 2)
				{
					continue;
				}
				x1 = tokens[0];
				y1 = tokens[1];

				//���� �� ���������� � �����
				if (textwindowX == x1 && textwindowY == y1)
				{
					flag_have1 = true;
					break;
				}
				else
				{
					continue;
				}
			}
			reader->Close();
			if (flag_have1 == false)
			{
				StreamWriter^ sw = gcnew StreamWriter(filename, true);//��������
				sw->Write(textwindowX + ":" + textwindowY + "\n");
				sw->Close();
			}
		}
		catch (...)
		{
			if (language_now == 0)
			{
				MessageBox::Show("������ ��� ����� � textbox");
				textBox1->Text = "������� X:";
				textBox2->Text = "������� Y:";
			}
			else if (language_now == 1)
			{
				MessageBox::Show("Error when entering into textbox");
				textBox1->Text = "Enter X:";
				textBox2->Text = "Enter Y:";
			}
			else if (language_now == 2)
			{
				MessageBox::Show("������� ��� ������ � textbox");
				textBox1->Text = "������� X:";
				textBox2->Text = "������� Y:";
			}
			flag_for_textbox1 = false;
		}
	}
	private: System::Void textbox_Y(System::Object^ sender, System::EventArgs^ e) 
	{
		//������� ����������� ��� �� �������
		try
		{
			if (flag_for_textbox1 == false)
			{
				textBox1->Clear();
				textBox2->Clear();
				flag_for_textbox1 = true;
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
	private: System::Void textbox_X(System::Object^ sender, System::EventArgs^ e) 
	{
		//������� ����������� ��� �� �������
		try
		{
			if (flag_for_textbox1 == false)
			{
				textBox1->Clear();
				textBox2->Clear();
				flag_for_textbox1 = true;
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
		this->button1->Text = "����";
		this->button2->Text = "����";
		this->textBox1->Text = "������� X:";
		this->textBox2->Text = "������� Y:";
		this->textBox1_1->Text = "������� X1:";
		this->textBox1_2->Text = "������� X2:";
		this->textBox2_1->Text = "������� Y1:";
		this->textBox2_2->Text = "������� Y2:";
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
		this->button1->Text = "Input";
		this->button2->Text = "Input";
		this->textBox1->Text = "Enter X:";
		this->textBox2->Text = "Enter Y:";
		this->textBox1_1->Text = "Enter X1:";
		this->textBox1_2->Text = "Enter X2:";
		this->textBox2_1->Text = "Enter Y1:";
		this->textBox2_2->Text = "Enter Y2:";
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
		this->button1->Text = "����";
		this->button2->Text = "����";
		this->textBox1->Text = "������� X:";
		this->textBox2->Text = "������� Y:";
		this->textBox1_1->Text = "������� X1:";
		this->textBox1_2->Text = "������� X2:";
		this->textBox2_1->Text = "������� Y1:";
		this->textBox2_2->Text = "������� Y2:";
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
	private: System::Void textbox1_2(System::Object^ sender, System::EventArgs^ e) 
	{
		//������� ����������� ��� �� �������
		try
		{
			if (flag_for_textbox3 == false)
			{
				textBox1_2->Clear();
				textBox2_2->Clear();
				flag_for_textbox3 = true;
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
	private: System::Void textbox2_2(System::Object^ sender, System::EventArgs^ e) 
	{
		//������� ����������� ��� �� �������
		try
		{
			if (flag_for_textbox3 == false)
			{
				textBox1_2->Clear();
				textBox2_2->Clear();
				flag_for_textbox3 = true;
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
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//�������� �������� ����� ����� � ������ �������� � ����
		try
		{
			bool flag_have2 = false;
			String^ textwindowX1_1 = this->textBox1_1->Text;
			String^ textwindowX1_2 = this->textBox1_2->Text;
			String^ textwindowY2_1 = this->textBox2_1->Text;
			String^ textwindowX2_2 = this->textBox2_2->Text;
			String^ textwindow_distance = this->textBox_distance->Text;

			x1 = textwindowX1_1;
			y1 = textwindowY2_1;
			x2 = textwindowX1_2;
			y2 = textwindowX2_2;
			distation = textwindow_distance;

			StreamReader^ reader = gcnew StreamReader(filename);

			while ((line = reader->ReadLine()) != nullptr)
			{
				array<String^>^ tokens = line->Split(':');
				if (tokens->Length != 5)
				{
					continue;
				}
				String^ x1_find = tokens[0];
				String^ y1_find = tokens[1];
				String^ x2_find = tokens[2];
				String^ y2_find = tokens[3];
				String^ distation_find = tokens[4];

				//
				if (x1_find == x1 && x2_find == x2 && y1_find == y1 && y2_find == y2 && distation_find == distation)
				{
					flag_have2 = true;
					break;
				}
				else
				{
					continue;
				}
			}
			reader->Close();
			if (flag_have2 == false)
			{
				StreamWriter^ sw = gcnew StreamWriter(filename, true);//��������
				sw->Write(textwindowX1_1 + ":" + textwindowX1_2 + ":" + textwindowY2_1 + ":" + textwindowX2_2 + ":" + textwindow_distance + "\n");
				sw->Close();
			}
		}
		catch (...)
		{
			if (language_now == 0)
			{
				MessageBox::Show("������ ��� ����� � ��������� ����");
				textBox1_1->Text = "������� X1:";
				textBox2_1->Text = "������� Y1:";
				textBox1_2->Text = "������� X2:";
				textBox2_2->Text = "������� Y2:";
				textBox_distance->Text = "������� ���������� ����� ������:";
			}
			else if (language_now == 1)
			{
				MessageBox::Show("Error when entering into textbox");
				textBox1_1->Text = "Enter X1:";
				textBox2_1->Text = "Enter Y1:";
				textBox1_2->Text = "Enter X2:";
				textBox2_2->Text = "Enter Y2:";
				textBox_distance->Text = "Enter distance between houses:";
			}
			else if (language_now == 2)
			{
				MessageBox::Show("������� ��� ������ � ��������� ����");
				textBox1_1->Text = "������� X1:";
				textBox2_1->Text = "������� Y1:";
				textBox1_2->Text = "������� X2:";
				textBox2_2->Text = "������� Y2:";
				textBox_distance->Text = "������� ���������� ���� �����:";
			}
			flag_for_textbox1 = false;
		}
	}

};
}

class Graph
{
private:
	double x1;
	double x2;
	double y1;
	double y2;
	double distation;
public:
	//// ������� ��� ���������� �������
	//void addVertex(double x, double y) {
	//	Vertex v = { x, y };
	//	vertices.push_back(v);
	//}

	//// ������� ��� ���������� ����� ����� ����� ���������
	//void addEdge(int v1, int v2, double weight) {
	//	adjacencyMatrix[v1][v2] = weight;
	//	adjacencyMatrix[v2][v1] = weight;
	//}

	//// ������� ��� ���������� ���������� ����� ����� ���������
	//double distance(int v1, int v2) {
	//	double dx = vertices[v1].x - vertices[v2].x;
	//	double dy = vertices[v1].y - vertices[v2].y;
	//	return sqrt(dx * dx + dy * dy);
	//}
};
