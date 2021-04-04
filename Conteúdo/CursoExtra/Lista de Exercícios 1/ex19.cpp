#include <iostream>
using namespace std;

int main(){
    cout.precision(2);
    int n1,n2;
    n1=10;
    n2=3;
    float div;
    div = n1/n2; 
    cout<<"A divisao de 10 por 3 e: "<<fixed<<div;
}