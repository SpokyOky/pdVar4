#include "AEROFLOT.h"
#include "windows.h"

AEROFLOT::AEROFLOT() 
{

}

AEROFLOT::AEROFLOT(string destination, int flightNumber, string planeType)
{
	this->destination = destination;
	this->flightNumber = flightNumber;
	this->planeType = planeType;
}

//istream& operator >> (istream& in, AEROFLOT& ob) { // ---- Операция извлечения (ввода)
//	cout << "\nВведите данные в формате" << endl;
//	cout << "Назначение <Enter> Номер рейса <Enter>";
//	cout << " Тип самолёта <Enter>:" << endl;
//	in.getline(ob.destination, 256);
//	OemToChar(ob.destination, ob.destination); // для работы в среде Windows с кириллицей
//	ob.take_job_year = GetInt(in); // 3
//	ob.pay = GetDouble(in); // 4
//	return in;
//}