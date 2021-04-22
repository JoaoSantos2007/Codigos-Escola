#include <iostream>
using namespace std;

int main(){
    int N,A,dia;
    cin>>N;
    dia = 0;
    int visitas,visitados;
    visitas = 0;
    for(int i = 1;i<=N;i++){
        cin>>A;
        dia++;
        visitas += A;
        if(visitas >=1000000 && visitados == 0){
            visitados = dia;
        }
    }
    cout<<visitados;
}