#include <iostream>
using namespace std;

int main(){
    int P, D1, D2, v;
    cin>>P;
    cin>>D1;
    cin>>D2;
    int soma = D1 + D2;
    if(soma % 2 == 0){
        cout<<P;
    }else{
        if(P == 1){
            cout<<0;
        }else if(P == 0){
            cout<<1;
        }
    }
}