#pragma once
#include <fstream>
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
	/// ������ ��� CreateAccountWindow
	/// </summary>
	public ref class CreateAccountWindow : public System::Windows::Forms::Form
	{
	public:
		CreateAccountWindow(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			this->Text = "����������� ��������";
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~CreateAccountWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(123, 161);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(144, 281);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 43);
			this->button1->TabIndex = 12;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateAccountWindow::check_and_creat);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(123, 121);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(147, 35);
			this->textBox2->TabIndex = 11;
			this->textBox2->Text = L"������� ������";
			this->textBox2->Click += gcnew System::EventHandler(this, &CreateAccountWindow::Textbox2_clear);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(123, 52);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(147, 35);
			this->textBox1->TabIndex = 10;
			this->textBox1->Text = L"������� ��� ������������";
			this->textBox1->Click += gcnew System::EventHandler(this, &CreateAccountWindow::Textbox1_clear);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���������ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(392, 24);
			this->menuStrip1->TabIndex = 17;
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
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->��������ToolStripMenuItem->Text = L"���� ����";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::���������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::�������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�����ToolStripMenuItem->Text = L"Ƹ����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::�����ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::�����ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->����ToolStripMenuItem->Text = L"����������";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::����ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->����������ToolStripMenuItem->Text = L"�����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::����������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::�������ToolStripMenuItem_Click);
			// 
			// CreateAccountWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 398);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"CreateAccountWindow";
			this->Text = L"CreateAccountWindow";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//String^ filename ="C:\\program_lenguage\\file_with_account.txt";
	String^ filename = "file_with_account.txt";
	bool flag_for_textbox = false;
	short int language_now = 0;//0-���, 1-����, 2-���
	private: System::Void Textbox1_clear(System::Object^ sender, System::EventArgs^ e)
	{
		//������� ����������� ��� �� �������
		try
		{
			if (flag_for_textbox == false)
			{
				textBox1->Clear();
				textBox2->Clear();
				flag_for_textbox = true;
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
	private: System::Void Textbox2_clear(System::Object^ sender, System::EventArgs^ e)
	{
		//������� ����������� ��� �� �������
		try
		{
			if (flag_for_textbox == false)
			{
				textBox1->Clear();
				textBox2->Clear();
				flag_for_textbox = true;
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
	private: System::Void check_and_creat(System::Object^ sender, System::EventArgs^ e)
	{
		String^ line;
		String^ login;
		String^ password;
		String^ login_input = this->textBox1->Text;
		String^ password_input = this->textBox2->Text;
		bool flag = false;

		try
		{
			if (!File::Exists(filename))
			{
				File::Create(filename);
			}

			while (true)
			{
				StreamReader^ reader = gcnew StreamReader(filename);
				while ((line = reader->ReadLine()) != nullptr)
				{
					array<String^>^ tokens = line->Split(':');
					if (tokens->Length != 2)
					{
						continue;
					}

					login = tokens[0];
					password = tokens[1];

					if (login_input == login && password_input == password)
					{
						flag = true;
						break;
					}
					else
					{
						flag = false;
						continue;
					}
				}
				reader->Close();
				if (flag == false)
				{
					StreamWriter^ sw = gcnew StreamWriter(filename, true);//��������
					sw->Write(login_input + ":" + password_input + "\n");
					sw->Close();///
					if (language_now == 0)
					{
						this->label1->Text = "������� ������";
					}
					else if (language_now == 1)
					{
						this->label1->Text = "Account created";
					}
					else if (language_now == 2)
					{
						this->label1->Text = "������� ��������";
					}
					
					break;
				}
				else
				{
					if (language_now == 0)
					{
						this->label1->Text = "����� ������� ��� ����������, ���������� ������";
					}
					else if (language_now == 1)
					{
						this->label1->Text = "Such an account already exists, come up with another one";
					}
					else if (language_now == 2)
					{
						this->label1->Text = "��� ����� ��� �����, ��������� ����";
					}
					break;
				}
			}
		}
		catch (...)
		{
			if (language_now == 0)
			{
				Console::WriteLine("������ ��� ������ ������ ��� ��� �� ��������");
			}
			else if (language_now == 1)
			{
				Console::WriteLine("Error writing or validating data");
			}
			else if (language_now == 2)
			{
				Console::WriteLine("������� ��� ����� ��� �������� ��������");
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
	private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "Registration of an account";
		language_now = 1;
		this->button1->Text = "Next";
		this->textBox1->Text = "Enter username";
		this->textBox2->Text = "Enter password";
		flag_for_textbox = false;
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
		this->Text = "���������� �������� �����";
		language_now = 2;
		this->button1->Text = "�����";
		this->textBox1->Text = "������� ��� ������������";
		this->textBox2->Text = "������� ������";
		flag_for_textbox = false;
		this->���������ToolStripMenuItem->Text = "��������";
		this->�������ToolStripMenuItem->Text = "�������";
		this->�����ToolStripMenuItem->Text = "����";
		this->�����ToolStripMenuItem->Text = "����";
		this->��������ToolStripMenuItem->Text = "���� ����";
		this->����ToolStripMenuItem->Text = "����";
		this->���������ToolStripMenuItem->Text = "��������";
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "����������� ��������";
		language_now = 0;
		this->button1->Text = "�����";
		this->textBox1->Text = "������� ��� ������������";
		this->textBox2->Text = "������� ������";
		flag_for_textbox = false;
		this->���������ToolStripMenuItem->Text = "���������";
		this->�������ToolStripMenuItem->Text = "�������";
		this->�����ToolStripMenuItem->Text = "Ƹ����";
		this->�����ToolStripMenuItem->Text = "�����";
		this->��������ToolStripMenuItem->Text = "���� ����";
		this->����ToolStripMenuItem->Text = "����";
		this->���������ToolStripMenuItem->Text = "���������";
	}

};
}
