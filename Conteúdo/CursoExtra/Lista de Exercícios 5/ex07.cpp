#include <iostream>
using namespace std;

int main(){
    int n[10],maior,menor;
    maior = 0;
    for(int i = 0;i<10;i++){
        cout<<"Digite um numero: ";
        cin>>n[i];
    }
    for(int c = 0;c<10;c++){
        if(n[c]>maior){
            maior = n[c];
        }
        if(n[c]<menor){
            menor = n[c];
        }
    }
    cout<<"Maior: "<<maior<<endl;
    cout<<"Menor: "<<menor<<endl;
}