#include "Email.h"

Email::Email(string name, string domen)
{
    this->name = name;
    this->domen = domen;
    cout << this->ToString() << " is created\n";
}

void Email::setName(string name) 
{
    this->name = name;
    cout << "Name " << name << " set\n";
}

void Email::setDomen(string domen) 
{
    this->domen = domen;
    cout << "Domen " << domen << " set\n";
}

Email::~Email(void) {
    cout << this->ToString() << " is destructed\n";
}

string Email::ToString()
{
    return name + "@" + domen;
}