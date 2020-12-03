#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class SymbString
{
public:
	SymbString(string);
	string getStr();
	void setStr(string);
	SymbString operator +(SymbString&);
protected:
	string str;
};