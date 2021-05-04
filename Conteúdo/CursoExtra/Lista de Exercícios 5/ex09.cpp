#include <iostream>
using namespace std;

int main(){
    int n[20],posicao,menor;
    for(int c = 0;c<20;c++){
        cout<<"Digite um numero: ";
        cin>>n[c];
    }
    for(int c = 0;c<20;c++){
        if(n[c]<menor){
            menor = n[c];
            posicao = c;
        }
    }
    cout<<"Menor: "<<menor<<endl;
    cout<<"Posicao: "<<posicao<<endl;
}