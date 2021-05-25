#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int vetor[N];
    int soma[N];
    int inv[N];
    int t = 0, c = 0;
    int p = 1;
    for(int i = 0;i<N;i++){
        cin>>vetor[i];
    }
    for(int i = 0;i<N;i++){
        c = N - 1;
        t = c - i;
        soma[i] = vetor[i] + vetor[t];
    }
    for(int i = 0;i<N;i++){
        if(i<N-1){
            if(soma[i] == soma[i+1] and p == 1){
                p = 1;
            }else{
                p = 2;
            }    
        }
    }
    if(p == 1){
        cout<<"S";
    }else{
        cout<<"N";
    }
}