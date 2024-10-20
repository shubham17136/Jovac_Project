#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    UserLogin::LoginForm loginform;
    

    loginform.ShowDialog();

    User^ user = loginform.user;

    if (user != nullptr) {
        MessageBox::Show("Authentication Successfull for" + user->name, "Source.cpp", MessageBoxButtons::OK);
    }
    else {
        MessageBox::Show("Authentication Cancelled","Source.cpp", MessageBoxButtons::OK);
    }

}
