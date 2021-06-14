#include <iostream>
using namespace std;

int main(){
    string nome;
    int i = 0;
    cout<<"Digite seu nome: ";
    getline(cin, nome);
    while(nome[i] != '\0' && nome[i+1] != '\0'){
        i++;
    }
    for(int c = 0;c<=i;c++){
        cout<<nome[c]<<endl;
    }
}