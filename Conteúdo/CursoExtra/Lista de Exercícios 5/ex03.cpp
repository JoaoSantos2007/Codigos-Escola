#include <iostream>
using namespace std;

int main(){
    int n[18];
    for(int i = 0;i<18;i++){
        cout<<"Digite um numero: ";
        cin>>n[i];
    }
    for(int i = 0;i<18;i++){
        if(n[i] % 2 == 0){
            cout<<n[i]<<endl;
        }
    }
}