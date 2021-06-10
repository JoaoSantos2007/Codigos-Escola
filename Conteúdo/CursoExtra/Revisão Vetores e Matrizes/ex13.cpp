#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int matriz[n][n];

    cout<<endl;    
    for(int l = 0;l < n;l++){
        for(int c = 0;c < n;c++){
            cout<<"Digite um numero: ";
            cin>>matriz[l][c];
        }
    }


    cout<<endl<<endl<<endl;
    for(int l = 0;l < n;l++){
        for(int c = 0;c < n;c++){
            cout<<matriz[l][c]<<" ";
        }
        cout<<endl;
    }


    cout<<endl<<endl<<endl;
    for(int l = 0;l < n;l++){
        for(int c = 0;c < n;c++){
            if(matriz[l][c] % 2 == 0){
                if(c != 0 && c != n-1){
                    cout<<matriz[l][c-1]<<" ";
                    cout<<matriz[l][c]<<" ";
                    cout<<matriz[l][c+1]<<" ";
                    cout<<endl;
                }
            }
        }
    }
}