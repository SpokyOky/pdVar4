#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Email
{
public:
    Email(string, string);

    void setName(string);
    void setDomen(string);

    string ToString();

    ~Email(void);
private:
    string name;
    string domen;
};