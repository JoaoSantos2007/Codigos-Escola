#include <iostream>
using namespace std;

int main(){
    int vetor[20];
    int menor;
    int posicao;
    for(int i = 0;i<20;i++){
        cin>>vetor[i];
    }
    for(int i = 0;i<20;i++){
        if(vetor[i]<menor){
            menor = vetor[i];
            posicao = i;               
        }
    }

    cout<<"O menor elemento do vetor N e "<<menor<<" e sua posicao e: "<<posicao<<endl;
}