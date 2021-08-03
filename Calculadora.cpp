
//estandar su suma, resta,  multiplicacaion, division.*/
#include<iostream>

using namespace std;

int main (){
	float n1, n2,suma = 0, resta=0, mult=0, div=0, op; 
	
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	cout<<"Indique que operacion desea realizar con: 1-sumar, 2-restar, 3-multiplicar, 4-dividir "; 
	cin>>op;

    if(op==1){
    	suma= n1+n2;
    	cout<<"La suma de los numeros ingresados es"<<suma<<endl;
    }
    if(op==2){
    	resta= n1-n2;
    	 cout<<"La resta de los numeros ingresados es "<<resta<<endl;
	}
	if(op==3){
    	mult= n1*n2;
    	 cout<<"La multiplicacion de los numeros ingresados es "<<mult<<endl;
	}
	if(op==4){
    	div= n1/n2;
    	 cout<<"La division de los numeros ingresados es "<<div<<endl;
	}
	else{
        cout<<"Ingrese un numero de 1 a 4 por favor"<<endl;
    }
   return 0;
}



