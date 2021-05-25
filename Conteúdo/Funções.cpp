#include <iostream>
using namespace std;

void texto();
void soma(int n1,int n2);

int main(){
    for(int i = 0;i<=7;i++){
        texto();
        soma(15,200);
    }
}

void texto(){
    cout<<"Hello World\n\n";
}

void soma(int n1,int n2){
    cout<<"Soma dos valores "<<n1+n2<<endl;
}

int soma2 