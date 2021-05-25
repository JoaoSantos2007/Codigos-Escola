#include <iostream>
using namespace std;

int main(){
    int vetor[10],menor,maior = 0;
    for(int i = 0;i<10;i++){
        cin>>vetor[i];
        if(vetor[i]>maior)maior=vetor[i];
        if(vetor[i]<menor)menor=vetor[i];
    }
    cout<<"Maior: "<<maior<<endl;
    cout<<"Menor: "<<menor<<endl; 
}