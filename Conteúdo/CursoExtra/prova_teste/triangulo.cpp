#include <iostream>
using namespace std;

int main(){
    int A,B,C;
    cin>>A;
    cin>>B;
    cin>>C;
    if(A + B > C && B + C > A && A + C > B ){
        cout<<"S";
    }else{
        cout<<"N";
    }

}