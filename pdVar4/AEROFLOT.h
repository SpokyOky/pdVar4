#pragma once
#include <iostream>
#include <string>

using namespace std;

class AEROFLOT
{
public:
	string destination;
	int flightNumber;
	string planeType;

	AEROFLOT(string destination, int flightNumber, string planeType);

	friend istream& operator >>(istream&, AEROFLOT&);
	friend ostream& operator <<(ostream&, AEROFLOT&);
};