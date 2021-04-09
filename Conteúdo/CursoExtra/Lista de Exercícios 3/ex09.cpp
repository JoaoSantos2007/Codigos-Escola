#include <iostream>
using namespace std;
int main(){
    int A,B,C,D;
    cin>>A;
    cin>>B;
    cin>>C;
    cin>>D;
    if((A==B+C+D)&&(B+C==D)&&(B==C)){
        cout<<"S";
    }else{
        cout<<"N";
    }
}