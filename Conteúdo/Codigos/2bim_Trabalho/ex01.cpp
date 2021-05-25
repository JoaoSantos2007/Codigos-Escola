#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3,soma, produto;
    float media;
    cout<<"Digite o primeiro numero: ";
    cin>>n1;
    cout<<"Digite o segundo numero: ";
    cin>>n2;
    cout<<"Digite o terceiro numero: ";
    cin>>n3;
    soma = n1 + n2 + n3;
    media = soma/3;
    produto = n1 * n2 * n3;
    cout<<"\n\n\n\n\n\n";
    cout<<"A soma entre esses numeros e: "<<soma<<endl;
    cout<<"A media entre esses numeros e: "<<media<<endl;
    cout<<"O produto entre esses numeros e: "<<produto<<endl;
}