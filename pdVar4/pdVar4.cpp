#include <iostream>
#include <cstring>
#include "Email.h"
#include "SymbString.h"
#include "OctString.h"

using namespace std;

int main()
{
    while (1)
    {
        cout << "Input task number (1-6)\n";
        int task;
        cin >> task;
        switch (task)
        {
        case 1:
        {
            cout << "0 - new obj(email)\n1 - obj.ToString()\n2 - set name\n3 - set domen\n9 - back\n";

            Email newEmail("nasa", "mail.ru");
            while (1)
            {
                int i;
                cin >> i;
                bool f = false;
                switch (i)
                {
                case 0:
                {
                    cout << "Input name(nasa) and domen(mail.ru) of email\n";
                    string n, d;
                    cin >> n >> d;
                    newEmail = Email(n, d);
                }break;
                case 1:
                {
                    cout << "ToString(): " << newEmail.ToString() << "\n";
                }break;
                case 2:
                {
                    cout << "Input name of email\n";
                    string n;
                    cin >> n;
                    newEmail.setName(n);
                }break;
                case 3:
                {
                    cout << "Input domen of email\n";
                    string d;
                    cin >> d;
                    newEmail.setDomen(d);
                }break;
                case 9:
                {
                    f = true;
                }
                default:
                {
                    cout << "Incorrect\n";
                }
                }
                if (f)
                {
                    break;
                }
            }
        }break;
        case 2:
        {
            SymbString newSS("symbstr");
            cout << newSS.getStr() << "\n";
            newSS.setStr("asasd");
            cout << newSS.getStr() << "\n";
            OctString newOS("8");
            cout << newOS.getStr() << "\n";
            OctString newOS2("7");
            cout << newOS2.getStr() << "\n";
            OctString newSum = newOS + newOS2;
            cout << newSum.getStr() << "\n";
        }break;
        default:
            cout << "Incorrect\n";
        }
    }
}