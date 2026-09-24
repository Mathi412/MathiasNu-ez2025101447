#include "iostream"
#include "string"
using namespace std;

//prototipos de funciones
float sum(float a,float b);//funcion de suma
float rest(float a,float b);//funcion de resta
float multi(float a,float b);//funcion de multiplicacion
float divi (float a,float b);//funcion de division

int main()
{
	//Declaro las variables aca
	float num1, num2, resp; //"resp" es la variable que recibe el resultado de las funciones
	int operacion;
	
	//Peticion de datos
	cout<<"Calculadora basica \n";
	cout<<"Ingrese el primer valor: \n";
	cin>> num1;
	
	cout<<"Ingrese el segundo valor: \n";
	cin>> num2;
	
	if ((num1>=100 || num1<=0)||(num2>=100 || num2<=0))
	{
		cout<<"AMBOS numeros tienen que ser mayores a 0 y menores a 100 \n";
	}
	else {
		//aca indico las operaciones
	cout<< "*********************** \n";
	cout<<"1. SUMAR \n";
	cout<<"2. RESTAR \n";
	cout<<"3. MULTIPLICAR \n";
	cout<<"4. DIVIDIR \n";
	cout<<"Indique el NUMERO de la operacion a realizar \n";
	cin>> operacion;
	
	//aqui se realizan los calculos en base a las opciones
	switch(operacion)
	{
		case 1:
			resp = sum (num1,num2);//se guarda en resp el resultado de la operacion
			cout <<"Resultado: "<< num1<< " + "<<num2<<" = "<<resp<<"\n";
			break;
		case 2:
			resp = rest (num1,num2);//se guarda en resp el resultado de la operacion
			cout <<"Resultado: "<< num1<< " - "<<num2<<" = "<<resp<<"\n";
			break;	
		case 3:
			resp = multi (num1,num2);//se guarda en resp el resultado de la operacion
			cout <<"Resultado: "<< num1<< " * "<<num2<<" = "<<resp<<"\n";
			break;
		case 4:
			if (num2==0){//regla de division contra 0
				cout <<"No se puede dividir un numero entre cero \n";
			}
			else{
				resp = divi(num1,num2);//se guarda en resp el resultado de la operacion
				cout <<"Resultado de la division entre: "<< num1<< " / "<<num1<<" ="<<resp<<"\n";
			}
			break;
		default:
			cout<< "Opcion invalida \n"	;//valor por defecto si la opcion es incorrecta
	}
	}
	
	return 0;
}

//defino las funciones
float sum (float a,float b)//suma
{
	return a+b;
}
float rest (float a,float b)//resta
{
	return a-b;
}
float multi (float a,float b)//multiplicacion
{
	return a*b;
}
float divi (float a,float b)//division
{
	return a/b;
}
