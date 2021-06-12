#include <iostream>
using namespace std;

int main(){
    int A, S, D;
    cin>>A;
    cin>>S;
    cin>>D;
    int percurso = 0;
    int dias = 0;
    while(A > percurso){
        percurso += S;
        if(percurso < A){
            percurso -= D; 
        }
        dias++;
    }
    cout<<dias;
}