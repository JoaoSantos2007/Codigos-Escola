#include <iostream>
using namespace std;

int main(){
    cout.precision(1);
    int N;
    int alunos = 0;
    cin>>N;
    float media = 0;
    float vetor[N];
    for(int i = 0; i < N; i++){
        cin>>vetor[i];
        media += vetor[i];
    }
    media = media/N;
    for(int i = 0; i < N; i++){
        if(vetor[i] >= media){
            alunos++;
        }
    }
    cout<<fixed<<media<<endl;
    cout<<alunos;
}