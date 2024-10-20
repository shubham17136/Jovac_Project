#pragma once

namespace UserLogin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Addcustomer
	/// </summary>
	public ref class Addcustomer : public System::Windows::Forms::Form
	{
	public:
		Addcustomer(void)
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
		~Addcustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::TextBox^ txtEmaild;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtEmaild = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(336, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(662, 87);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add New customer Detalis";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(331, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 38);
			this->label2->TabIndex = 1;
			this->label2->Text = L"First Name";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(331, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 38);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Last Name";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(331, 288);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 38);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Address";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(331, 362);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 38);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Phone";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(331, 431);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(193, 38);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Email Id";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(514, 145);
			this->txtFirstName->Multiline = true;
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(387, 41);
			this->txtFirstName->TabIndex = 6;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(514, 217);
			this->txtLastName->Multiline = true;
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(387, 41);
			this->txtLastName->TabIndex = 7;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(514, 285);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(387, 41);
			this->txtAddress->TabIndex = 8;
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(514, 362);
			this->txtPhone->Multiline = true;
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(387, 41);
			this->txtPhone->TabIndex = 9;
			// 
			// txtEmaild
			// 
			this->txtEmaild->Location = System::Drawing::Point(514, 428);
			this->txtEmaild->Multiline = true;
			this->txtEmaild->Name = L"txtEmaild";
			this->txtEmaild->Size = System::Drawing::Size(387, 41);
			this->txtEmaild->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(172, 526);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(334, 83);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Add Customer Detail";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Addcustomer::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(777, 526);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(282, 83);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Addcustomer::button2_Click);
			// 
			// Addcustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1226, 647);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtEmaild);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->txtFirstName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"Addcustomer";
			this->Text = L"Addcustomer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ first_name = this->txtFirstName->Text;
	String^ last_name = this->txtLastName->Text;
	String^ address = this->txtAddress->Text;
	String^ phone = this->txtPhone->Text;
	String^ email = this->txtEmaild->Text;

	if(first_name->Length == 0 || last_name->Length == 0 || address->Length == 0 || phone->Length == 0 || email->Length == 0){
		MessageBox::Show("Please fill in all the fields.", "Incomplete Data", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	try {
		String^ connString = "Data Source=localhost\\SQLExpress;Initial Catalog=UserLogin;Integrated Security=True";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);

		sqlConn->Open();
		//start a transaction
		SqlTransaction^ transaction = sqlConn->BeginTransaction();
		//insert into customer table
		String^ sqlQueryCustomer = "INSERT INTO Customer(first_name,last_name,address,phone,email)VALUES(@first_name,@last_name,@address,@phone,@email);";
		SqlCommand^ commandCustomer = gcnew SqlCommand(sqlQueryCustomer,sqlConn);
		commandCustomer->Transaction = transaction;
		commandCustomer->Parameters->AddWithValue("@first_name",first_name);
		commandCustomer->Parameters->AddWithValue("@last_name",last_name);
		commandCustomer->Parameters->AddWithValue("@address",address);
		commandCustomer->Parameters->AddWithValue("@phone", phone);
		commandCustomer->Parameters->AddWithValue("@Email",email);

		//Execute the customber insertion and get the Inserted CustId 
		int custId = Convert::ToInt32(commandCustomer->ExecuteScalar());
		

		/*int rowsAffectedAccount = commandCustomer->ExecuteNonQuery();*/
		/*if (custId > 0) {
			transaction->Commit();
			MessageBox::Show("Customer and account detailed sucsessfully...", "Success", MessageBoxButtons::OK);
			this->txtFirstName->Clear();
			this->txtLastName->Clear();
			this->txtAddress->Clear();
			this->txtEmaild->Clear();
			this->txtPhone->Clear();
		}
		else {
			transaction->Rollback();
			MessageBox::Show("Failed to add details...", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}*/
		commandCustomer->ExecuteNonQuery();
		sqlConn->Close();
		
	} 
	catch (SqlException^ sqlEx) {
		MessageBox::Show("SQL ERROR: " + sqlEx->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to Connect Database: " + ex->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
