#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    string resp = "N";
    int vetor[N];
    int pro1,pro2;
    for(int i = 0;i<N;i++){
        cin>>vetor[i];
    }
    for(int i = 0;i<N;i++){
        if(i <= N - 3){
            if(vetor[i] > vetor[i+1] && vetor[i+1] < vetor[i+2]){
                resp = "S";
            }            
        }
    }
    cout<<resp;
}