#include <iostream>
using namespace std;

int main(){
    int n,div;
    cout<<"Digite um numero: ";
    cin>>n;
    div = n % 2;
    if(n == 0){
        cout<<"Esse numero e igual a 0 ";  
    }else if(div == 0){
        cout<<"Esse numero e positivo ";
    }else if(div == 1){
        cout<<"Esse numero e negativo ";
    }
}