/* Escribe un programa que lea de la entrada estandar lso numeros  y muestra la salida
estandar su suma, resta,  multiplicacaion, division.*/
#include<iostream>

using namespace std;

int main (){
	int n1, n2,suma = 0,resta = 0,multiplicacion = 0,division = 0; 
	
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1/ n2; 
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"\nLa resta es: "<<resta<<endl;
	cout<<"\nLa multiplicacion es: "<<multiplicacion<<endl; 
	cout<<"\nLa division es: "<<division<<endl; 

	return 0; 
}
