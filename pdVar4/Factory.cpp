#include <iostream>
#include "Factory.h"
#include "SymbString.h"
#include "OctString.h"

using namespace std;

void Factory::AddAndActObject()
{
	cout << "Select object type:\n1 - SymbStr\n2 - OctStr\n";
	int i;
	cin >> i;
	cout << "Input value of object\n";
	string value;
	cin >> value;

	switch (i)
	{
	case 1:
	{

	}break;
	case 2:
	{

	}break;
	default:
	{

	}
	}
}