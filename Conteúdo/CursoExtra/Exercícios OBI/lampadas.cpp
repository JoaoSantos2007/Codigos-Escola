#include <iostream>
using namespace std;

int main(){
    int A,B,N;
    A = 0;
    B = 0;
    cin>>N;
    int interruptores[N];
    for(int i = 0;i<N;i++){
        cin>>interruptores[i];
    }
    for(int i = 0;i<N;i++){
        cin>>interruptores[i];
    }
    for(int i = 0;i<N;i++){
        if(interruptores[i]==1){           
            if(A == 0){
                A = 1;
            }else{
                A = 0;
            }
        }else if(interruptores[i]==2){
            if(A == 0){
                A = 1;
            }else{
                A = 0;
            }
            if(B == 0){
                B = 1;
            }else{
                B = 0;
            }
        }
    }
    cout<<A<<endl;
    cout<<B<<endl;
}