#include <iostream>
using namespace std;

int main(){
    int p1, p2;
    int p_maior;
    cout<<"Digite quantas posicoes vai ter seu primeiro vetor: ";
    cin>>p1;
    cout<<"Digite quantas posicoes vai ter seu segundo vetor: ";
    cin>>p2;
    int vetor1[p1], vetor2[p2];
    for(int i = 0;i < p1; i++){
        cout<<"Digte um numero: "<<endl;
        cin>>vetor1[i];
    }
    for(int i = 0;i < p2; i++){
        cout<<"Digte um numero: "<<endl;
        cin>>vetor2[i];
    }
    if(p1 >= p2){
        p_maior = p1;
    }else{
        p_maior = p2;
    }
    for(int i = 0;i < p_maior;i++){
        
    }
}