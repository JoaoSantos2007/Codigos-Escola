#include <iostream>
using namespace std;

int main(){
    string frase = "O dia esta lindo";
    int tamanho = frase.length();
    int espaços = 0,vogais = 0, consoantes = 0;
    for(int i = 0;i < tamanho;i++){
        if(frase[i] == ' '){
            espaços++;
        }else if(frase[i] == 'a' || frase[i] == 'A'){
            vogais++;
        }else if(frase[i] == 'e' || frase[i] == 'E'){
            vogais++; 
        }else if(frase[i] == 'i' || frase[i] == 'I'){
            vogais++;
        }else if(frase[i] == 'o' || frase[i] == 'O'){
            vogais++;
        }else if(frase[i] == 'u' || frase[i] == 'U'){
            vogais++;
        }else{
            consoantes++;
        }
    }
    cout<<"A Frase e: "<<frase<<endl;
    cout<<"Tamanho da String: "<<tamanho<<endl;
    cout<<"Total de vogais: "<<vogais<<endl;
    cout<<"Total de consoantes: "<<consoantes<<endl;
    cout<<"Total de espacos: "<<espaços<<endl;
}