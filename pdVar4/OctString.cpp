#include "OctString.h"

OctString::OctString(string str) : SymbString(str)
{
	setStr(str);
}

//atoi - string to int; itoa - int to string(10 - decimal, 8 - octal)(деситичная, восьмиричная)

void OctString::setStr(string str)
{
	try
	{
		char buffer[33];
		_itoa(atoi(str.c_str()), buffer, 10);//
		SymbString::setStr(buffer);
	}
	catch (exception& e)
	{
		cout << e.what() << " input not a number";
	}
}

string OctString::getStr()
{
	char buffer[33];
	_itoa(atoi(SymbString::getStr().c_str()), buffer, 8);
	return buffer;
}

OctString OctString::operator+(OctString& str)
{
	char buffer[35];
	int a = atoi(SymbString::getStr().c_str());
	int b = otoi(atoi(str.getStr().c_str()));
	_itoa(a + b, buffer, 10);
	return OctString(buffer);
}

int OctString::otoi(int oct) //octal to decimal(из 8 в 10)
{
	int dig, num = 0, i = 0;
	while (oct != 0)
	{
		dig = oct % 10;
		num += dig * pow(8, i++);
		oct /= 10;
	}
	return num;
}