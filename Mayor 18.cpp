#include<iostream>

using namespace std;

int main(){
	float edad;
	
	cout<<"Ingrese su edad por favor: "; cin>>edad;
	
	if(edad>=18){  
		cout<<"Usted ya puede conducir! "<<endl;
	}
	else{
		cout<<"Usted no puede conducir aun. Debe tener al mmenos 18 años."<<endl;
	}  	
    return 0; 	
}

