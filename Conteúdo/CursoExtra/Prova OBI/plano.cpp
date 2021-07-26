#include <iostream>
using namespace std;

int main(){
    int X;
    cin>>X;
    int N;
    cin>>N;
    int vetor[N];
    for(int i = 0;i < N;i++){
        cin>>vetor[i];
    }
    int quota_mes = 0;
    for(int i = 0;i < N;i++){
        quota_mes = X + quota_mes - vetor[i];
    }
    quota_mes = quota_mes + X;
    cout<<quota_mes;

}