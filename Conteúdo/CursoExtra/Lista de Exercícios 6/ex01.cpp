#include <iostream>
using namespace std;

int main(){
    int matriz[3][5];
    for(int i = 0;i<3;i++){
        for(int c = 0;c<5;c++){
            cin>>matriz[i][c];
        }
    }
    cout<<matriz[0][0]<<endl;
    cout<<matriz[1][2]<<endl;
    cout<<matriz[2][4]<<endl;
}