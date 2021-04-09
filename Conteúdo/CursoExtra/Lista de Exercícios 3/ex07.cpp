#include <iostream>
using namespace std;
int main(){
    int P,R;
    cin>>P>>R;
    if(P == 1 && R == 1){
        cout<<"A";
    }else if(P == 1 && R == 0){
        cout<<"B";
    }else{
        cout<<"C";
    }
}