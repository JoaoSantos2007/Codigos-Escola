#include <iostream>
using namespace std;

int main(){
    int N;
    char P;
    cin>>N;    
    cin>>P;    

    int movimentos[N];
    for(int i = 0;i < N;i++){
        cin>>movimentos[i];
    }
    for(int i = 0;i < N;i++){
        if(movimentos[i] == 1){
            if(P == 'A'){
                P = 'B';
            }else if(P == 'B'){
                P = 'A';
            }
        }else if(movimentos[i] == 2){
            if(P == 'B'){
                P = 'C';
            }else if(P == 'C'){
                P = 'B';
            }
        }else if(movimentos[i] == 3){
            if(P == 'A'){
                P = 'C';
            }else if(P == 'C'){
                P = 'A';
            }
        }
    }
    cout<<P;
}