#include <iostream>
using namespace std;

int main(){
    int n[13];
    for(int c = 0;c<13;c++){
        cout<<"Digite um numero: ";
        cin>>n[c];
    }
    for(int c = 0;c<13;c++){
        if(n[c] % 2 != 0){
            cout<<n[c]<<endl;
        }
    }
}