#include <iostream>
using namespace std;

int main(){
    int n;
    string resp;
    while(resp != "OK"){
        cout<<"Digite um numero: ";
        cin>>n;
        if(n<0){
            resp = "OK";
        }
    }
}