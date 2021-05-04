#include <iostream>
using namespace std;

int main(){
    int n[20];
    for(int c = 0;c<20;c++){
        cout<<"Digite um numero: ";
        cin>>n[c];
    }
    for(int c = 19;c >= 0;c--){
        cout<<n[c]<<endl;
    }
}