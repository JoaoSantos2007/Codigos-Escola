#include <iostream>
using namespace std;

int main(){
    int n = 15;
    int vetor[n];
    int soma = 0;
    for(int i = 0;i<n;i++){
        cin>>vetor[i];
    }
    for(int i = 0;i<n;i++){
        cout<<vetor[i]<<endl;
        soma += vetor[i];
    }
    cout<<"Soma: "<<soma;
}