#include <iostream>
using namespace std;

int main(){
    float velocidade, tempo, litros, distancia;
    cout<<"Digite a velocidade media [Km/h] utilizada na viagem: ";
    cin>>velocidade;
    cout<<"Digite o tempo em horas usado nessa viagem: ";
    cin>>tempo;
    distancia = tempo * velocidade;
    litros = distancia/12;
    cout<<"\n\n--------------------------\n";
    cout<<"Tempo: "<<tempo<<" Horas"<<endl;
    cout<<"Velocidade: "<<velocidade<<"Km/h"<<endl;
    cout<<"Distancia: "<<distancia<<"Km"<<endl;
    cout<<"Litros usados: "<<litros<<endl;
    cout<<"--------------------------\n";
}