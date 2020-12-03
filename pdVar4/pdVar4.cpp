#include <iostream>
#include <cstring>
#include "Email.h"

using namespace std;

int main()
{
    cout << "0 - new obj(email)\n1 - obj.ToString()\n";

    Email newEmail("nasa", "mail.ru");
    while (1) 
    {
        int i;
        cin >> i;
        switch (i) 
        {
        case 0:
        {
            cout << "Input body(nasa) and domen(mail.ru) of email\n";
            string n, d;
            cin >> n >> d;
            newEmail = Email(n, d);
        }break;
        case 1:
        {
            cout << "ToString(): " << newEmail.ToString() << "\n";
        }break;
        default:
        {
            cout << "Incorrect\n";
        }
        }
    }
}