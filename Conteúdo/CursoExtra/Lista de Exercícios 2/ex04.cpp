#include <iostream>
using namespace std;

int main(){
    float real, dolar, conv;
    cout<<"Quanto vale um dolar em reais: "<<endl;
    cin>>conv;
    cout<<"Digite a quantia em dolar: "<<endl;
    cin>>dolar;
    real = conv * dolar;
    cout<<"Em reais US$"<<dolar<<" vale R$"<<real;
}