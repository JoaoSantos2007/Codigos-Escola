#include <iostream>
using namespace std;

int main(){
    string nome;
    int i = 0;
    bool valido = true;
    getline(cin, nome);
    cout<<nome[0];
    while(valido){
        if(nome[i-1] == ' '){
            cout<<nome[i];
        }
        i++;
        if(nome[i] == '\0'){
            valido = false;
        }
    }
    cout<<endl;
}