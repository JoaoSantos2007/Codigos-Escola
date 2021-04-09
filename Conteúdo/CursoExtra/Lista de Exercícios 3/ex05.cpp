#include <iostream>
using namespace std;

int main(){
    float valorConta,valorCelular;
    cout<<"Digite o valor disponivel para comprar o celular: "<<endl;
    cin>>valorConta;
    cout<<"Digite o valor do celular que voce quer comprar: "<<endl;
    cin>>valorCelular;
    if(valorConta>=valorCelular){
        cout<<"Voce consegue comprar esse celular com esse dinheiro"<<endl;
    }else{
        cout<<"Voce nao consegue comprar esse celular com esse dinheiro"<<endl;
    }
}