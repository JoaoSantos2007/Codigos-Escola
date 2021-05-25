#include <iostream>
using namespace std;

int main(){
    int vetor[10];
    int menor;
    for(int i = 0;i<10;i++){
        cin>>vetor[i];
        if(vetor[i]<menor)menor=vetor[i];
    }
    cout<<"Menor: "<<menor<<endl;
}