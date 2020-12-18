#include <iostream>
#include <cstring>
#include "Email.h"
#include "SymbString.h"
#include "OctString.h"
#include <vector>

template <class T>
class vStack
{
private:
    vector<T> v;
public:
    vStack()
    {
        v = vector<T>();
    }
    void push(T value)
    {
        v.push_back(value);
    }
    T peek()
    {
        return v.back();
    }
    void pop()
    {
        v.pop_back();
    }
};

int main()
{
    while (1)
    {
        cout << "VVOD nomer (1-6)\n";
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
                    cout << "Vvod name(nasa) and domen(mail.ru) of email\n";
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
                    cout << "Vvod name of email\n";
                    string n;
                    cin >> n;
                    newEmail.setName(n);
                }break;
                case 3:
                {
                    cout << "Vvod domen of email\n";
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
            cout << "0 - new symbStr(value)\n1 - symbStr.getStr()\n2 - symbStr.setStr(value)\n3 - new octStr(value)\n4 - octStr.getStr()\n5 - octStr.setStr(value)\n6 -  + SymbString \n7 -  + OctString\n\n9 - back\n";

            bool f = false;
            SymbString newSS("symbstr"); //
            OctString newOS("8");
            while (1)
            {
                int i;
                cin >> i;
                switch (i)
                {
                case 0://ввод новой строки
                {
                    string s;
                    cin >> s;
                    newSS = SymbString(s);
                }
                break;
                case 1:// вывод строки
                {
                    cout << newSS.getStr() + "\n";
                }
                break;
                case 2:// замена значений
                {
                    string s;
                    cin >> s;
                    newSS.setStr(s);
                }
                break;
                case 3://
                {
                    string s;
                    cin >> s;
                    newOS = OctString(s);
                }
                break;
                case 4:
                {
                    cout << newOS.getStr() + "\n";
                }
                break;
                case 5:
                {
                    string s;
                    cin >> s;
                    newOS.setStr(s);
                }
                case 6:
                {
                    string s;
                    cin >> s;
                    SymbString a(s);
                    cout << (newSS + a).getStr() << "\n";
                }
                case 7:
                {
                    string s;
                    cin >> s;
                    OctString a(s);
                    cout << (newOS + a).getStr() << "\n";
                }
                break;
                case 9:
                {
                    f = true;
                }
                break;
                default:
                    cout << "Неверно\n";
                    break;
                }
                if (f)
                {
                    break;
                }
            }
        }break;
        case 3:
        {
            cout << "0 - push(value)\n1 - peek()\n2 - pop()\n\n9 - back\n";

            bool f = false;
            vStack<int> stack;
            while (1)
            {
                int i;
                cin >> i;
                switch (i)
                {
                case 0:
                {
                    int value;
                    cin >> value;
                    stack.push(value);
                }
                break;
                case 1:
                {
                    cout << stack.peek() << "\n";
                }
                break;
                case 2:
                {
                    stack.pop();
                }
                break;
                case 9:
                {
                    f = true;
                }
                break;
                default:
                    cout << "Неверно\n";
                    break;
                }
                if (f)
                {
                    break;
                }
            }
        }
        default:
            cout << "Incorrect\n";
        }
    }
}