#include "Email.h"

Email::Email(string name, string domen)
{
    this->name = name;
    this->domen = domen;
    cout << this->ToString() << " is created\n";
}

Email::~Email(void) {
    cout << this->ToString() << " is destructed\n";
}

string Email::ToString()
{
    return name + "@" + domen;
}