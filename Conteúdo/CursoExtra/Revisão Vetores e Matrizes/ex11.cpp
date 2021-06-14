#include <iostream>
using namespace std;

int main(){
    string frase;
    cout<<"Digite a frase: ";
    getline(cin, frase);
    int tamanho = frase.length();
    int totA = 0, totE = 0, totI = 0, totO = 0, totU = 0;
    for(int i = 0;i < tamanho;i++){
        if(frase[i] == 'a' || frase[i] == 'A'){
            totA++;
        }else if(frase[i] == 'e' || frase[i] == 'E'){
            totE++; 
        }else if(frase[i] == 'i' || frase[i] == 'I'){
            totI++;
        }else if(frase[i] == 'o' || frase[i] == 'O'){
            totO++;
        }else if(frase[i] == 'u' || frase[i] == 'U'){
            totU++;
        }
    }
    cout<<"A Frase e: "<<frase<<endl;
    cout<<"Tamanho da String: "<<tamanho<<endl;
    cout<<"Tota de (A): "<<totA<<endl;
    cout<<"Tota de (E): "<<totE<<endl;
    cout<<"Tota de (I): "<<totI<<endl;
    cout<<"Tota de (O): "<<totO<<endl;
    cout<<"Tota de (U): "<<totU<<endl;
}