#include <iostream>
using namespace std;

int main(){
    int n1,n2,soma,sub,mult;
    cout<<"Digite um numero: ";
    cin>>n1;
    cout<<"Digite outro numero: ";
    cin>>n2;
    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    cout<<"A soma entre "<<n1<<" e "<<n2<<" e: "<<soma<<endl;
    cout<<"A subtracao entre "<<n1<<" e "<<n2<<" e: "<<sub<<endl;
    cout<<"A multiplicacao entre "<<n1<<" e "<<n2<<" e: "<<mult<<endl;
}