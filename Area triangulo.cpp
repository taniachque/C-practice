//CALCULAR EL AREA DE UN TRIANGULO


#include <iostream>
using namespace std;
int main(){
    double a,b,areat;
    
    cout<<"Ingrese base del triangulo"<<endl;cin>>a;
    cout<<"Ingrese altura  del triangulo"<<endl;cin>>b;
   
    areat = (a * b) / 2;
   
    cout<<"El area del triangulo es: "<<areat<<endl;
    
   return 0;
}
