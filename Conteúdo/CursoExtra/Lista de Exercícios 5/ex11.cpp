#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    float somatot = 0;
    float Notas[N];
    float media = 0;
    int passaram = 0;
    for(int i = 0;i<N;i++){
        cin>>Notas[i];
    }
    for(int i = 0;i<N;i++){
        somatot += Notas[i];
    }
    media = somatot/N;
    for(int i = 0;i<N;i++){
        if(Notas[i]>=media){
            passaram++;            
        }
    }
    cout<<media<<endl;
    cout<<passaram;
}