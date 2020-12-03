#include "SymbString.h"

SymbString::SymbString(string str) 
{
	setStr(str);
}

void SymbString::setStr(string str) 
{
	this->str = str;
}

string SymbString::getStr()
{
	return this->str;
}

SymbString SymbString::operator+(SymbString& str)
{
	return this->str + str.getStr();
}