#include "iostream"

using namespace std;

int main ()
{
	int opcion;
	
	cout<<"Ingrese el numero de la semana que desea \n";
	cout<<"Lunes: 1 \n"<<"Martes: 2 \n"<<"Miercoles: 3 \n"<<"Jueves: 4 \n"<<"Viernes: 5 \n"<<"Sabado: 6 \n"<<"Domingo: 7 \n"<<"**************** \n";
	cin>>opcion;
	
	switch (opcion)
	{
		case 1:
			cout<<"LUNES \n";
			break;
		case 2:
			cout<<"MARTES \n";
			break;
		case 3:
			cout<<"MIERCOLES \n";
			break;
		case 4:
			cout<<"JUEVES \n";
			break;
		case 5:
			cout<<"VIERNES \n";
			break;
		case 6:
			cout<<"SABADO \n";
			break;
		case 7:
			cout<<"DOMINGO \n";
			break;
		default:
			cout<<"Opcion incorrecta \n";
	}
	return 0;
	
}
