#include <iostream>
using namespace std;

int main(){
    int A,B,C,resp = 3;
    cin>>A;
    cin>>B;
    cin>>C;
    if(A<B || A<C || B<A || B<C || C<A || C<B){
        resp = 2;
    }
    if((A+B)<C || (B+C)<A || (A+C)<B){
        resp = 1;
    }
    cout<<resp;
}