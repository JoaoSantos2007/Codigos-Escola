#include <iostream>
using namespace std;

int main(){
    string resp;
    int n;
    while(resp !="OK"){
        cout<<"Digite um numero: ";
        cin>>n;
        if(n % 2 == 0){
            resp ="OK";
        }
    }
}