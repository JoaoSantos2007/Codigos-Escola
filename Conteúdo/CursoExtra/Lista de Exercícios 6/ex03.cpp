#include <iostream>
using namespace std;

int main(){
    int matriz[2][5];
    int soma = 0;
    for(int i = 0;i<2;i++){
        for(int c = 0;c<5;c++){
            cin>>matriz[i][c];
        }
    }
    soma = matriz[0][0] + matriz[1][4];
    if(matriz[0][2] == matriz[1][2]){
        cout<<matriz[0][2]<<" igual a "<<matriz[1][2];
    }else if(matriz[0][2] > matriz[1][2]){
        cout<<matriz[0][2]<<" maior que "<<matriz[1][2];
    }else if(matriz[0][2] < matriz[1][2]){
        cout<<matriz[0][2]<<" menor que "<<matriz[1][2];
    }
    cout<<endl<<"Soma: "<<soma;
}