#include <iostream>
using namespace std;

int main(){
    int n = 20;
    int vetor[n], maior_n = 0, p = 0;
    for(int i = 0; i < n; i++){
        cin>>vetor[i];
    }

    for(int i = 0; i < n; i++){
        if(vetor[i] > maior_n){
            maior_n = vetor[i];
            p = i;
        }
    }

    cout<<endl<<endl<<"O maior numero do vetor e: "<<maior_n<<" e sua posicao e: "<<p<<endl;
}