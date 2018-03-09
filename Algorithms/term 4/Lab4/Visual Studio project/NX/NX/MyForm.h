#pragma once
#include <iostream>
#include <string.h>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include <vcclr.h>
#include <string>
#include <ctime>

namespace NX {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int y_max, x_max;

	struct Node
	{
		int data;
		Node *left;
		Node *right;
		Node *par;
		int height;
	};

	Node *head;
	Node *selected = NULL;

	int max_a(int a1, int a2)
	{
		int res;
		if (a1 > a2)
			res = a1;
		else
			res = a2;
		return res;
	}
	void get_height(Node *now)
	{
		if (now != NULL)
		{
			int left = -1;
			int right = -1;
			now->height = 0;
			if (now->left != NULL)
			{
				get_height(now->left);
				left = now->left->height;
			};
			if (now->right != NULL)
			{
				get_height(now->right);
				right = now->right->height;
			};
			now->height = max_a(left, right) + 1;
		}
	}

	void add_node(Node *&now, Node *last, int data)
	{
		if (now == NULL)
		{
			now = new Node();
			now->data = data;
			now->left = NULL;
			now->right = NULL;
			now->height = 0;
			now->par = last;
			if (last != NULL)
			{
				if (last->data > data)
					last->left = now;
				else
					last->right = now;
			};
		}
		else
		{
			if (now->data > data)
				add_node(now->left, now, data);
			else
				add_node(now->right, now, data);
		};
	}	
	void sort_recursion(Node *&now, Node *&Last)
	{
		if (now->left != NULL)
		{
			sort_recursion(now->left, now);

		}
	}

	
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button4;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Gray;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 52);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(935, 427);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(789, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Create nx";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 7);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 34);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(189, 7);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 34);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Round";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(513, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(69, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"0";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Minion Pro", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(602, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(181, 34);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Create";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(959, 491);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Graphics^ tgr;
		void draw_line(Graphics^ Gr, Node *now, int height, int center)
		{
			System::Drawing::Pen^ myPen = gcnew Pen(Brushes::DeepSkyBlue);
			myPen->Color = Color::Red;
			if (now != NULL && ((now->right != NULL) || (now->left != NULL)))
			{
				int x1, x2, y1, y2;
				y1 = height * y_max / 6 - y_max / 12;
				y2 = (height + 1) * y_max / 6 - y_max / 12;
				x1 = x_max / Math::Pow(2, height) * center;
				if (now->left != NULL)
				{
					x2 = x_max / Math::Pow(2, height + 1) * (center * 2 - 1);
					draw_line(Gr, now->left, height + 1, center * 2 - 1);
					Gr->DrawLine(myPen, x1, y1, x2, y2);
				};
				if (now->right != NULL)
				{
					x2 = x_max / Math::Pow(2, height + 1) * (center * 2 + 1);
					draw_line(Gr, now->right, height + 1, center * 2 + 1);
					Gr->DrawLine(myPen, x1, y1, x2, y2);
				}
			}
		}
		void draw_node(Graphics^ Gr, Node *now, int height, int center)
		{
			if (now != NULL)
			{
				SolidBrush^ myBrush = gcnew SolidBrush(Color::Orange);
				myBrush->Color = Color::Aqua;
				Pen^ myPen = gcnew Pen(Color::Red);
				myPen->Width = 2;
				if (now == selected)
				{
					myPen->Width = 4;
					myPen->Color = Color::Black;
				};


				int x, y;
				y = height * y_max / 6 - y_max / 12;
				x = x_max / Math::Pow(2, height) * center;

				if (now->left != NULL)
					draw_node(Gr, now->left, height + 1, center * 2 - 1);
				if (now->right != NULL)
					draw_node(Gr, now->right, height + 1, center * 2 + 1);
				Gr->FillEllipse(myBrush, x - 20, y - 20, 40, 40);
				Gr->DrawEllipse(myPen, x - 20, y - 20, 40, 40);
				myBrush->Color = Color::Black;
				Gr->DrawString(now->data.ToString(), button1->Font, myBrush, x - 12, y - 8);
				Gr->DrawString(now->height.ToString(), textBox1->Font, myBrush, x + 10, y - 10);
			}
		}

		Node *select_node(Node *now, int height, int center, int x0,int y0)
		{
			Node *res = NULL;

			if (now != NULL)
			{
				int x, y;
				y = height * y_max / 6 - y_max / 12;
				x = x_max / Math::Pow(2, height) * center;

				if (x0 > x - 20 && x0 < x + 20 && y0 > y - 20 && y0 < y + 20)
					res = now;

				if (now->left != NULL && res == NULL)
					res = select_node(now->left, height + 1, center * 2 - 1, x0, y0);
				if (now->right != NULL && res == NULL)
					res = select_node(now->right, height + 1, center * 2 + 1, x0, y0);
			};
			return res;
		};
		

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	head = NULL;
	for (int i = 1; i <= 30; i++)
		add_node(head, NULL, rand()%100);
	get_height(head);
	tgr = this->pictureBox1->CreateGraphics();
	tgr->Clear(Color::Gray);
	draw_line(tgr, head, 1, 1);
	draw_node(tgr, head, 1, 1);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	add_node(head, NULL, System::Convert::ToInt16(textBox1->Text));
	tgr = this->pictureBox1->CreateGraphics();
	tgr->Clear(Color::Gray);
	draw_line(tgr, head, 1, 1);
	draw_node(tgr, head, 1, 1);
}
Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	x_max = pictureBox1->Width;
	y_max = pictureBox1->Height;
	srand(time(NULL));
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	selected = select_node(head, 1, 1, e->X, e->Y);
	tgr = this->pictureBox1->CreateGraphics();
	tgr->Clear(Color::Gray);
	draw_line(tgr, head, 1, 1);
	draw_node(tgr, head, 1, 1);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//round_recursion(head,0,'L');
	tgr = this->pictureBox1->CreateGraphics();
	tgr->Clear(Color::Gray);
	draw_line(tgr, head, 1, 1);
	draw_node(tgr, head, 1, 1);
}
};


};
