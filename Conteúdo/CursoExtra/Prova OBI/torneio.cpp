#include <iostream>
using namespace std;

int main(){
    char resultado;
    int totganhos = 0;
    for(int i = 0;i < 6;i++){
        cin>>resultado;
        if(resultado == 'V'){
            totganhos++;
        }
    }
    if(totganhos >= 5 && totganhos <= 6){
        cout<<"1";
    }else if(totganhos >= 3 && totganhos <= 4){
        cout<<"2";
    }else if(totganhos >= 1 && totganhos <= 2){
        cout<<"3";
    }else{
        cout<<"-1";
    }
}