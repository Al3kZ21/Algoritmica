#include <iostream>

using namespace std; //cout (salida), cin (entrada), cerr (errores), clog (msg de log)

int main()
{
	float C, F;
	
	cout <<"Grados Celscius: ";
	cin >> C;
	
	F = ((C* 9/5)+32);
	
	cout << C << "°C son igual a " << F << "°F" << endl;
	
	return 0;
}