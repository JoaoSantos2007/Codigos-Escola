#include <iostream>
using namespace std;

int main(){
    float raio,altura,volume;
    cout<<"Digite o raio da lata de óleo: ";
    cin>>raio;
    cout<<"Digite a altura da lata de óleo: ";
    cin>>altura;
    volume = 3.14159 * (raio * raio) * altura;
    cout<<"O volume dessa lata de óleo e "<<volume;
}