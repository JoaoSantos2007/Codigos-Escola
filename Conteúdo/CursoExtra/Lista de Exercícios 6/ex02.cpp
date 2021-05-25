#include <iostream>
using namespace std;

int main(){
    int matriz[2][3];
    int soma = 0;
    for(int i = 0;i<2;i++){
        for(int c = 0;c<3;c++){
            cin>>matriz[i][c];
        }
    }
    for(int i = 0;i<2;i++){
        for(int c = 0;c<3;c++){
            cout<<matriz[i][c]<<"";
            soma += matriz[i][c];
        }
        cout<<endl;
    }
    cout<<soma;
}