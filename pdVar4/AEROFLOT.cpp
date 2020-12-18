#include <locale>
#include "AEROFLOT.h"
#include <windows.h>

AEROFLOT::AEROFLOT(string destination, int flightNumber, string planeType)
{
	this->destination = destination;
	this->flightNumber = flightNumber;
	this->planeType = planeType;
}

istream& operator >> (istream& is, AEROFLOT& obj) 
{ // ---- �������� ���������� (�����)

	cout << "\n������� ������ � �������" << endl;
	cout << "���������� <Enter> ����� ����� <Enter>";
	cout << " ��� ������� <Enter>:" << endl;
	char c[100];
	is >> obj.destination >> obj.flightNumber >> obj.planeType;
	return is;
}

ostream& operator << (ostream& os, AEROFLOT& obj)
{//������

	os << "���������� - " << obj.destination
		<< " / ����� ����� - " << obj.flightNumber
		<< " / ��� ������� - " << obj.planeType;
	return os;
}