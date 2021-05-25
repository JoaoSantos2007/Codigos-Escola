#include <iostream>
using namespace std;

int main(){
    int vetor[13];
    for(int i = 0;i<13;i++){
        cin>>vetor[i];
    }
    for(int i = 0;i<13;i++){
        if(vetor[i] % 2 != 0)cout<<vetor[i]<<endl;
    }
}