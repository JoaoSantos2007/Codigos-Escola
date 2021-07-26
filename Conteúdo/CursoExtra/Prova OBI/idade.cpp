#include <iostream>
using namespace std;

int main(){
    int N[3];
    for(int i = 0; i < 3;i++){
        cin>>N[i];
    }
    int maior = N[0];
    int menor = N[0];
    for(int i = 0; i < 3;i++){
        if(maior < N[i]){
            maior = N[i];
        }
        if(menor > N[i]){
            menor = N[i];
        }
    }
    if(N[0] == N[1] && N[1] == N[2]){
        cout<<N[0];
    }else if(N[0] == N[1]){
        cout<<N[0];
    }else if(N[1] == N[2]){
        cout<<N[1];
    }else if(N[0] == N[2]){
        cout<<N[2];
    }else{
        for(int i = 0; i < 3;i++){
            if(N[i] != maior && N[i] != menor){
                cout<<N[i];
            }
        }        
    }



}