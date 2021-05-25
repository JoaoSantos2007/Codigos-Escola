#include <iostream>
using namespace std;

int main(){
    int n;
    while(n != 0){
        cin>>n;
        char vetor[n];
        for(int i = 0;i<n;i++){
            cin>>vetor[i];
        }
        for(int i = n-1;i>=0;i--){
            cout<<vetor[i];
        }    
    }
}