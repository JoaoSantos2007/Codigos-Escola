#include <iostream>
using namespace std;

int main(){
    float Celsius, Fahrenheit;
    cout<<"Digite a temperatura em Fahrenheit: ";
    cin>>Fahrenheit;
    Celsius = (Fahrenheit - 32) * 5/9;
    cout<<"A temperatura de "<<Fahrenheit<<" Fahrenheit em graus Celsius e: "<<Celsius;
}