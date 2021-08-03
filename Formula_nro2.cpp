//escriba la siguiente expresion matemàtica: (a+b)/(c+d) :
#include<iostream>

using namespace std;

int main (){
	float n1, n2, n3, n4, resultado = 0; 
	
	cout<<"Digite  numero a: "; cin>>n1;
	cout<<"Digite  numero b: "; cin>>n2;
	cout<<"Digite  numero c: "; cin>>n3;
	cout<<"Digite  numero d: "; cin>>n4;
	
	resultado = (n1+n2)/(n3+n4);
	 
	
	cout<<"\nEl resultado de (a+b)/(c+d)=: "<<resultado<<endl;


	return 0; 
}
