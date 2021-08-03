//Pedir precio  de un producto y sacar con 15% 

#include <iostream>

using namespace std;

int main()
{
	int preciot,descuento,p;
	cout<< "Introduzca precio del producto " <<endl;
	cin>>p;
	
	descuento = p * 0.15;
	preciot = p - descuento;
	
	cout<< " El precio final  del producto con el descuento de 15% es: " <<preciot<<endl;
	
    return 0;
}
