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
            if(matriz[l][c] % 2 != 0){
                matriz[l][c] = 0;
            }
        }
        cout<<endl;
    }


    cout<<endl<<endl<<endl;
    for(int l = 0;l < n;l++){
        for(int c = 0;c < n;c++){
            cout<<matriz[l][c]<<" ";
        }
        cout<<endl;
    }
}