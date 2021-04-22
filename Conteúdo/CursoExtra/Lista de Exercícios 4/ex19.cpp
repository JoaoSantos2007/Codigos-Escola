#include <iostream>
using namespace std;

int main(){
    int par, impar, n1;
    impar = 0;
    par = 0;
    for(int c = 1;c<=10;c++){
        cout<<"Digite o numero "<<c<<": ";
        cin>>n1;
        if(n1 % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }
    cout<<"Par: "<<par<<endl;
    cout<<"Impar: "<<impar<<endl;
}