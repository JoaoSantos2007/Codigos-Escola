#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int pessoas[N];
    for(int i = 0;i < N; i++){
        cin>>pessoas[i];
    }
    int M;
    cin>>M;
    int menos_pessoas[M];
    for(int i = 0;i < M;i++){
        cin>>menos_pessoas[i];
    }


    bool imprimir = true;
    for(int i = 0;i < N;i++){
        for(int c = 0;c < M;c++){
            if(pessoas[i] == menos_pessoas[c]){
                imprimir = false;
            }
        }
        if(imprimir){
            cout<<pessoas[i]<<" ";
        }else{
            imprimir = true;
        }
    }
}