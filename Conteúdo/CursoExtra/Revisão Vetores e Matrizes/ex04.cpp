#include <iostream>
using namespace std;

int main(){
    int soma_pares = 0, soma_impares = 0, n = 20;
    int vetor[n];
    for(int i = 0; i < n; i++){
        cin>>vetor[i];
    }
    for(int i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            soma_pares += vetor[i];
        }else{
            soma_impares += vetor[i];
        }
    }
    cout<<endl<<endl<<"Soma dos numeros pares: "<<soma_pares<<endl;
    cout<<"Soma dos numeros impares: "<<soma_impares<<endl;
}
