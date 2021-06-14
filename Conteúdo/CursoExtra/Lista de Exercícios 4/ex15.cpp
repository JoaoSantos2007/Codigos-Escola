#include <iostream>
using namespace std;

int main(){
    int n1,soma,maior,menor;
    float media;
    soma = 0;
    n1 = 0;
    for(int i = 1;i<=10;i++){
        cout<<"Digite um numero: ";
        cin>>n1;
        soma += n1;
        if(n1 > maior){
            maior = n1;
        }else if(n1 < menor){
            menor = n1;
        }
    }
    media = soma/10;
    cout<<"Maior numero: "<<maior<<endl;
    cout<<"Menor numero: "<<menor<<endl;
    cout<<"A soma de todos os numero e: "<<soma<<endl;
    cout<<"A media da soma de todos os numeros e: "<<media<<endl;
}