#include <iostream>
using namespace std;

int main(){
    int N;
    int A;
    int dias = 0;
    int totacessos = 0;
    int ok = 1;
    int tempo = 0;
    cin>>N;
    for(int i = 0;i<=N;i++){
        cin>>A;
        totacessos += A;
        tempo++;
        if(totacessos >= 100000000 && ok == 1){
            dias = tempo;
            ok = 0;
        }
    }
    cout<<dias;
}