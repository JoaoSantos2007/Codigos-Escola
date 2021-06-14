#include <iostream>
using namespace std;

int main(){
    int alunos;
    float media = 0;
    cout<<"Quantos alunos(as) tem na turma: ";
    cin>>alunos;
    float notas[alunos];
    for(int i = 0; i < alunos; i++){
        cout<<"Digite a nota do(a) aluno(a) "<<i+1<<": ";
        cin>>notas[i];
    }

    for(int i = 0; i < alunos; i++){
        media += notas[i];
    }
    media = media/alunos;
    cout<<"A media e: "<<media<<endl;
}