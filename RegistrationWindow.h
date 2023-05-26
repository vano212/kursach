#pragma once
#include "CreateAccountWindow.h"
#include "MainWindow.h"

namespace kursov {

	using namespace System::Windows::Forms;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для RegistrationWindow
	/// </summary>
	public ref class RegistrationWindow : public System::Windows::Forms::Form
	{
	public:
		RegistrationWindow(void)
		{
			
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->Text = "Вход в аккаунт";
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RegistrationWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветОкнаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ бирюзовыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ красныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ жёлтыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ языкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ англToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белорсукийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветОкнаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->бирюзовыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->красныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->жёлтыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->языкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->англToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белорсукийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(11, 377);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 19);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Регистрация аккаунта";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegistrationWindow::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(96, 175);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(115, 241);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 43);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Далее";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegistrationWindow::check);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 135);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(147, 35);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Введите пароль";
			this->textBox2->Click += gcnew System::EventHandler(this, &RegistrationWindow::Textbox2_clear);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 66);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(147, 35);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"Введите имя пользователя";
			this->textBox1->Click += gcnew System::EventHandler(this, &RegistrationWindow::Textbox1_clear);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->настройкиToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(340, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->цветОкнаToolStripMenuItem,
					this->языкToolStripMenuItem
			});
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			// 
			// цветОкнаToolStripMenuItem
			// 
			this->цветОкнаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->бирюзовыйToolStripMenuItem,
					this->красныйToolStripMenuItem, this->жёлтыйToolStripMenuItem, this->белыйToolStripMenuItem
			});
			this->цветОкнаToolStripMenuItem->Name = L"цветОкнаToolStripMenuItem";
			this->цветОкнаToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->цветОкнаToolStripMenuItem->Text = L"Цвет окна";
			// 
			// бирюзовыйToolStripMenuItem
			// 
			this->бирюзовыйToolStripMenuItem->Name = L"бирюзовыйToolStripMenuItem";
			this->бирюзовыйToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->бирюзовыйToolStripMenuItem->Text = L"Бирюзовый";
			this->бирюзовыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegistrationWindow::бирюзовыйToolStripMenuItem_Click);
			// 
			// красныйToolStripMenuItem
			// 
			this->красныйToolStripMenuItem->Name = L"красныйToolStripMenuItem";
			this->красныйToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->красныйToolStripMenuItem->Text = L"Красный";
			this->красныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegistrationWindow::красныйToolStripMenuItem_Click);
			// 
			// жёлтыйToolStripMenuItem
			// 
			this->жёлтыйToolStripMenuItem->Name = L"жёлтыйToolStripMenuItem";
			this->жёлтыйToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->жёлтыйToolStripMenuItem->Text = L"Жёлтый";
			this->жёлтыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegistrationWindow::жёлтыйToolStripMenuItem_Click);
			// 
			// белыйToolStripMenuItem
			// 
			this->белыйToolStripMenuItem->Name = L"белыйToolStripMenuItem";
			this->белыйToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->белыйToolStripMenuItem->Text = L"Белый";
			this->белыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegistrationWindow::белыйToolStripMenuItem_Click);
			// 
			// языкToolStripMenuItem
			// 
			this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->англToolStripMenuItem,
					this->белорсукийToolStripMenuItem, this->русскийToolStripMenuItem
			});
			this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			this->языкToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->языкToolStripMenuItem->Text = L"Язык";
			// 
			// англToolStripMenuItem
			// 
			this->англToolStripMenuItem->Name = L"англToolStripMenuItem";
			this->англToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->англToolStripMenuItem->Text = L"Английский";
			this->англToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegistrationWindow::англToolStripMenuItem_Click);
			// 
			// белорсукийToolStripMenuItem
			// 
			this->белорсукийToolStripMenuItem->Name = L"белорсукийToolStripMenuItem";
			this->белорсукийToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->белорсукийToolStripMenuItem->Text = L"Белорссукий";
			this->белорсукийToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegistrationWindow::белорсукийToolStripMenuItem_Click);
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegistrationWindow::русскийToolStripMenuItem_Click);
			// 
			// RegistrationWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(340, 407);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"RegistrationWindow";
			this->Text = L"RegistrationWindow";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//String^ filename ="C:\\program_lenguage\\file_with_account.txt";
	String^ filename = "file_with_account.txt";
	bool flag_for_textbox = false;
	short int language_now = 0;//0-рус, 1-англ, 2-бел
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//регистрация нового аккаунта(открывает новое окно)
		CreateAccountWindow^ createwindow = gcnew CreateAccountWindow;
		createwindow->Show();
		
	}	
	private: System::Void check(System::Object^ sender, System::EventArgs^ e)
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
					continue;
				}
			}
			reader->Close();
			if (flag == false)
			{
				if (language_now == 0)
				{
					this->label1->Text = "Проверьте логин или пароль, они введены некорректно";
				}
				else if (language_now == 1)
				{
					this->label1->Text = "Check your login or password, they are entered incorrectly";
				}
				else if (language_now == 2)
				{
					this->label1->Text = "Праверце лагін ці пароль, яны уведзены няправільна";
				}
			}
			else
			{
				//здесь будет код при корректном входе в аккаунт
				if (language_now == 0)
				{
					this->label1->Text = "Вход выполнен";
				}
				else if (language_now == 1)
				{
					this->label1->Text = "Login successful";
				}
				else if (language_now == 2)
				{
					this->label1->Text = "Уваход выкананы";
				}
				MainWindow^ mainwindow = gcnew MainWindow;
				mainwindow->Show();
				this->Hide();
			}
		}
		catch (...)
		{
			if (language_now == 0)
			{
				Console::WriteLine("Ошибка при записи данных или при их проверке");
				//вывод ошибки
			}
			else if (language_now == 1)
			{
				Console::WriteLine("Error writing or validating data");
				//вывод ошибки
			}
			else if (language_now == 2)
			{
				Console::WriteLine("Памылка пры запісе або праверцы дадзеных");
				//вывод ошибки
			}
		}
	}

	private: System::Void Textbox1_clear(System::Object^ sender, System::EventArgs^ e) 
	{
		//очистка текстбоксов при их нажатии
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
				MessageBox::Show("Ошибка при очистке textbox");
			}
			else if (language_now == 1)
			{
				MessageBox::Show("Error clearing textbox");
			}
			else if (language_now == 2)
			{
				MessageBox::Show("Ошибка при очистке textbox");
			}
		}
	}
	private: System::Void Textbox2_clear(System::Object^ sender, System::EventArgs^ e) 
	{
		//очистка текстбоксов при их нажатии
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
				MessageBox::Show("Ошибка при очистке textbox");
			}
			else if (language_now == 1)
			{
				MessageBox::Show("Error clearing textbox");
			}
			else if (language_now == 2)
			{
				MessageBox::Show("Ошибка при очистке textbox");
			}
		}
	}
	private: System::Void бирюзовыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->BackColor = System::Drawing::Color::Turquoise; //для берюзового цвета
	}
	private: System::Void красныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->BackColor = System::Drawing::Color::Red; //для красного цвета
	}
	private: System::Void жёлтыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->BackColor = System::Drawing::Color::Yellow; //для желтого цвета
	}
	private: System::Void белыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->BackColor = System::Drawing::Color::White; //для белого цвета
	}
	private: System::Void англToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		language_now = 1;
		this->Text = "Log in";
		this->button1->Text = "Next";
		this->button2->Text = "Register account";
		this->textBox1->Text = "Enter username";
		this->textBox2->Text = "Enter password";
		flag_for_textbox = false;
		this->бирюзовыйToolStripMenuItem->Text = "Turquoise";
		this->красныйToolStripMenuItem->Text = "Red";
		this->жёлтыйToolStripMenuItem->Text = "Yellow";
		this->белыйToolStripMenuItem->Text = "White";
		this->цветОкнаToolStripMenuItem->Text = "Window color";
		this->языкToolStripMenuItem->Text = "Language";
		this->настройкиToolStripMenuItem->Text = "Settings";
	}
	private: System::Void белорсукийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		language_now = 2;
		this->Text = "Уваход у акаўнт";
		this->button1->Text = "Далей";
		this->button2->Text = "Рэгістрацыя акаўнта";
		this->textBox1->Text = "Увядзіце імя карыстальніка";
		this->textBox2->Text = "Увядзіце пароль";
		flag_for_textbox = false;
		this->бирюзовыйToolStripMenuItem->Text = "Бірюзавы";
		this->красныйToolStripMenuItem->Text = "Чырвоны";
		this->жёлтыйToolStripMenuItem->Text = "Жоўты";
		this->белыйToolStripMenuItem->Text = "Белы";
		this->цветОкнаToolStripMenuItem->Text = "Колір акна";
		this->языкToolStripMenuItem->Text = "Мова";
		this->настройкиToolStripMenuItem->Text = "Настройкі";
	}
	private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		language_now = 0;
		this->Text = "Вход в аккаунт";
		this->button1->Text = "Далее";
		this->button2->Text = "Регистрация аккаунта";
		this->textBox1->Text = "Введите имя пользователя";
		this->textBox2->Text = "Введите пароль";
		flag_for_textbox = false;
		this->бирюзовыйToolStripMenuItem->Text = "Бирюзовый";
		this->красныйToolStripMenuItem->Text = "Красный";
		this->жёлтыйToolStripMenuItem->Text = "Жёлтый";
		this->белыйToolStripMenuItem->Text = "Белый";
		this->цветОкнаToolStripMenuItem->Text = "Цвет окна";
		this->языкToolStripMenuItem->Text = "Язык";
		this->настройкиToolStripMenuItem->Text = "Настройки";
	}
};
}
