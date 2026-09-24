#include <iostream>
using namespace std;

int main ()
{
	int nota;
	cout<<"Ingrese la nota (0 - 100): \n";
	cin>>nota;
	
	if (nota <0 || nota >100)
	{
		cout<<"Error: Nota invalida \n";
	}
	else if (nota>=90)
	{
		cout<<"EXCELENTE \n";
	}
	else if (nota>=80)
	{
		cout<<"MUY BUENO \n";
	}
	else if (nota>=70)
	{
		cout<<"BUENO \n";
	}
	else if (nota>=60)
	{
		cout<<"REGULAR \n";
	}
	else
	{
		cout<<"REPROBADO \n";
	}
	return 0;
}
