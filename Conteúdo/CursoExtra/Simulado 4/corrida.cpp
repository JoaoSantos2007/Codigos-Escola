#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin>>N;
    cin>>M;
    int matriz[N][M];
    int totHora[N];
    int menor;
    int A;
    for(int l = 0;l < N;l++){
        for(int c = 0;c < M;c++){
            cin>>matriz[l][c];
        }
        totHora[l] = 0;
    }
    for(int l = 0;l < N;l++){
        for(int c = 0;c < M;c++){
            totHora[l] += matriz[l][c];
        }
    }
    for(int l = 0;l < N;l++){
        if(totHora[l] < menor){
            menor = totHora[l];
            A = l+1;
        }
    }
    cout<<A;
}