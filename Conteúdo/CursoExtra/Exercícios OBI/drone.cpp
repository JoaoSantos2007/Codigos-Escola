#include <iostream>
using namespace std;

int main(){
    int A,B,C,H,L;
    cin>>A;
    cin>>B;
    cin>>C;
    cin>>H;
    cin>>L;
    if((A<=H and B <= L)or(B<=H and A<=L)
    or(A<=H and C<=L)or(C<=H and A<=L)
    or(B<=H and C<=L)or(C<=H and B<=L)){
        cout<<"S";
    }else if(H>B && L>B){
        cout<<"S";
    }else if(H>C && L>C){
        cout<<"S";
    }else{
        cout<<"N";
    }
}