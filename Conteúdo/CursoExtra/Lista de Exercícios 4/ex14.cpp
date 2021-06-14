#include <iostream>
using namespace std;

int main(){
    int soma,n;
    int c = 1;
    soma = 0;
    n = 0;
    do{
        cout<<" Digite um numero: "<<endl;
        cin>>n;
        soma += n;
        c = c+1;
    }while(c<=10);
    cout<<"A soma de todos os numeros e "<<soma;
}