#pragma once
#include "Addcustomer.h"
#include "sellerpage.h"
namespace UserLogin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Welcome
	/// </summary>
	public ref class Welcome : public System::Windows::Forms::Form
	{
	public:
		Welcome(void)
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
		~Welcome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnBuyer;

	private: System::Windows::Forms::Button^ btnSeller;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Welcome::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBuyer = (gcnew System::Windows::Forms::Button());
			this->btnSeller = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1131, 77);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Real Estate";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Welcome::label1_Click);
			// 
			// btnBuyer
			// 
			this->btnBuyer->Location = System::Drawing::Point(904, 156);
			this->btnBuyer->Name = L"btnBuyer";
			this->btnBuyer->Size = System::Drawing::Size(239, 70);
			this->btnBuyer->TabIndex = 1;
			this->btnBuyer->Text = L"Buyer";
			this->btnBuyer->UseVisualStyleBackColor = true;
			this->btnBuyer->Click += gcnew System::EventHandler(this, &Welcome::btnBuyer_Click);
			// 
			// btnSeller
			// 
			this->btnSeller->Location = System::Drawing::Point(904, 267);
			this->btnSeller->Name = L"btnSeller";
			this->btnSeller->Size = System::Drawing::Size(239, 70);
			this->btnSeller->TabIndex = 2;
			this->btnSeller->Text = L"Seller";
			this->btnSeller->UseVisualStyleBackColor = true;
			this->btnSeller->Click += gcnew System::EventHandler(this, &Welcome::btnSeller_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(904, 378);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(239, 70);
			this->btnExit->TabIndex = 3;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Welcome::btnExit_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 113);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(863, 487);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// Welcome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1181, 589);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnSeller);
			this->Controls->Add(this->btnBuyer);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"Welcome";
			this->Text = L"Welcome";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnBuyer_Click(System::Object^ sender, System::EventArgs^ e) {
	// Open the add customer Form
	this->Hide();
	Addcustomer^ addCustomerForm = gcnew Addcustomer();
	addCustomerForm->ShowDialog();
}
private: System::Void btnSeller_Click(System::Object^ sender, System::EventArgs^ e) {
	//open seller page
	this->Hide();
	sellerpage^ sellerpageForm = gcnew sellerpage();
	sellerpageForm->ShowDialog();
	
		
}
};
}
