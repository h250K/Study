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

#include "Tree.h" 
#include "Visualizer.h"

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textData;

	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Button^  button_add_n;
	private: System::Windows::Forms::Button^  button_sort;

	private: System::Windows::Forms::Label^  labelAddress;
	private: System::Windows::Forms::Button^  buttonsearch;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textData = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->button_add_n = (gcnew System::Windows::Forms::Button());
			this->button_sort = (gcnew System::Windows::Forms::Button());
			this->labelAddress = (gcnew System::Windows::Forms::Label());
			this->buttonsearch = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->pictureBox1->Location = System::Drawing::Point(1, 83);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(986, 477);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseDown);
			// 
			// textData
			// 
			this->textData->BackColor = System::Drawing::Color::Black;
			this->textData->Font = (gcnew System::Drawing::Font(L"Arial", 42, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textData->ForeColor = System::Drawing::Color::White;
			this->textData->Location = System::Drawing::Point(12, 5);
			this->textData->Name = L"textData";
			this->textData->Size = System::Drawing::Size(107, 72);
			this->textData->TabIndex = 1;
			this->textData->Text = L"0";
			this->textData->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::Blue;
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonAdd->ForeColor = System::Drawing::Color::White;
			this->buttonAdd->Location = System::Drawing::Point(148, 5);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(172, 32);
			this->buttonAdd->TabIndex = 2;
			this->buttonAdd->Text = L"Add key";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Form1::buttonAdd_Click);
			// 
			// button_add_n
			// 
			this->button_add_n->BackColor = System::Drawing::Color::Blue;
			this->button_add_n->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_add_n->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_add_n->ForeColor = System::Drawing::Color::White;
			this->button_add_n->Location = System::Drawing::Point(148, 45);
			this->button_add_n->Name = L"button_add_n";
			this->button_add_n->Size = System::Drawing::Size(172, 32);
			this->button_add_n->TabIndex = 3;
			this->button_add_n->Text = L"Add n random keys";
			this->button_add_n->UseVisualStyleBackColor = false;
			this->button_add_n->Click += gcnew System::EventHandler(this, &Form1::button_add_n_Click);
			// 
			// button_sort
			// 
			this->button_sort->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_sort->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_sort->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_sort->ForeColor = System::Drawing::Color::White;
			this->button_sort->Location = System::Drawing::Point(407, 5);
			this->button_sort->Name = L"button_sort";
			this->button_sort->Size = System::Drawing::Size(75, 72);
			this->button_sort->TabIndex = 4;
			this->button_sort->Text = L"Sort";
			this->button_sort->UseVisualStyleBackColor = false;
			this->button_sort->Click += gcnew System::EventHandler(this, &Form1::button_sort_Click);
			// 
			// labelAddress
			// 
			this->labelAddress->AutoSize = true;
			this->labelAddress->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAddress->ForeColor = System::Drawing::Color::White;
			this->labelAddress->Location = System::Drawing::Point(694, 15);
			this->labelAddress->Name = L"labelAddress";
			this->labelAddress->Size = System::Drawing::Size(117, 42);
			this->labelAddress->TabIndex = 6;
			this->labelAddress->Text = L"Lab 4";
			// 
			// buttonsearch
			// 
			this->buttonsearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonsearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonsearch->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonsearch->ForeColor = System::Drawing::Color::White;
			this->buttonsearch->Location = System::Drawing::Point(326, 5);
			this->buttonsearch->Name = L"buttonsearch";
			this->buttonsearch->Size = System::Drawing::Size(75, 72);
			this->buttonsearch->TabIndex = 7;
			this->buttonsearch->Text = L"Search";
			this->buttonsearch->UseVisualStyleBackColor = false;
			this->buttonsearch->Click += gcnew System::EventHandler(this, &Form1::buttonsearch_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(984, 561);
			this->Controls->Add(this->buttonsearch);
			this->Controls->Add(this->labelAddress);
			this->Controls->Add(this->button_sort);
			this->Controls->Add(this->button_add_n);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textData);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lab 4";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Visualizer visual;
		Tree* mtree = new Tree();

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		srand(time(NULL));

		visual.Create(pictureBox1->CreateGraphics(),
			pictureBox1->Width,
			pictureBox1->Height,
			Color::WhiteSmoke,
			Color::FromArgb(84, 172, 210),
			Color::FromArgb(251, 160, 38),
			Color::FromArgb(26, 188, 156),
			Color::FromArgb(0, 168, 133),
			Color::White);
	}

	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		mtree->add(System::Convert::ToInt16(textData->Text));
		visual.Draw(mtree);
	}

	private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mtree->selected = visual.Select(mtree, e->X, e->Y);
		if (mtree->selected != NULL)
			labelAddress->Text = "Ok: " + System::Convert::ToString(mtree->selected->data);
	}
	private: System::Void button_add_n_Click(System::Object^  sender, System::EventArgs^  e) {
		int max = System::Convert::ToInt16(textData->Text);
		for (int i = 1; i <= max; i++)
		{
			int res;
			bool again = true;
			while (again)
			{
				again = false;
				res = (rand() % 100);
				mtree->search(res);
				if (mtree->recursion_search(res, mtree->head) != NULL)
					again = true;
			};
			mtree->add(res);
		}
		visual.Draw(mtree);
	}
	private: System::Void button_sort_Click(System::Object^  sender, System::EventArgs^  e) {
		mtree->sort();
		visual.Draw(mtree);
	}

	private: System::Void buttonsearch_Click(System::Object^  sender, System::EventArgs^  e) {
		mtree->search(System::Convert::ToInt16(textData->Text));
		if (mtree->selected != NULL)
			labelAddress->Text = "Ok: " + System::Convert::ToString(mtree->selected->data);
		else
			labelAddress->Text = "No results";
		visual.Draw(mtree);
	}
};
}
