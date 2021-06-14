#include <iostream>
using namespace std;

int main(){
    int macas,preco;
    cout<<"Digite a quantia de macas que voce quer comprar: ";
    cin>>macas;
    if(macas>=12){
        preco = macas * 1;
    }else{
        preco = macas * 2;
    }
    cout<<"O preco total das macas e: "<<preco;
}