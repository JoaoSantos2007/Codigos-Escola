#include <iostream>
using namespace std;

int main(){
    int n = 20;
    int vetor[n];

    for(int i = 0;i < n; i++){
        cin>>vetor[i];
    }

    cout<<endl<<endl<<"Vetor:"<<endl;    
    for(int i = n-1;i >= 0; i--){
        cout<<vetor[i]<<endl;
    }
}