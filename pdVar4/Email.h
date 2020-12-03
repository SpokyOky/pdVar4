#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Email
{
public:
    Email(string name, string domen);

    void setName(string name);
    void setDomen(string domen);

    string ToString();

    ~Email(void);
private:
    string name;
    string domen;
};