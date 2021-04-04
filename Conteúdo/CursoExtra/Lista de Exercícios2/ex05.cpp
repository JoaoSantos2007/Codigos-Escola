#include <iostream>
using namespace std;

int main(){
    float valor, taxa, tempo, prestacao;
    cout<<"Digite o valor da prestacao:\n";
    cin>>valor;
    cout<<"Digite a Taxa da prestacao:\n";
    cin>>taxa;
    cout<<"Digite o tempo de atraso da prestacao:\n";
    cin>>tempo;
    prestacao = valor + (valor*(taxa/100)*tempo);
    cout<<"O valor da proxima prestacao atrasada e: "<<prestacao;
}