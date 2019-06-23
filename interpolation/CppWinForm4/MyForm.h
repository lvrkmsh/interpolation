#pragma once
#include "Newton.h"
using namespace std;
namespace CppWinForm4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}
		cliext::vector<double> x, f;
		double a;

	private: System::Windows::Forms::TextBox^  textBox16;



	public:


	public:

	public:
	private: System::Windows::Forms::Label^  label22;

	public:
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label21;

	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  xField;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  f1;
	private: System::Windows::Forms::TextBox^  f3;


	private: System::Windows::Forms::TextBox^  f2;
	private: System::Windows::Forms::TextBox^  f4;
	private: System::Windows::Forms::TextBox^  f5;
	private: System::Windows::Forms::TextBox^  f6;
	private: System::Windows::Forms::TextBox^  f7;





	private: System::Windows::Forms::TextBox^  x2;
	private: System::Windows::Forms::TextBox^  x3;
	private: System::Windows::Forms::TextBox^  x4;
	private: System::Windows::Forms::TextBox^  x5;
	private: System::Windows::Forms::TextBox^  x6;
	private: System::Windows::Forms::TextBox^  x7;






	private: System::Windows::Forms::TextBox^  x1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->xField = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->f1 = (gcnew System::Windows::Forms::TextBox());
			this->f3 = (gcnew System::Windows::Forms::TextBox());
			this->f2 = (gcnew System::Windows::Forms::TextBox());
			this->f4 = (gcnew System::Windows::Forms::TextBox());
			this->f5 = (gcnew System::Windows::Forms::TextBox());
			this->f6 = (gcnew System::Windows::Forms::TextBox());
			this->f7 = (gcnew System::Windows::Forms::TextBox());
			this->x2 = (gcnew System::Windows::Forms::TextBox());
			this->x3 = (gcnew System::Windows::Forms::TextBox());
			this->x4 = (gcnew System::Windows::Forms::TextBox());
			this->x5 = (gcnew System::Windows::Forms::TextBox());
			this->x6 = (gcnew System::Windows::Forms::TextBox());
			this->x7 = (gcnew System::Windows::Forms::TextBox());
			this->x1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(249, 401);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 45);
			this->button1->TabIndex = 76;
			this->button1->Text = L"ВЫЧИСЛИТЬ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(258, 506);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 16);
			this->label21->TabIndex = 75;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(246, 464);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(191, 16);
			this->label20->TabIndex = 73;
			this->label20->Text = L"Полученное значение у:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(258, 361);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(26, 16);
			this->label19->TabIndex = 72;
			this->label19->Text = L"х=";
			// 
			// xField
			// 
			this->xField->Location = System::Drawing::Point(290, 360);
			this->xField->Name = L"xField";
			this->xField->Size = System::Drawing::Size(100, 20);
			this->xField->TabIndex = 71;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(53, 326);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(547, 16);
			this->label18->TabIndex = 70;
			this->label18->Text = L"Введите значение х, для которого хотите вычислить значение функции";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(447, 106);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(35, 16);
			this->label17->TabIndex = 69;
			this->label17->Text = L"у1=";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(447, 135);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(35, 16);
			this->label16->TabIndex = 68;
			this->label16->Text = L"у2=";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(447, 165);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(35, 16);
			this->label15->TabIndex = 67;
			this->label15->Text = L"у3=";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(447, 195);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 16);
			this->label14->TabIndex = 66;
			this->label14->Text = L"у4=";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(447, 225);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(35, 16);
			this->label13->TabIndex = 65;
			this->label13->Text = L"у5=";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(447, 255);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 16);
			this->label12->TabIndex = 64;
			this->label12->Text = L"у6=";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(447, 285);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 16);
			this->label11->TabIndex = 63;
			this->label11->Text = L"у7=";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(44, 135);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 16);
			this->label10->TabIndex = 62;
			this->label10->Text = L"х2=";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(44, 165);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 16);
			this->label9->TabIndex = 61;
			this->label9->Text = L"х3=";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(44, 197);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 16);
			this->label8->TabIndex = 60;
			this->label8->Text = L"х4=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(44, 227);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 16);
			this->label7->TabIndex = 59;
			this->label7->Text = L"х5=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(44, 257);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 16);
			this->label6->TabIndex = 58;
			this->label6->Text = L"х6=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(44, 287);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 16);
			this->label5->TabIndex = 57;
			this->label5->Text = L"х7=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(44, 106);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 16);
			this->label4->TabIndex = 56;
			this->label4->Text = L"х1=";
			// 
			// f1
			// 
			this->f1->Location = System::Drawing::Point(495, 104);
			this->f1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->f1->Name = L"f1";
			this->f1->Size = System::Drawing::Size(114, 20);
			this->f1->TabIndex = 55;
			// 
			// f3
			// 
			this->f3->Location = System::Drawing::Point(495, 161);
			this->f3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->f3->Name = L"f3";
			this->f3->Size = System::Drawing::Size(114, 20);
			this->f3->TabIndex = 54;
			// 
			// f2
			// 
			this->f2->Location = System::Drawing::Point(495, 131);
			this->f2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->f2->Name = L"f2";
			this->f2->Size = System::Drawing::Size(114, 20);
			this->f2->TabIndex = 53;
			// 
			// f4
			// 
			this->f4->Location = System::Drawing::Point(495, 191);
			this->f4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->f4->Name = L"f4";
			this->f4->Size = System::Drawing::Size(114, 20);
			this->f4->TabIndex = 52;
			// 
			// f5
			// 
			this->f5->Location = System::Drawing::Point(495, 221);
			this->f5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->f5->Name = L"f5";
			this->f5->Size = System::Drawing::Size(114, 20);
			this->f5->TabIndex = 51;
			// 
			// f6
			// 
			this->f6->Location = System::Drawing::Point(495, 251);
			this->f6->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->f6->Name = L"f6";
			this->f6->Size = System::Drawing::Size(114, 20);
			this->f6->TabIndex = 50;
			// 
			// f7
			// 
			this->f7->Location = System::Drawing::Point(495, 281);
			this->f7->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->f7->Name = L"f7";
			this->f7->Size = System::Drawing::Size(114, 20);
			this->f7->TabIndex = 49;
			// 
			// x2
			// 
			this->x2->Location = System::Drawing::Point(86, 134);
			this->x2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(114, 20);
			this->x2->TabIndex = 48;
			// 
			// x3
			// 
			this->x3->Location = System::Drawing::Point(87, 161);
			this->x3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->x3->Name = L"x3";
			this->x3->Size = System::Drawing::Size(114, 20);
			this->x3->TabIndex = 47;
			// 
			// x4
			// 
			this->x4->Location = System::Drawing::Point(86, 191);
			this->x4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->x4->Name = L"x4";
			this->x4->Size = System::Drawing::Size(114, 20);
			this->x4->TabIndex = 46;
			// 
			// x5
			// 
			this->x5->Location = System::Drawing::Point(87, 221);
			this->x5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->x5->Name = L"x5";
			this->x5->Size = System::Drawing::Size(114, 20);
			this->x5->TabIndex = 45;
			// 
			// x6
			// 
			this->x6->Location = System::Drawing::Point(86, 251);
			this->x6->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->x6->Name = L"x6";
			this->x6->Size = System::Drawing::Size(114, 20);
			this->x6->TabIndex = 44;
			// 
			// x7
			// 
			this->x7->Location = System::Drawing::Point(86, 283);
			this->x7->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->x7->Name = L"x7";
			this->x7->Size = System::Drawing::Size(114, 20);
			this->x7->TabIndex = 43;
			// 
			// x1
			// 
			this->x1->Location = System::Drawing::Point(86, 106);
			this->x1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(114, 20);
			this->x1->TabIndex = 42;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(447, 80);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 16);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Введите значения у:\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(44, 80);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 16);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Введите значения х:\r\n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(4, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(636, 40);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Данная программа вычисляет значение функции в заданной точке\r\n            с помощ"
				L"ью интерполяционной формулы Ньютона";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(258, 503);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(26, 16);
			this->label22->TabIndex = 78;
			this->label22->Text = L"у=";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(290, 502);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 79;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(660, 559);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->xField);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->f1);
			this->Controls->Add(this->f3);
			this->Controls->Add(this->f2);
			this->Controls->Add(this->f4);
			this->Controls->Add(this->f5);
			this->Controls->Add(this->f6);
			this->Controls->Add(this->f7);
			this->Controls->Add(this->x2);
			this->Controls->Add(this->x3);
			this->Controls->Add(this->x4);
			this->Controls->Add(this->x5);
			this->Controls->Add(this->x6);
			this->Controls->Add(this->x7);
			this->Controls->Add(this->x1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Newton";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ strX1 = x1->Text;
		String^ strX2 = x2->Text;
		String^ strX3 = x3->Text;
		String^ strX4 = x4->Text;
		String^ strX5 = x5->Text;
		String^ strX6 = x6->Text;
		String^ strX7 = x7->Text;
		String^ strF1 = f1->Text;
		String^ strF2 = f2->Text;
		String^ strF3 = f3->Text;
		String^ strF4 = f4->Text;
		String^ strF5 = f5->Text;
		String^ strF6 = f6->Text;
		String^ strF7 = f7->Text;

		String^ strX = xField->Text;

		if (strX1 == "" || strX2 == "" || strX3 == "" || strX4 == "" || strX5 == "" || strX6 == "" || strX7 == "" || strX == "") {
			MessageBox::Show("Заполните значения х ");
			return;
		}
		else if (strF1 == "" || strF2 == "" || strF3 == "" || strF4 == "" || strF5 == "" || strF6 == "" || strF7 == "") {
			MessageBox::Show("Заполните значения у ");
			return;
		}
		double x1, x2, x3, x4, x5, x6, x7;
		double y1, y2, y3, y4, y5, y6, y7;
		double xFind;
		try
		{
			x1 = Convert::ToDouble(strX1);
			x2 = Convert::ToDouble(strX2);
			x3 = Convert::ToDouble(strX3);
			x4 = Convert::ToDouble(strX4);
			x5 = Convert::ToDouble(strX5);
			x6 = Convert::ToDouble(strX6);
			x7 = Convert::ToDouble(strX7);

			y1 = Convert::ToDouble(strF1);
			y2 = Convert::ToDouble(strF2);
			y3 = Convert::ToDouble(strF3);
			y4 = Convert::ToDouble(strF4);
			y5 = Convert::ToDouble(strF5);
			y6 = Convert::ToDouble(strF6);
			y7 = Convert::ToDouble(strF7);

			xFind = Convert::ToDouble(strX);
		}
		catch (FormatException^ e)
		{
			MessageBox::Show("Неверный формат. Вводите только числа");
			return;
		}
		
		if ( x1 <= 0|| x2 <= 0 || x3 <= 0 || x4 <= 0 || x5 <= 0 || x6 <= 0 || x7 <= 0 || xFind <= 0) {
			MessageBox::Show("Допустимы только положительные значения");
			return;
		}
		else if (y1 <= 0 || y2 <= 0 || y3 <= 0 || y4 <= 0 || y5 <= 0 || y6 <= 0 || y7 <= 0) {
			MessageBox::Show("Допустимы только положительные значения");
			return;
		}
		x.insert(x.end(), x1);
		x.insert(x.end(), x2);
		x.insert(x.end(), x3);
		x.insert(x.end(), x4);
		x.insert(x.end(), x5);
		x.insert(x.end(), x6);
		x.insert(x.end(), x7);

		f.insert(f.end(), y1);
		f.insert(f.end(), y2);
		f.insert(f.end(), y3);
		f.insert(f.end(), y4);
		f.insert(f.end(), y5);
		f.insert(f.end(), y6);
		f.insert(f.end(), y7);
		
		Newton^ method = gcnew Newton();
		double res = method->methodNewtow(x, f, xFind);
		textBox16->Text = Convert::ToString(res);
		
	}
};
}