#include <iostream>
using namespace std;

int main(){
    int vetor[20];
    for(int i = 0;i<20;i++){
        cin>>vetor[i];
    }
    for(int i = 20;i>=0;i--){
        cout<<vetor[i]<<endl;
    }
}