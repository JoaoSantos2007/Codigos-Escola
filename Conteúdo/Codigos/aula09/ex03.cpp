#include <iostream>
using namespace std;

int main(){
    int senha;
    cout<<"Digite a senha 123456789: ";
    cin>>senha;
    if (senha == 123456789){
        cout<<"Hello World!";
    }else{
        cout<<"Senha Invalida ";
    }
}