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
	/// Ñâîäêà äëÿ CreateAccountWindow
	/// </summary>
	public ref class CreateAccountWindow : public System::Windows::Forms::Form
	{
	public:
		CreateAccountWindow(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
			this->Text = "Ğåãèñòğàöèÿ àêêàóíòà";
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòğîéêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòÎêíàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áèğşçîâûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êğàñíûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ æ¸ëòûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áåëûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÿçûêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àíãëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áåëîğñóêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->íàñòğîéêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòÎêíàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áèğşçîâûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êğàñíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->æ¸ëòûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áåëûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÿçûêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àíãëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áåëîğñóêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->button1->Text = L"Äàëåå";
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
			this->textBox2->Text = L"Ââåäèòå ïàğîëü";
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
			this->textBox1->Text = L"Ââåäèòå èìÿ ïîëüçîâàòåëÿ";
			this->textBox1->Click += gcnew System::EventHandler(this, &CreateAccountWindow::Textbox1_clear);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->íàñòğîéêèToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(392, 24);
			this->menuStrip1->TabIndex = 17;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// íàñòğîéêèToolStripMenuItem
			// 
			this->íàñòğîéêèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->öâåòÎêíàToolStripMenuItem,
					this->ÿçûêToolStripMenuItem
			});
			this->íàñòğîéêèToolStripMenuItem->Name = L"íàñòğîéêèToolStripMenuItem";
			this->íàñòğîéêèToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->íàñòğîéêèToolStripMenuItem->Text = L"Íàñòğîéêè";
			// 
			// öâåòÎêíàToolStripMenuItem
			// 
			this->öâåòÎêíàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->áèğşçîâûéToolStripMenuItem,
					this->êğàñíûéToolStripMenuItem, this->æ¸ëòûéToolStripMenuItem, this->áåëûéToolStripMenuItem
			});
			this->öâåòÎêíàToolStripMenuItem->Name = L"öâåòÎêíàToolStripMenuItem";
			this->öâåòÎêíàToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->öâåòÎêíàToolStripMenuItem->Text = L"Öâåò îêíà";
			// 
			// áèğşçîâûéToolStripMenuItem
			// 
			this->áèğşçîâûéToolStripMenuItem->Name = L"áèğşçîâûéToolStripMenuItem";
			this->áèğşçîâûéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->áèğşçîâûéToolStripMenuItem->Text = L"Áèğşçîâûé";
			this->áèğşçîâûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::áèğşçîâûéToolStripMenuItem_Click);
			// 
			// êğàñíûéToolStripMenuItem
			// 
			this->êğàñíûéToolStripMenuItem->Name = L"êğàñíûéToolStripMenuItem";
			this->êğàñíûéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->êğàñíûéToolStripMenuItem->Text = L"Êğàñíûé";
			this->êğàñíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::êğàñíûéToolStripMenuItem_Click);
			// 
			// æ¸ëòûéToolStripMenuItem
			// 
			this->æ¸ëòûéToolStripMenuItem->Name = L"æ¸ëòûéToolStripMenuItem";
			this->æ¸ëòûéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->æ¸ëòûéToolStripMenuItem->Text = L"Æ¸ëòûé";
			this->æ¸ëòûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::æ¸ëòûéToolStripMenuItem_Click);
			// 
			// áåëûéToolStripMenuItem
			// 
			this->áåëûéToolStripMenuItem->Name = L"áåëûéToolStripMenuItem";
			this->áåëûéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->áåëûéToolStripMenuItem->Text = L"Áåëûé";
			this->áåëûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::áåëûéToolStripMenuItem_Click);
			// 
			// ÿçûêToolStripMenuItem
			// 
			this->ÿçûêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->àíãëToolStripMenuItem,
					this->áåëîğñóêèéToolStripMenuItem, this->ğóññêèéToolStripMenuItem
			});
			this->ÿçûêToolStripMenuItem->Name = L"ÿçûêToolStripMenuItem";
			this->ÿçûêToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ÿçûêToolStripMenuItem->Text = L"ßçûê";
			// 
			// àíãëToolStripMenuItem
			// 
			this->àíãëToolStripMenuItem->Name = L"àíãëToolStripMenuItem";
			this->àíãëToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->àíãëToolStripMenuItem->Text = L"Àíãëèéñêèé";
			this->àíãëToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::àíãëToolStripMenuItem_Click);
			// 
			// áåëîğñóêèéToolStripMenuItem
			// 
			this->áåëîğñóêèéToolStripMenuItem->Name = L"áåëîğñóêèéToolStripMenuItem";
			this->áåëîğñóêèéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->áåëîğñóêèéToolStripMenuItem->Text = L"Áåëîğññóêèé";
			this->áåëîğñóêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::áåëîğñóêèéToolStripMenuItem_Click);
			// 
			// ğóññêèéToolStripMenuItem
			// 
			this->ğóññêèéToolStripMenuItem->Name = L"ğóññêèéToolStripMenuItem";
			this->ğóññêèéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ğóññêèéToolStripMenuItem->Text = L"Ğóññêèé";
			this->ğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountWindow::ğóññêèéToolStripMenuItem_Click);
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
	short int language_now = 0;//0-ğóñ, 1-àíãë, 2-áåë
	private: System::Void Textbox1_clear(System::Object^ sender, System::EventArgs^ e)
	{
		//î÷èñòêà òåêñòáîêñîâ ïğè èõ íàæàòèè
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
				MessageBox::Show("Îøèáêà ïğè î÷èñòêå textbox");
			}
			else if (language_now == 1)
			{
				MessageBox::Show("Error clearing textbox");
			}
			else if (language_now == 2)
			{
				MessageBox::Show("Îøèáêà ïğè î÷èñòêå textbox");
			}
		}
		
	}
	private: System::Void Textbox2_clear(System::Object^ sender, System::EventArgs^ e)
	{
		//î÷èñòêà òåêñòáîêñîâ ïğè èõ íàæàòèè
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
				MessageBox::Show("Îøèáêà ïğè î÷èñòêå textbox");
			}
			else if (language_now == 1)
			{
				MessageBox::Show("Error clearing textbox");
			}
			else if (language_now == 2)
			{
				MessageBox::Show("Îøèáêà ïğè î÷èñòêå textbox");
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
					StreamWriter^ sw = gcnew StreamWriter(filename, true);//äîçàïèñü
					sw->Write(login_input + ":" + password_input + "\n");
					sw->Close();///
					if (language_now == 0)
					{
						this->label1->Text = "Àêêàóíò ñîçäàí";
					}
					else if (language_now == 1)
					{
						this->label1->Text = "Account created";
					}
					else if (language_now == 2)
					{
						this->label1->Text = "Ğàõóíàê ñòâîğàíû";
					}
					
					break;
				}
				else
				{
					if (language_now == 0)
					{
						this->label1->Text = "Òàêîé àêêàóíò óæå ñóùåñòâóåò, ïğèäóìàéòå äğóãîé";
					}
					else if (language_now == 1)
					{
						this->label1->Text = "Such an account already exists, come up with another one";
					}
					else if (language_now == 2)
					{
						this->label1->Text = "Òàê³ àêà¢íò óæî ³ñíóå, âûäóìàéöå ³íøû";
					}
					break;
				}
			}
		}
		catch (...)
		{
			if (language_now == 0)
			{
				Console::WriteLine("Îøèáêà ïğè çàïèñè äàííûõ èëè ïğè èõ ïğîâåğêå");
			}
			else if (language_now == 1)
			{
				Console::WriteLine("Error writing or validating data");
			}
			else if (language_now == 2)
			{
				Console::WriteLine("Ïàìûëêà ïğû çàï³ñå àáî ïğàâåğöû äàäçåíûõ");
			}
		}

	}
	private: System::Void áèğşçîâûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = System::Drawing::Color::Turquoise; //äëÿ áåğşçîâîãî öâåòà
	}
	private: System::Void êğàñíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = System::Drawing::Color::Red; //äëÿ êğàñíîãî öâåòà
	}
	private: System::Void æ¸ëòûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = System::Drawing::Color::Yellow; //äëÿ æåëòîãî öâåòà
	}
	private: System::Void áåëûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->BackColor = System::Drawing::Color::White; //äëÿ áåëîãî öâåòà
	}
	private: System::Void àíãëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "Registration of an account";
		language_now = 1;
		this->button1->Text = "Next";
		this->textBox1->Text = "Enter username";
		this->textBox2->Text = "Enter password";
		flag_for_textbox = false;
		this->áèğşçîâûéToolStripMenuItem->Text = "Turquoise";
		this->êğàñíûéToolStripMenuItem->Text = "Red";
		this->æ¸ëòûéToolStripMenuItem->Text = "Yellow";
		this->áåëûéToolStripMenuItem->Text = "White";
		this->öâåòÎêíàToolStripMenuItem->Text = "Window color";
		this->ÿçûêToolStripMenuItem->Text = "Language";
		this->íàñòğîéêèToolStripMenuItem->Text = "Settings";
	}
	private: System::Void áåëîğñóêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "Ğıã³ñòğàöûÿ ¢ë³êîâàãà çàï³ñó";
		language_now = 2;
		this->button1->Text = "Äàëåé";
		this->textBox1->Text = "Óâÿäç³öå ³ìÿ êàğûñòàëüí³êà";
		this->textBox2->Text = "Óâÿäç³öå ïàğîëü";
		flag_for_textbox = false;
		this->áèğşçîâûéToolStripMenuItem->Text = "Á³ğşçàâû";
		this->êğàñíûéToolStripMenuItem->Text = "×ûğâîíû";
		this->æ¸ëòûéToolStripMenuItem->Text = "Æî¢òû";
		this->áåëûéToolStripMenuItem->Text = "Áåëû";
		this->öâåòÎêíàToolStripMenuItem->Text = "Êîë³ğ àêíà";
		this->ÿçûêToolStripMenuItem->Text = "Ìîâà";
		this->íàñòğîéêèToolStripMenuItem->Text = "Íàñòğîéê³";
	}
	private: System::Void ğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "Ğåãèñòğàöèÿ àêêàóíòà";
		language_now = 0;
		this->button1->Text = "Äàëåå";
		this->textBox1->Text = "Ââåäèòå èìÿ ïîëüçîâàòåëÿ";
		this->textBox2->Text = "Ââåäèòå ïàğîëü";
		flag_for_textbox = false;
		this->áèğşçîâûéToolStripMenuItem->Text = "Áèğşçîâûé";
		this->êğàñíûéToolStripMenuItem->Text = "Êğàñíûé";
		this->æ¸ëòûéToolStripMenuItem->Text = "Æ¸ëòûé";
		this->áåëûéToolStripMenuItem->Text = "Áåëûé";
		this->öâåòÎêíàToolStripMenuItem->Text = "Öâåò îêíà";
		this->ÿçûêToolStripMenuItem->Text = "ßçûê";
		this->íàñòğîéêèToolStripMenuItem->Text = "Íàñòğîéêè";
	}

};
}
