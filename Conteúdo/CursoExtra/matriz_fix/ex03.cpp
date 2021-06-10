#include <iostream>
using namespace std;

int main(){
    int linhas,colunas;

    //Pergunta quantas linhas o usuário quer
    cout<<"Digte quantas linhas voce quer que sua matriz tenha: ";
    cin>>linhas;

    //Pergunta quantas colunas o usuário quer   
    cout<<"Digte quantas colunas voce quer que sua matriz tenha: ";
    cin>>colunas;

    int matriz1[linhas][colunas],matriz2[linhas][colunas],matriz_soma[linhas][colunas];

    //Pergunta os números da matriz 1
    cout<<endl<<"Matriz 1: "<<endl;
    for(int l = 0; l < linhas; l++){
        for(int c  = 0; c < colunas; c++){
            cin>>matriz1[l][c];
        }
    }

    //Pergunta os números da matriz 2
    cout<<endl<<"Matriz 2: "<<endl;
    for(int l = 0; l < linhas; l++){
        for(int c  = 0; c < colunas; c++){
            cin>>matriz2[l][c];
        }
    }

    //Soma matriz1 e matriz2
    for(int l = 0; l < linhas; l++){
        for(int c  = 0; c < colunas; c++){
            matriz_soma[l][c] = matriz1[l][c] + matriz2[l][c];
        }
    }

    //Escreve a Soma das matrizes 1 e 2
    cout<<endl<<"Matriz Soma: "<<endl;
    for(int l = 0; l < linhas; l++){
        for(int c  = 0; c < colunas; c++){
            cout<<matriz_soma[l][c]<<endl;
        }
    }
}