#include <iostream>
using namespace std;

int main(){
    int M,A,B;
    cin>>M;
    cin>>A;
    cin>>B;
    int idade = M - (A+B);
    if(A > B && A > idade){
        cout<<A;
    }else if(A < B && B > idade){
        cout<<B;
    }else if(idade > A && idade > B){
        cout<<idade;
    }
}