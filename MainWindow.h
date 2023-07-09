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
	/// Сводка для MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		int language_now;
		MainWindow(int language)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->Text = "Основное окно";
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
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;

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
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->настройкиToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1390, 28);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->цветОкнаToolStripMenuItem,
					this->языкToolStripMenuItem, this->справкаToolStripMenuItem
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
			this->цветОкнаToolStripMenuItem->Size = System::Drawing::Size(224, 26);
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
			this->языкToolStripMenuItem->Size = System::Drawing::Size(224, 26);
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
			this->белорсукийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::белорссукийToolStripMenuItem_Click);
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::русскийToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::справкаToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(707, 277);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(193, 28);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Найти краткий путь";
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
			this->label3->Text = L"Введите вершину 1:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(99, 200);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 16);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Введите вершину 2:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 286);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(242, 16);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Введите расстояния между домами:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(82, 379);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 16);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Количество домов:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(936, 280);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 16);
			this->label7->TabIndex = 27;
			this->label7->Text = L"от:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(936, 324);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 16);
			this->label8->TabIndex = 28;
			this->label8->Text = L"до:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(893, 402);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 16);
			this->label9->TabIndex = 29;
			this->label9->Text = L"результат:";
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
			this->label10->Text = L"время затраченное на путь";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(877, 112);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 16);
			this->label11->TabIndex = 34;
			this->label11->Text = L"Расстояние";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(980, 109);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(363, 22);
			this->textBox6->TabIndex = 33;
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::выходToolStripMenuItem_Click);
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
			// Определите параметры отображения графа, такие как размер узлов и цвета
			int nodeSize = 30;
			Color nodeColor = Color::Blue;
			Color edgeColor = Color::Black;
			Pen^ pen = gcnew Pen(edgeColor);
			SolidBrush^ brush = gcnew SolidBrush(nodeColor);

			// Вычислите расстояние между узлами, исходя из размера панели рисования
			int distance = g->VisibleClipBounds.Width / (size + 1);

			// Отобразите узлы графа
			for (int i = 0; i < size; i++)
			{
				int x = (i + 1) * distance;  // Вычислите координаты узла
				int y = 150;  // Фиксированная координата узла по оси Y
				g->FillEllipse(brush, x - nodeSize / 2, y - nodeSize / 2, nodeSize, nodeSize);  // Нарисуйте узел
				g->DrawString((i + 1).ToString(), gcnew System::Drawing::Font("Arial", 12), Brushes::Black, x - 10, y - 10);
			}

			// Отобразите связи между узлами
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					if (graph[i][j] > 0)
					{
						int x1 = (i + 1) * distance;  // Вычислите координаты начального узла связи
						int y1 = 150;  // Фиксированная координата начального узла по оси Y
						int x2 = (j + 1) * distance;  // Вычислите координаты конечного узла связи
						int y2 = 250;  // Фиксированная координата конечного узла по оси Y
						g->DrawLine(pen, x1, y1, x2, y2);  // Нарисуйте связь
						g->DrawString((i + 1).ToString(), gcnew System::Drawing::Font("Arial", 12), Brushes::Black, x1 - 10, y1 - 10);
						g->DrawString((j + 1).ToString(), gcnew System::Drawing::Font("Arial", 12), Brushes::Black, x2 - 10, y2 - 10);
					}
				}
			}
		}
		void dijkstra(int** a, int SIZE, int begin_index, int end_index)
		{
			// Очистить текстовые поля перед запуском алгоритма
			this->textBox4->Clear();
			this->textBox5->Clear();
			this->textBox6->Clear();

			const float speed = 1.5;  // Скорость движения (км/ч)

			long long* d = new long long[SIZE];  // Массив для хранения минимальных расстояний
			long long* v = new long long[SIZE];  // Массив для отметки посещенных узлов
			long long temp, minindex, min;

			// Инициализация массивов
			for (int i = 0; i < SIZE; i++) {
				d[i] = 9223372036854775807;  // Задать начальное расстояние как максимальное
				v[i] = 1;  // Отметить все узлы как непосещенные
			}

			d[begin_index] = 0;  // Начальное расстояние до начального узла равно 0

			do {
				minindex = 9223372036854775807;
				min = 9223372036854775807;

				// Найти узел с минимальным расстоянием из непосещенных узлов
				for (int i = 0; i < SIZE; i++) {
					if ((v[i] == 1) && (d[i] < min)) {
						min = d[i];
						minindex = i;
					}
				}

				// Если найденный узел не равен максимальному значению
				if (minindex != 9223372036854775807) {
					// Обновить расстояния до соседних узлов через текущий узел
					for (int i = 0; i < SIZE; i++) {
						if (a[minindex][i] > 0) {
							temp = min + a[minindex][i];
							if (temp < d[i]) {
								d[i] = temp;
							}
						}
					}
					v[minindex] = 0;  // Пометить узел как посещенный
				}
			} while (minindex < 9223372036854775807);

			long long* ver = new long long[SIZE];  // Массив для хранения пути
			ver[0] = end_index;  // Начать с конечного узла
			int k = 1;
			int weight = d[end_index];  // Получить общее расстояние пути
			this->textBox6->Text = Convert::ToString(weight) + " m.    ( " + Convert::ToString(weight / 1000.0) + " км. )";

			// Рассчитать время в секундах и преобразовать в формат часы:минуты:секунды
			int timeInSeconds = static_cast<int>(weight / speed);
			int hours = timeInSeconds / 3600;
			int minutes = (timeInSeconds % 3600) / 60;
			int seconds = timeInSeconds % 60;
			this->textBox5->Text = hours.ToString() + " час : " + minutes.ToString() + " мин : " + seconds.ToString() + " с";

			// Восстановление пути от конечного узла до начального
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

			// Вывод пути в обратном порядке
			for (int i = k - 1; i >= 0; i--) {
				this->textBox4->Text += Convert::ToString(" " + (ver[i] + 1));
			}

			// Освобождение выделенной памяти
			delete[] d;
			delete[] v;
			delete[] ver;
		}

#pragma endregion
	String^ filename = "file_with_Coordinates.txt";
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
		this->label2->Text = "Добавить расстояние между двумя зданиями";
		this->label3->Text = "Введите вершину 1:";
		this->label4->Text = "Введите вершину 2:";
		this->label5->Text = "Введите расстояния между домами:";
		this->label6->Text = "Количество домов:";
		this->label7->Text = "от:";
		this->label8->Text = "до:";
		this->label9->Text = "результат:";
		this->label10->Text = "время затраченное на путь";
		this->label11->Text = "Расстояние";
		this->button1->Text = "Найти краткий путь";
		this->button2->Text = "Ввод";
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
		this->справкаToolStripMenuItem->Text = "Справка";
		this->выходToolStripMenuItem->Text = "Выход";
	}

	private: System::Void англToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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
		this->справкаToolStripMenuItem->Text = "help";
		this->выходToolStripMenuItem->Text = "Exit";

	}

	private: System::Void белорссукийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "Асноўнае акно";
		language_now = 2;
		this->label2->Text = "Дадаць адлегласць паміж двума будынкамі";
		this->label3->Text = "Увядзіце вершыню 1:";
		this->label4->Text = "Увядзіце вершыню 2:";
		this->label5->Text = "Увядзіце адлегласць паміж домамі:";
		this->label6->Text = "Колькасць домаў:";
		this->label7->Text = "ад:";
		this->label8->Text = "да:";
		this->label9->Text = "вынік:";
		this->label10->Text = "час, затрачаны на шлях";
		this->label11->Text = "Адлегласць";
		this->button1->Text = "Знайсці кароткі шлях";
		this->button2->Text = "Увод";
		this->бирюзовыйToolStripMenuItem->Text = "Бірюзавы";
		this->красныйToolStripMenuItem->Text = "Чырвоны";
		this->жёлтыйToolStripMenuItem->Text = "Жоўты";
		this->белыйToolStripMenuItem->Text = "Белы";
		this->цветОкнаToolStripMenuItem->Text = "Колер акна";
		this->языкToolStripMenuItem->Text = "Мова";
		this->настройкиToolStripMenuItem->Text = "Налады";
		this->англToolStripMenuItem->Text = "Англійская";
		this->белорсукийToolStripMenuItem->Text = "Беларуская";
		this->русскийToolStripMenuItem->Text = "Руская";
		this->справкаToolStripMenuItem->Text = "інструкцыя";
		this->выходToolStripMenuItem->Text = "Выхад";

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			int size_array;

			// Проверка, является ли текстовое поле пустым
			if (this->textBox1->Text == "")
			{
				// Чтение размера массива из файла
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
				// Чтение размера массива из текстового поля
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

			// Проверка, изменилось ли количество вершин
			bool fileExists = File::Exists(filename);
			if (fileExists)
			{
				// Чтение данных из файла
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

			// Создание нового массива для работы
			int** dynamicArray_for_work = new int* [size_array];
			for (int i = 0; i < size_array; i++)
			{
				dynamicArray_for_work[i] = new int[size_array];
			}

			// Создание нового массива для изменений
			int** dynamicArray_for_change = new int* [size_array];
			for (int i = 0; i < size_array; i++)
			{
				dynamicArray_for_change[i] = new int[size_array];
			}

			if (fileExists)
			{
				// Чтение данных из файла и заполнение массивов
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
				// Обработка случая отсутствия файла
				// ...
			}

			// Обработка изменений размера массива
			if (sizeChanged)
			{
				if (oldSizeArray > size_array)
				{
					// Копирование данных из dynamicArray_for_change в dynamicArray_for_work только для нового размера
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
					// Копирование данных из dynamicArray_for_change в dynamicArray_for_work только для старого размера
					for (int i = 0; i < oldSizeArray; i++)
					{
						for (int j = 0; j < oldSizeArray; j++)
						{
							dynamicArray_for_work[i][j] = dynamicArray_for_change[i][j];
						}
					}
				}
			}

			// Обновление массива с новыми значениями из текстовых полей
			String^ graphFromTo = this->textBox1_1->Text;
			String^ graphSourceTarget = this->textBox2_1->Text;
			String^ distance = this->textBox_distance->Text;

			// Проверка ввода
			if (Convert::ToInt32(graphFromTo) <= 0 || Convert::ToInt32(graphSourceTarget) <= 0)
			{
				if (language_now == 0)
				{
					MessageBox::Show("Ошибка: Ввод графа осуществляется с единицы (1)");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("Error: Graph input is performed from one (1)");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("Памылка: Увод графа здзяйсняецца з адзінкі (1)");
				}
				return;
			}
			if (Convert::ToInt32(graphFromTo) > size_array || Convert::ToInt32(graphSourceTarget) > size_array)
			{
				if (language_now == 0)
				{
					MessageBox::Show("Ошибка: Начало или конец графа превышает значение его размерности");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("Error: Start or end of the graph exceeds its size");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("Памылка: Пачатак або канец графа перавышае значэнне яго памеру");
				}
				return;
			}
			if (graphFromTo == graphSourceTarget)
			{
				if (language_now == 0)
				{
					MessageBox::Show("Ввод невозможен так как вы уже находитесь в этой точке");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("Input is not possible as you are already at this point");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("Увод немагчымы, бо вы ўжо знаходзіцеся ў гэтай кропцы");
				}
				return;
			}
			if (Convert::ToInt32(distance) <= 0)
			{
				if (language_now == 0)
				{
					MessageBox::Show("Расстояние между домами не может быть равно 0 или быть отрицательным");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("Distance between houses cannot be equal to 0 or negative");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("Адлегласць паміж домамі не можа быць роўнай 0 або адмоўнай");
				}
				return;
			}

			// Обновление значений в массиве
			dynamicArray_for_work[Convert::ToInt32(graphFromTo) - 1][Convert::ToInt32(graphSourceTarget) - 1] = Convert::ToInt32(distance);
			dynamicArray_for_work[Convert::ToInt32(graphSourceTarget) - 1][Convert::ToInt32(graphFromTo) - 1] = Convert::ToInt32(distance);

			// Запись массива обратно в файл
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

			// Отрисовка графа на панели
			Panel^ graphPanel = this->panel1;
			Graphics^ g = graphPanel->CreateGraphics();
			g->Clear(Color::White);  // Очистка области рисования перед отрисовкой
			DrawGraph(g, dynamicArray_for_work, size_array);

			// Освобождение памяти
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
			// Обработка ошибок при вводе в текстовое поле
			if (language_now == 0)
			{
				MessageBox::Show("Ошибка при вводе в текстовое поле");
			}
			else if (language_now == 1)
			{
				MessageBox::Show("Error when entering into textbox");
			}
			else if (language_now == 2)
			{
				MessageBox::Show("Памылка пры ўводзе ў тэкставае поле");
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			// Чтение размерности графа из файла
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

			// Получение начальной и конечной точек из текстовых полей
			int begin_index, end_index;
			begin_index = Convert::ToInt32(this->textBox2->Text);
			end_index = Convert::ToInt32(this->textBox3->Text);

			// Проверка наличия точек в графе
			if (begin_index == end_index)
			{
				if (language_now == 0)
				{
					MessageBox::Show("Вы уже находитесь в этой точке");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("You are already at this point");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("Вы ўжо знаходзіцеся ў гэтай кропцы");
				}
				this->textBox4->Clear();
				this->textBox5->Clear();
				this->textBox6->Clear();
				return;
			}

			// Проверка ввода начальной и конечной точек
			if (begin_index <= 0 || end_index <= 0)
			{
				if (language_now == 0)
				{
					MessageBox::Show("Ошибка: Начало или конец графа не может быть равен 0 или отрицательному числу");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("Error: Start or end of the graph cannot be equal to or less than 0");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("Памылка: Пачатак або канец графа не можа быць роўны 0 або адмоўным лікам");
				}
				this->textBox4->Clear();
				this->textBox5->Clear();
				this->textBox6->Clear();
				return;
			}

			// Проверка наличия начальной и конечной точек в графе
			if (begin_index > size_array || end_index > size_array)
			{
				if (language_now == 0)
				{
					MessageBox::Show("Ошибка: Начало или конец графа превышает значение его размерности");
				}
				else if (language_now == 1)
				{
					MessageBox::Show("Error: Start or end of the graph exceeds its size");
				}
				else if (language_now == 2)
				{
					MessageBox::Show("Памылка: Пачатак або канец графа перавышае значэнне яго памеру");
				}
				this->textBox4->Clear();
				this->textBox5->Clear();
				this->textBox6->Clear();
				return;
			}

			// Создание двумерного массива для хранения графа
			int** dynamicArray = new int* [size_array];
			for (int i = 0; i < size_array; i++)
			{
				dynamicArray[i] = new int[size_array];
			}

			// Чтение графа из файла и заполнение массива
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

			// Выполнение алгоритма Дейкстры
			dijkstra(dynamicArray, size_array, begin_index - 1, end_index - 1);

			// Освобождение памяти, выделенной для массива
			for (int i = 0; i < size_array; i++)
			{
				delete[] dynamicArray[i];
			}
			delete[] dynamicArray;
		}
		catch (...)
		{
			// Обработка ошибок
		}
	}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
		int size_array = 0;
		bool sizeChanged = false;
		int oldSizeArray = 0;

		// Чтение размерности графа из файла
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
				size_array = oldSizeArray;  // Присваивание значения переменной size_array
			}
		}
		reader->Close();

		// Создание нового массива для работы
		int** dynamicArray_for_work = new int* [size_array];
		for (int i = 0; i < size_array; i++)
		{
			dynamicArray_for_work[i] = new int[size_array];
		}

		// Чтение данных из файла и заполнение массива
		reader = gcnew StreamReader(filename);  // Переиспользуем переменную reader
		int row = 0;
		while ((line = reader->ReadLine()) != nullptr)
		{
			array<String^>^ tokens = line->Split(' ');

			for (int col = 0; col < tokens->Length - 1; col++)  // Изменено условие цикла
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

		// Получение объекта Graphics для панели
		Graphics^ g = panel1->CreateGraphics();

		// Вызов функции отрисовки графа
		DrawGraph(g, dynamicArray_for_work, size_array);

		// Освобождение памяти, выделенной для массива
		for (int i = 0; i < size_array; i++)
		{
			delete[] dynamicArray_for_work[i];
		}
		delete[] dynamicArray_for_work;
	}

	private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Открытие файла справки
		if (language_now == 0)
		{
			system(("start " + std::string("СправкаRU.chm")).c_str());
		}
		else if (language_now == 1)
		{
			system(("start " + std::string("СправкаEN.chm")).c_str());
		}
		else if (language_now == 2)
		{
			system(("start " + std::string("СправкаBL.chm")).c_str());
		}
		
	}

	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		exit(0);
	}
};
}