#include <iostream>
using namespace std;

int main(){
    int vetor[10],soma = 0;
    float media;
    for(int i = 0;i<10;i++){
        cin>>vetor[i];
        soma += vetor[i];        
    }
    media = soma/10;
    cout<<"Soma: "<<soma<<endl;    
    cout<<"Media: "<<media<<endl;
}