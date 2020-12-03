#pragma once
#include <iostream>
#include <cstring>
#include <cmath>
#include "SymbString.h"

using namespace std;

class OctString : public SymbString
{
public:
	OctString(string);
	void setStr(string);
	string getStr();
	OctString operator +(OctString&);
private:
	string str;
	int otoi(int);
};