#include <iostream>
using namespace std;

int main(){
    string nome;
    int tamanho, i = 0;
    bool ok = true;
    getline(cin, nome);
    while(ok){
        if(nome[i] == '\0'){
            ok = false;
        }
        i++;
    }
    tamanho = i;
    cout<<endl;
    for(int c = tamanho-1;c>=0;c--){
        cout<<nome[c];
    }
    cout<<endl;
}