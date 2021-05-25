#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3,n4,n5;
    float media,div;
    int soma,mult,dif;
    cout<<"Digite o primeiro numero: ";
    cin>>n1;
    cout<<"Digite o segundo numero: ";
    cin>>n2;
    cout<<"Digite o terceiro numero: ";
    cin>>n3;
    cout<<"Digite o quarto numero: ";
    cin>>n4;
    cout<<"Digite o quinto numero: ";
    cin>>n5;
    soma = n1 + n2 + n3 + n4 + n5;
    dif = n1 - n2 - n3 - n4 - n5;
    mult = n1 * n2 * n3 * n4 * n5;;
    div = n1/n2/n3/n4/n5;
    media = soma/5;
    cout<<"\n\n\n\n";
    cout<<"A soma entre esse numeros e: "<<soma<<endl;
    cout<<"A diferenca entre o primeiro numero por outros numeros e: "<<dif<<endl;
    cout<<"A multiplicação entre esses numeros e: "<<mult<<endl;
    cout<<"A divisao entre esses numeros e: "<<div<<endl;
    cout<<"A media entre esses numeros e: "<<media<<endl<<endl<<endl;
}