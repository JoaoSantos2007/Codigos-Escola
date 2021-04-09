#include <iostream>
using namespace std;

int main(){
    float preco,min,creditos;
    cout<<"Digite quantos minutos voce quer fazer a chamada: ";
    cin>>min;
    cout<<"Digite quantos creditos voce tem para fazer a chamada: ";
    cin>>creditos;
    preco = 3 * min;
    if(preco<=creditos){
        cout<<"Sua chamada esta sendo completada ";
    }else{
        cout<<"Voce nao tem creditos suficientes para completar sua chamada ";
    }
}