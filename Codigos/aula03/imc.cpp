#include <iostream>
using namespace std;
float altura,peso,imc;
int main( ){
    cout<<("Qual e sua altura: ")<<endl;
    cin>>altura;
    cout<<("Qual e sua massa corporal: ")<<endl;
    cin>>peso;
    imc=peso/(altura*altura);
    cout<<("Seu IMC e ")<<endl;
    cout<<(imc)<<endl;
if(imc<=18.5){
    cout<<"Voce esta abaixo do peso";
}else if(imc<25){
    cout<<"Voce esta no peso adequado";
}else if(imc<30){
    cout<<"Voce esta no Sobrepeso";
}else if(imc>=30){
    cout<<"voce esta na Obesidade";
}
}
