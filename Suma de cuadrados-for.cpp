// factorial de n numero 
#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int suma=0, cuadrado=0;
	
	for (int i=1; i<=10;i++){
		cuadrado = i  * i;
		suma= suma + cuadrado;

	}

	cout<<"El resultado de la suma de los cuadrados es: "<<suma<<endl;	
	getch();
	return 0;
}
