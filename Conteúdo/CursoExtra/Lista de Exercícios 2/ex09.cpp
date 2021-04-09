#include <iostream>
using namespace std;

int main(){
    float Fahrenheit,Celsius;
    cout<<"Digite a temperatura em graus Celsius: ";
    cin>>Celsius;
    Fahrenheit = (9*Celsius+160)/5;
    cout<<"A temperatura de "<<Celsius<<" graus Celsius em Fahrenheit e "<<Fahrenheit;
}