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
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox2_1
			// 
			this->textBox2_1->Location = System::Drawing::Point(242, 197);
			this->textBox2_1->Margin = System::Windows::Forms::Padding(4);
			this->textBox2_1->Name = L"textBox2_1";
			this->textBox2_1->Size = System::Drawing::Size(363, 22);
			this->textBox2_1->TabIndex = 4;
			this->textBox2_1->Text = L"������� Y1:";
			this->textBox2_1->Click += gcnew System::EventHandler(this, &MainWindow::textbox2_1);
			// 
			// textBox1_1
			// 
			this->textBox1_1->Location = System::Drawing::Point(243, 150);
			this->textBox1_1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1_1->Name = L"textBox1_1";
			this->textBox1_1->Size = System::Drawing::Size(363, 22);
			this->textBox1_1->TabIndex = 3;
			this->textBox1_1->Text = L"������� X1:";
			this->textBox1_1->Click += gcnew System::EventHandler(this, &MainWindow::textbox1_1);
			// 
			// textBox_distance
			// 
			this->textBox_distance->Location = System::Drawing::Point(242, 283);
			this->textBox_distance->Margin = System::Windows::Forms::Padding(4);
			this->textBox_distance->Name = L"textBox_distance";
			this->textBox_distance->Size = System::Drawing::Size(363, 22);
			this->textBox_distance->TabIndex = 7;
			this->textBox_distance->Text = L"������� ���������� ����� ������:";
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
			this->menuStrip1->Size = System::Drawing::Size(924, 28);
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
			//this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 453);
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
#pragma endregion
	//String^ filename ="C:\\program_lenguage\\file_with_Coordinates.txt";
	String^ filename = "file_with_Coordinates.txt";
	bool flag_for_textbox1 = false;
	bool flag_for_textbox2 = false;
	bool flag_for_textbox3 = false;
	bool flag_for_textbox4 = false;
	short int language_now = 0;//0-���, 1-����, 2-���
	const int size_array = 1000;//�������� � ������� ��� ��������� �������

	
	
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
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			int** dynamicArray = new int* [size_array];
			for (int i = 0; i < size_array; i++)
			{
				dynamicArray[i] = new int[size_array];
			}

			bool fileExists = File::Exists(filename);
			if (!fileExists)
			{
				StreamWriter^ createFile = gcnew StreamWriter(filename);
				for (int i = 0; i < size_array; i++)
				{
					for (int j = 0; j < size_array; j++)
					{
						createFile->Write("0 ");
					}
					createFile->WriteLine();
				}
				createFile->Close();
			}

			// �������� ������ �� ����� � ������
			StreamReader^ reader = gcnew StreamReader(filename);
			String^ line;
			int row = 0;
			while ((line = reader->ReadLine()) != nullptr)
			{
				array<String^>^ tokens = line->Split(' ');
				for (int col = 0; col < size_array; col++)
				{
					int value;
					String^ token = tokens[col];
					value = Convert::ToInt32(token);
					if (value >=0)
					{
						dynamicArray[row][col] = value;
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
			reader->Close();

			// ���������� ������� � ������ ���������� �� ��������� �����
			String^ textwindowX1_1 = this->textBox1_1->Text;
			String^ textwindowY2_1 = this->textBox2_1->Text;
			String^ textwindow_distance = this->textBox_distance->Text;
			dynamicArray[Convert::ToInt32(textwindowX1_1)-1][Convert::ToInt32(textwindowY2_1)-1] = Convert::ToInt32(textwindow_distance);

			// ������ ������� ������� � ����
			StreamWriter^ sw = gcnew StreamWriter(filename);
			for (int i = 0; i < size_array; i++)
			{
				for (int j = 0; j < size_array; j++)
				{
					if (dynamicArray[i][j] < 0)
					{
						sw->Write("0 ");
					}
					else
					{
						sw->Write(dynamicArray[i][j] + " ");
					}
				}
				sw->WriteLine();
			}
			sw->Close();

			// ������������ ������
			for (int i = 0; i < size_array; i++)
			{
				delete[] dynamicArray[i];
			}
			delete[] dynamicArray;
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

};
}
