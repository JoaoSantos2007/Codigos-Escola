#include <iostream>
using namespace std;

int main(){
    int A,B,C;
    int H, L;
    cin>>A;
    cin>>B;
    cin>>C;
    cin>>H;
    cin>>L;
    if((A <= L && B <= H) || (A <= H && B <= L)){
        cout<<"S";
    }else if((A <= L && C <= H) || (A <= H && C <= L)){
        cout<<"S";
    }else if((C <= L && B <= H) || (C <= H && B <= L)){
        cout<<"S";
    }else{
        cout<<"N";
    }
}