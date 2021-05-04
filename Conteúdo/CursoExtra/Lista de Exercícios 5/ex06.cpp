#include <iostream>
using namespace std;

int main(){
    int n[10],menor;
    for(int c = 0;c < 10; c++){
        cout<<"Digite um numero: ";
        cin>>n[c];
    }
    for(int i = 0;i<10;i++){
        if(n[i]<menor){
            menor = n[i];
        }
    }
    cout<<"Menor numero: "<<menor;
}