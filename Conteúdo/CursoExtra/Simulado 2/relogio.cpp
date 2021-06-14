#include <iostream>
using namespace std;

int main(){
    int R, F, C;
    cin>>R;
    cin>>F;
    cin>>C;
    if(R*3 < F || C < 95){
        cout<<"diminuir";
    }else if(R*2 > F && C > 97){
        cout<<"aumentar";
    }else{
        cout<<"manter";
    }
}