#include <iostream>
using namespace std;

int main(){
    int vetor[10];
    int maior = 0;
    for(int i = 0;i<10;i++){
        cin>>vetor[i];
    }
    for(int i = 0;i<10;i++){
        if(vetor[i]>maior)maior=vetor[i];
    }
    cout<<"maior: "<<maior;
}