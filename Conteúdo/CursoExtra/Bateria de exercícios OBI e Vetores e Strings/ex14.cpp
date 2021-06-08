#include <iostream>
using namespace std;

int main(){
    //Variáveis
    string nome;
    int i = 0;
    bool valido = true;

    getline(cin, nome);

    while(valido){
        if(nome[i] != ' '){
            cout<<nome[i];
        }else{
            valido = false;
        }
        i++;
    }
    cout<<endl;
}