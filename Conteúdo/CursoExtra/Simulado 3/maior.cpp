#include <iostream>
using namespace std;

int main(){
    int maior = -1;
    int n;
    while(n != 0){
        cin>>n;
        if(n > maior){
            maior = n;
        }
    }
    cout<<maior;
}