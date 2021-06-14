#include <iostream>
using namespace std;

int main(){
    int n = 11;
    int vetor[n], soma;

    for(int i = 0; i < n; i++){
        cin>>vetor[i];
        soma += vetor[i];
    }

    cout<<"\n\nVetor: \n\n";
    for(int i = 0; i < n; i++){
        cout<<vetor[i]<<endl;
    }

    cout<<endl<<"Soma: "<<soma<<endl;
}