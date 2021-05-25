#include <iostream>
using namespace std;

int main(){
    int N;
    int Tot = 0;
    int pro1,pro2;
    cin>>N;
    int vetor[N];
    for(int i = 0;i<N;i++){
        cin>>vetor[i];
    }
    for(int i = 0;i<N;i++){
        if(i<N-2){
            pro1 = i + 1;
            pro2 = i + 2;    
        }
        if(vetor[i] == 1 && vetor[pro1] == 0 && vetor[pro2] == 0){
            Tot++;
        }
    }
    cout<<Tot;
}