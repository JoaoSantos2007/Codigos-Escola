#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Digite um numero: ";
    cin>>n;
    if(n>100){
        cout<<"O numero digitado e maior que 100";
    }else if(n<100){
        cout<<"O numero digitado e menor que 100";
    }else{
        cout<<"O numero digitado e igual a 100";
    }
}