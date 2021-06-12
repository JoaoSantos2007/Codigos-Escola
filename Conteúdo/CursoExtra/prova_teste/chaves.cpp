#include <iostream>
using namespace std;

int main(){
    int N;
    string codigo;
    int chaves_abertas = 0;
    int chaves_fechadas = 0;
    cin>>N;
    for(int i = 0;i <= N;i++){
        getline(cin, codigo);
        for(int c = 0;c < 101;c++){
            if(codigo[c] == '{'){
                chaves_abertas++;
            }
            if(codigo[c] == '}'){
                chaves_fechadas++;
            }
        }
    }
    if(chaves_fechadas == chaves_abertas){
        cout<<"S";
    }else{
        cout<<"N";
    }
}