#include <iostream>
using namespace std;

int main(){
    int n[15],soma;
    soma = 0;
    for(int i = 0;i<15;i++){
        cout<<"Digite um numero: ";
        cin>>n[i];
    }
    for(int i = 0;i<15;i++){
        cout<<n[i]<<endl;
        soma += n[i];
    }
    cout<<soma;
}