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
{ // ---- Операция извлечения (ввода)

	cout << "\nВведите данные в формате" << endl;
	cout << "Назначение <Enter> Номер рейса <Enter>";
	cout << " Тип самолёта <Enter>:" << endl;
	char c[100];
	is >> obj.destination >> obj.flightNumber >> obj.planeType;
	return is;
}

ostream& operator << (ostream& os, AEROFLOT& obj)
{//вывода

	os << "Назначение - " << obj.destination
		<< " / Номер рейса - " << obj.flightNumber
		<< " / Тип самолёта - " << obj.planeType;
	return os;
}