#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

void desenhar();
int verif_tamanho(string palavra);
bool desenhar(string tem,int nivel,bool final);
char transformar_string_char(char words, string ); 

char letras_usadas[27];

int main(){
    //Declaração de Variáveis
    bool final=true, repetido = true;
    string word;
    string tema = "UNDEFINED";
    int p = 0,tam,nivel = 0;
    char letra;

    // char palavra[tam] = word.c_str();
    //inicio   
    
    cout<<"Digite o tema: ";
    getline(cin, tema);
    cout<<"Digite a palavra: ";
    getline(cin, word);
    tam = verif_tamanho(word);
    char palavras[tam];
    palavras = transformar_string_char();    
    while(final){
        final = desenhar(tema,nivel,final);
        while(repetido){
        cout<<"Digite uma letra: ";
        cin>>letra;
        for(int i = 0;i<27;i++){
            if(letra == letras_usadas[i]){
                repetido = true;
            }else{
                repetido = false;
            }
        }
        if(repetido){
            cout<<endl<<"Letra repetida"<<endl;
        }else{
            for(int i = 0;i<tam;i++){
                if(word[i] == letra){
                    letras_usadas[p] = letra;
                }else{
                    letras_usadas[p] = letra;
                    nivel++;
                    cout<<endl<<"Errou! "<<endl;
                    }
                }            
            }
        }
        final = desenhar(tema,nivel,final);
        cout<<repetido;
        p++;        
    }     
}

//Funções

bool desenhar(string tem,int nivel,bool final){
    system("clear");
    int i = 0;
    cout<<"========================="<<endl;
    cout<<"     Jogo da Forca       "<<endl;
    cout<<"========================="<<endl<<endl;
    cout<<"                         Letras Usadas: "<<endl;
    // while(letras_usadas[i]!='\0'){
    //     cout<<letras_usadas[i];
    //     if(letras_usadas[i+1]!='\0')cout<<" - ";
    //     i++;
    // }
    cout<<"________________         Tema: "<<tem<<endl;
    cout<<"|            |     "<<endl;
    if(nivel >= 1){
        cout<<"|           ( )"<<endl;
    }else{
        cout<<"|               "<<endl;
    }
    if(nivel >= 2){
        cout<<"|            |"<<endl;
    }else if(nivel >= 3){
        cout<<"|           /  "<<endl; 
    }else if(nivel >= 4){
        cout<<"|             \\"<<endl;
    }else{
        cout<<"|               "<<endl;
    }
    if(nivel >= 5){
        cout<<"|            |"<<endl;
    }else{
        cout<<"|             "<<endl;
    }
    if(nivel >= 6){
        cout<<"|           /  "<<endl;
    }else if(nivel >= 7){
        cout<<"|             \\"<<endl;
    }else{
        cout<<"|             "<<endl;
    }  
    cout<<"|             "<<endl<<endl;
    if(nivel >= 8){
        final = false;
    }
    return(final);
}

int verif_tamanho(string palavra){
    int i = 0,tamanho = 0;
    bool fim = true;
    while(fim){
        if(palavra[i] == '\0'){
            tamanho = i;
            fim = false;
        }
        i++;
    }
    return(tamanho);
}
