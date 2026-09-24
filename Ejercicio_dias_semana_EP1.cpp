#include <iostream>

using namespace std;

int main ()
{
	int num_semana;//variable donde se guardara el numero de la semana
	
	//se muestra al usuario los dias y su numero respectivo
	cout<<"Ingrese el numero de la semana que desea \n";
	cout<<"Lunes: 1 \n"<<"Martes: 2 \n"<<"Miercoles: 3 \n"<<"Jueves: 4 \n"<<"Viernes: 5 \n"<<"Sabado: 6 \n"<<"Domingo: 7 \n"<<"**************** \n";
	cin>>num_semana;//se guarda la opcion del usuario en la variable opcion
	
	//se evalua la opcion ingresada en base a la indicada por el usuario
	switch (num_semana)
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
			cout<<"Opcion incorrecta \n";//si la opcion esta fuera del rango mostrara este mensaje
	}
	return 0;
	
}
