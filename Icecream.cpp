//2. costo helado 
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{ 
	int  resp ;
	
	cout<<"Ingrese el tipo de topping que desea siendo: 1:sin, 2: de oreo, 3: de kitkat, 4: brownie, 5. lacasitos: "<<endl;
	cin>> resp;

	switch (resp)
	{
	case 1: cout<<"1: sin topping tiene un costo de 1.90 € "<<endl;break;
	case 2: cout<<"2: con topping de oreo tiene un costo de 1 €  "<<endl;break;
	case 3: cout<<"3: con topping de kitkat tiene un costo de 1.50 €"<<endl;break;
	case 4: cout<<"4: con topping de Brownie tiene un costo de 0.75 €"<<endl;break;
	case 5: cout<<"5: con topping de lacasitos tiene un costo de 0.95 € "<<endl;break;
	default: cout<<"No tenemos ese tipo de topping, lo sentimos.El costo del helado sin topping es 1.90 € "<<endl; break;}
	
	cout<<"Gracias por su compra";
	
	getch();

    return 0;
}

