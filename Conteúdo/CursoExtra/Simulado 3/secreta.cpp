#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int repetidos = 0;
    bool vezes1 = true, vezes2 = true;
    int vetor[N];
    for(int i = 0;i < N;i++){
        cin>>vetor[i];
    }
    for(int i = 0;i < N;i++){
        if(vetor[i] == 1 && vezes1 == true){
            vezes1 = false;
            vezes2 = true;
            repetidos++;
        }
        if(vetor[i] == 2 && vezes2 == true){
            vezes2 = false;
            vezes1 = true;
            repetidos++;
        }
    }
    cout<<repetidos;
}