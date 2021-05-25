#include <iostream>
using namespace std;

int main(){
    int N,P,M;
    int peq = 0,gran = 0;
    cin>>N;
    int T[N];
    for(int i = 0;i<N;i++){
        cin>>T[i];
    }
    for(int i = 0;i<N;i++){
        if(T[i]==1){
            peq++;
        }else if(T[i]==2){
            gran++;
        }
    }
            
    cin>>P;
    cin>>M;
    if(P>=peq && M >= gran){
        cout<<"S";
    }else{
        cout<<"N";
    }
}