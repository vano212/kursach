#pragma once
#include <string>
#include "MainWindow.h"

namespace kursov {

	

	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CreateAccountWindow
	/// </summary>
	public ref class CreateAccountWindow : public System::Windows::Forms::Form
	{
	public:
		int language_now;
		CreateAccountWindow(int language)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->Text = "Регистрация аккаунта";
			this->language_now = language;
			if (language == 0)
			{
				this->русскийToolStripMenuItem->PerformClick();
			}
			else if (language == 1)
			{
				this->англToolStripMenuItem->PerformClick();
			}
			else if (language == 2)
			{
				this->белорсукийToolStripMenuItem->PerformClick();
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(111, 210);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(192, 346);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 53);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Далее";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateAccountWindow::check_and_creat);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(164, 149);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(195, 42);
			this->textBox2->TabIndex = 11;
			this->textBox2->Text = L"Введите пароль";
			this->textBox2->Click += gcnew System::EventHandler(this, &CreateAccountWindow::Textbox2_clear);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(164, 64);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(195, 42);
			this->textBox1->TabIndex = 10;
			this->textBox1->Text = L"Введите имя пользователя";
			this->textBox1->Click += gcnew System::EventHandler(this, &CreateAccountWindow::Textbox1_clear);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->настройкиToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(523, 28);
			this->menuStrip1->TabIndex = 17;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->цветОкнаToolStripMenuItem,
					this->языкToolStripMenuItem
			});
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			// 
			// цветОкнаToolStripMenuItem
			// 
			this->цветОкнаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->бирюзовыйToolStripMenuItem,
					this->красныйToolStripMenuItem, this->жёлтыйToolStripMenuItem, this->белыйToolStripMenuItem
			});
			this->цветОкнаToolStripMenuItem->Name = L"цветОкнаToolStripMenuItem";
			this->цветОкнаToolStripMenuItem->Size = System::Drawing::Size(162, 26);
			this->цветОкнаToolStripMenuItem->Text = L"Цвет окна";
			// 
			// бирюзовыйToolStripMenuItem
			// 
			this->бирюзовыйToolStripMenuItem->Name = L"бирюзовыйToolStripMenuItem";
			this->бирюзовыйToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->бирюзовыйToolStripMenuItem->Text = L"Бирюзовый";
			this->бирюзовыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::бирюзовыйToolStripMenuItem_Click);
			// 
			// красныйToolStripMenuItem
			// 
			this->красныйToolStripMenuItem->Name = L"красныйToolStripMenuItem";
			this->красныйToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->красныйToolStripMenuItem->Text = L"Красный";
			this->красныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::красныйToolStripMenuItem_Click);
			// 
			// жёлтыйToolStripMenuItem
			// 
			this->жёлтыйToolStripMenuItem->Name = L"жёлтыйToolStripMenuItem";
			this->жёлтыйToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->жёлтыйToolStripMenuItem->Text = L"Жёлтый";
			this->жёлтыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::жёлтыйToolStripMenuItem_Click);
			// 
			// белыйToolStripMenuItem
			// 
			this->белыйToolStripMenuItem->Name = L"белыйToolStripMenuItem";
			this->белыйToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->белыйToolStripMenuItem->Text = L"Белый";
			this->белыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::белыйToolStripMenuItem_Click);
			// 
			// языкToolStripMenuItem
			// 
			this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->англToolStripMenuItem,
					this->белорсукийToolStripMenuItem, this->русскийToolStripMenuItem
			});
			this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			this->языкToolStripMenuItem->Size = System::Drawing::Size(162, 26);
			this->языкToolStripMenuItem->Text = L"Язык";
			// 
			// англToolStripMenuItem
			// 
			this->англToolStripMenuItem->Name = L"англToolStripMenuItem";
			this->англToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->англToolStripMenuItem->Text = L"Английский";
			this->англToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::англToolStripMenuItem_Click);
			// 
			// белорсукийToolStripMenuItem
			// 
			this->белорсукийToolStripMenuItem->Name = L"белорсукийToolStripMenuItem";
			this->белорсукийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->белорсукийToolStripMenuItem->Text = L"Белорссукий";
			this->белорсукийToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::белоруccкийToolStripMenuItem_Click);
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::русскийToolStripMenuItem_Click);
			// 
			// CreateAccountWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 490);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"CreateAccountWindow";
			this->Text = L"CreateAccountWindow";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	String^ filename = "file_with_account.txt";
	bool flag_for_textbox = false;
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
			// Проверяем, существует ли файл
			if (!File::Exists(filename))
			{
				// Если файл не существует, создаем его
				File::Create(filename);
			}

			if (String::IsNullOrEmpty(login_input) || String::IsNullOrEmpty(password_input))
			{
				// Выводим сообщение об ошибке в зависимости от текущего языка
				if (language_now == 0)
				{
					this->label1->Text = "Логин и пароль не должны быть пустыми";
				}
				else if (language_now == 1)
				{
					this->label1->Text = "Login and password should not be empty";
				}
				else if (language_now == 2)
				{
					this->label1->Text = "Лагін і пароль не павінны быць пустымі";
				}

				return; // Выходим из метода
			}

			// Проверяем длину вводимого логина и пароля
			if (login_input->Length < 3 || login_input->Length > 15)
			{
				// Выводим сообщение об ошибке в зависимости от текущего языка
				if (language_now == 0)
				{
					this->label1->Text = "Длина логина должна быть от 3 до 15 символов";
				}
				else if (language_now == 1)
				{
					this->label1->Text = "The length of the login should be between 3 and 15 characters";
				}
				else if (language_now == 2)
				{
					this->label1->Text = "Даўжыня лагіна павінна быць ад 3 да 15 сімвалаў";
				}

				return; // Выходим из метода
			}

			if (password_input->Length < 3 || password_input->Length > 15)
			{
				// Выводим сообщение об ошибке в зависимости от текущего языка
				if (language_now == 0)
				{
					this->label1->Text = "Длина пароля должна быть от 3 до 15 символов";
				}
				else if (language_now == 1)
				{
					this->label1->Text = "The length of the password should be between 3 and 15 characters";
				}
				else if (language_now == 2)
				{
					this->label1->Text = "Даўжыня пароля павінна быць ад 3 да 15 сімвалаў";
				}

				return; // Выходим из метода
			}

			// Проверяем наличие знака ":" в логине или пароле
			if (login_input->Contains(":") || password_input->Contains(":"))
			{
				// Выводим сообщение об ошибке в зависимости от текущего языка
				if (language_now == 0)
				{
					this->label1->Text = "Логин и пароль не должны содержать символ ':'";
				}
				else if (language_now == 1)
				{
					this->label1->Text = "Login and password should not contain the ':' character";
				}
				else if (language_now == 2)
				{
					this->label1->Text = "Лагін і пароль не павінны змяшчаць сімвал ':'";
				}

				return; // Выходим из метода
			}

			// Бесконечный цикл
			while (true)
			{
				// Создаем объект для чтения файла
				StreamReader^ reader = gcnew StreamReader(filename);

				// Читаем файл построчно
				while ((line = reader->ReadLine()) != nullptr)
				{
					// Разделяем строку на логин и пароль по символу ":"
					array<String^>^ tokens = line->Split(':');

					// Проверяем, что строка содержит логин и пароль
					if (tokens->Length != 2)
					{
						// Пропускаем некорректные строки
						continue;
					}

					// Извлекаем логин и пароль из массива
					login = tokens[0];
					password = tokens[1];

					// Проверяем, совпадают ли введенные логин и пароль с данными из файла
					if (login_input == login)
					{
						// Если логин и пароль совпадают, устанавливаем флаг в true и выходим из цикла
						flag = true;
						break;
					}
					else
					{
						flag = false;
						continue;
					}
				}

				// Закрываем объект для чтения файла
				reader->Close();

				// Проверяем значение флага
				if (flag == false)
				{
					// Если флаг равен false, создаем объект для записи в файл
					StreamWriter^ sw = gcnew StreamWriter(filename, true); // дозапись

					// Записываем логин и пароль в файл
					sw->Write(login_input + ":" + password_input + "\n");

					// Закрываем объект для записи
					sw->Close();

					// Выводим сообщение об успешном создании аккаунта в зависимости от текущего языка
					if (language_now == 0)
					{
						this->label1->Text = "Аккаунт создан";
					}
					else if (language_now == 1)
					{
						this->label1->Text = "Account created";
					}
					else if (language_now == 2)
					{
						this->label1->Text = "Рахунак створаны";
					}
					MainWindow^ f = gcnew MainWindow(language_now);
					f->Show();
					this->Hide();
					break;

				}
				else
				{
					// Если флаг равен true, выводим сообщение о существующем аккаунте в зависимости от текущего языка
					if (language_now == 0)
					{
						this->label1->Text = "Такой аккаунт уже существует, придумайте другой";
					}
					else if (language_now == 1)
					{
						this->label1->Text = "Such an account already exists, come up with another one";
					}
					else if (language_now == 2)
					{
						this->label1->Text = "Такі акаўнт ужо існуе, выдумайце іншы";
					}

					break;
				}
			}
		}
		catch (...)
		{
			// Обработка ошибок при записи данных или их проверке

			if (language_now == 0)
			{
				Console::WriteLine("Ошибка при записи данных или при их проверке");
			}
			else if (language_now == 1)
			{
				Console::WriteLine("Error writing or validating data");
			}
			else if (language_now == 2)
			{
				Console::WriteLine("Памылка пры запісе або праверцы дадзеных");
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
		this->Text = "Registration of an account";
		language_now = 1;
		this->button1->Text = "Next";
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
		this->англToolStripMenuItem->Text = "English";
		this->белорсукийToolStripMenuItem->Text = "Belarusian";
		this->русскийToolStripMenuItem->Text = "Russian";
	}
	private: System::Void белоруccкийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "Рэгістрацыя ўліковага запісу";
		language_now = 2;
		this->button1->Text = "Далей";
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
		this->англToolStripMenuItem->Text = "Англійская";
		this->белорсукийToolStripMenuItem->Text = "Беларуская";
		this->русскийToolStripMenuItem->Text = "Руская";
	}
	private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "Регистрация аккаунта";
		language_now = 0;
		this->button1->Text = "Далее";
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
		this->англToolStripMenuItem->Text = "Английский";
		this->белорсукийToolStripMenuItem->Text = "Белорсукий";
		this->русскийToolStripMenuItem->Text = "Русский";
	}

};
}

