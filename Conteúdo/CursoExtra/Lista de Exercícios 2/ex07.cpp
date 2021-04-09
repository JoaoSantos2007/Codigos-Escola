#include <iostream>
using namespace std;

int main(){
    int A,B,Troca;
    cout<<"Digite o valor de A: ";
    cin>>A;
    cout<<"Digite o valor de B: ";
    cin>>B;
    Troca = A;
    A = B;
    B = Troca;
    cout<<"Agora o valor de A e "<<A<<" e o valor de B e "<<B;
}