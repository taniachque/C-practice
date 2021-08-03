//3. solicitar al usuario un numero de cliente. 
//Si el numero es el 1000  imprimir "ganaste un premio 

#include<iostream>

using namespace std;

int main(){
	int numc ;
	
	cout<<"Ingrese numero de cliente: "; cin>>numc;
	
	if(numc== 1000)
	{   
		cout<<"Ganaste un premio"<<endl;
	}
	else{
		cout<<"Siga participando"<<endl;
	}
    return 0; 	
}
