#include <iostream>
using namespace std;

int main(){
    int vetor[18];
    for(int i = 0;i<18;i++){
        cin>>vetor[i];
    }
    for(int i = 0;i<18;i++){
        if(vetor[i] % 2 == 0)cout<<vetor[i]<<endl;
    }
}