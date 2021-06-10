#include <iostream>
using namespace std;

int main(){
    int n = 15;
    int vetor[n];

    for(int i = 0; i < n; i++){
        cin>>vetor[i];
    }

    cout<<endl<<endl<<"Vetor: "<<endl;
    for(int i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            cout<<vetor[i]<<endl;
        }
    }
}