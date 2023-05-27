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
	/// Сводка для MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->Text = "Основное окно";
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

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
			this->textBox2_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_distance = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->textBox2_1->Text = L"Введите Y1:";
			this->textBox2_1->Click += gcnew System::EventHandler(this, &MainWindow::textbox2_1);
			// 
			// textBox1_1
			// 
			this->textBox1_1->Location = System::Drawing::Point(243, 150);
			this->textBox1_1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1_1->Name = L"textBox1_1";
			this->textBox1_1->Size = System::Drawing::Size(363, 22);
			this->textBox1_1->TabIndex = 3;
			this->textBox1_1->Text = L"Введите X1:";
			this->textBox1_1->Click += gcnew System::EventHandler(this, &MainWindow::textbox1_1);
			// 
			// textBox_distance
			// 
			this->textBox_distance->Location = System::Drawing::Point(242, 283);
			this->textBox_distance->Margin = System::Windows::Forms::Padding(4);
			this->textBox_distance->Name = L"textBox_distance";
			this->textBox_distance->Size = System::Drawing::Size(363, 22);
			this->textBox_distance->TabIndex = 7;
			this->textBox_distance->Text = L"Введите расстояния между домами:";
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
			this->label2->Text = L"Добавить расстояние между двумя зданиями";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(724, 150);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Ввод";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->настройкиToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(924, 28);
			this->menuStrip1->TabIndex = 16;
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
			this->бирюзовыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::бирюзовыйToolStripMenuItem_Click);
			// 
			// красныйToolStripMenuItem
			// 
			this->красныйToolStripMenuItem->Name = L"красныйToolStripMenuItem";
			this->красныйToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->красныйToolStripMenuItem->Text = L"Красный";
			this->красныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::красныйToolStripMenuItem_Click);
			// 
			// жёлтыйToolStripMenuItem
			// 
			this->жёлтыйToolStripMenuItem->Name = L"жёлтыйToolStripMenuItem";
			this->жёлтыйToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->жёлтыйToolStripMenuItem->Text = L"Жёлтый";
			this->жёлтыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::жёлтыйToolStripMenuItem_Click);
			// 
			// белыйToolStripMenuItem
			// 
			this->белыйToolStripMenuItem->Name = L"белыйToolStripMenuItem";
			this->белыйToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->белыйToolStripMenuItem->Text = L"Белый";
			this->белыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::белыйToolStripMenuItem_Click);
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
			this->англToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::англToolStripMenuItem_Click);
			// 
			// белорсукийToolStripMenuItem
			// 
			this->белорсукийToolStripMenuItem->Name = L"белорсукийToolStripMenuItem";
			this->белорсукийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->белорсукийToolStripMenuItem->Text = L"Белорссукий";
			this->белорсукийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::белорсукийToolStripMenuItem_Click);
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::русскийToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(239, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(446, 16);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Введённые координаты это целые числа в диапазоне от 0 до 10000";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(707, 277);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 28);
			this->button1->TabIndex = 18;
			this->button1->Text = L"закончить ввод";
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
	short int language_now = 0;//0-рус, 1-англ, 2-бел
	const int size_array = 1000;//Проблема с файлами при изменении размера

	
	
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
	private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "Основное окно";
		language_now = 0;
		this->label1->Text = "Добавить здание в файл";
		this->label2->Text = "Добавить расстояние между двумя зданиями";
		this->button2->Text = "Ввод";
		this->textBox1_1->Text = "Введите X1:";
		this->textBox2_1->Text = "Введите Y1:";
		this->textBox_distance->Text = "Введите расстояния между домами:";
		flag_for_textbox1 = false;
		flag_for_textbox2 = false;
		flag_for_textbox3 = false;
		flag_for_textbox4 = false;
		this->бирюзовыйToolStripMenuItem->Text = "Бирюзовый";
		this->красныйToolStripMenuItem->Text = "Красный";
		this->жёлтыйToolStripMenuItem->Text = "Жёлтый";
		this->белыйToolStripMenuItem->Text = "Белый";
		this->цветОкнаToolStripMenuItem->Text = "Цвет окна";
		this->языкToolStripMenuItem->Text = "Язык";
		this->настройкиToolStripMenuItem->Text = "Настройки";
	}

	private: System::Void англToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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
		this->Text = "Асноўнае акно";
		language_now = 2;
		this->label1->Text = "Дадаць будынак у файл";
		this->label2->Text = "Дадаць адлегласць паміж двума будынкамі";
		this->button2->Text = "Увод";
		this->textBox1_1->Text = "Увядзіце X1:";
		this->textBox2_1->Text = "Увядзіце Y1:";
		this->textBox_distance->Text = "Увядзіце адлегласць паміж домамі:";
		flag_for_textbox1 = false;
		flag_for_textbox2 = false;
		flag_for_textbox3 = false;
		flag_for_textbox4 = false;
		this->бирюзовыйToolStripMenuItem->Text = "Бірюзавы";
		this->красныйToolStripMenuItem->Text = "Чырвоны";
		this->жёлтыйToolStripMenuItem->Text = "Жоўты";
		this->белыйToolStripMenuItem->Text = "Белы";
		this->цветОкнаToolStripMenuItem->Text = "Колір акна";
		this->языкToolStripMenuItem->Text = "Мова";
		this->настройкиToolStripMenuItem->Text = "Настройкі";
	}
	private: System::Void textbox1_1(System::Object^ sender, System::EventArgs^ e) 
	{
		//очистка текстбоксов при их нажатии
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
	private: System::Void textbox2_1(System::Object^ sender, System::EventArgs^ e) 
	{
		//очистка текстбоксов при их нажатии
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
	
	private: System::Void textbox_dist(System::Object^ sender, System::EventArgs^ e) 
	{
		//очистка текстбоксов при их нажатии
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

			// Загрузка данных из файла в массив
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

			// Обновление массива с новыми значениями из текстовых полей
			String^ textwindowX1_1 = this->textBox1_1->Text;
			String^ textwindowY2_1 = this->textBox2_1->Text;
			String^ textwindow_distance = this->textBox_distance->Text;
			dynamicArray[Convert::ToInt32(textwindowX1_1)-1][Convert::ToInt32(textwindowY2_1)-1] = Convert::ToInt32(textwindow_distance);

			// Запись массива обратно в файл
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

			// Освобождение памяти
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
		//	// Обработка ошибок при вводе в текстовое поле
		//	if (language_now == 0)
		//	{
		//		MessageBox::Show("Ошибка при вводе в текстовое поле");
		//		textBox1_1->Text = "Введите X1:";
		//		textBox2_1->Text = "Введите Y1:";
		//		textBox_distance->Text = "Введите расстояние между домами:";
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
		//		MessageBox::Show("Памылка пры ўводзе ў тэкставае поле");
		//		textBox1_1->Text = "Увядзіце X1:";
		//		textBox2_1->Text = "Увядзіце Y1:";
		//		textBox_distance->Text = "Увядзіце адлегласць паміж домамі:";
		//	}
		//	flag_for_textbox1 = false;
		//}
	}

};
}
