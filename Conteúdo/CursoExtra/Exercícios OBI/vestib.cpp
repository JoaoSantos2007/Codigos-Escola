#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    char vestib[N];
    char corretas[N];
    int acertos;
    acertos = 0;
    for(int i = 0;i<N;i++){
        cin>>vestib[i];
    }
    for(int i = 0;i<N;i++){
        cin>>corretas[i];
    }
    for(int i = 0;i<N;i++){
        if(vestib[i] == corretas[i]){
            acertos++;
        }
    }
    cout<<acertos;
}