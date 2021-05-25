//Resolvido
#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    int l = T;
    int c = T;
    int M[l][c];
    for(int i = 0;i<T;i++){
        for(int r = 0;r<T;r++){
            cin>>M[i][r];
            if(M[i][r]<0){
                M[i][r] = 2*M[i][r];
            }
        }
    }
    for(int i = 0;i<T;i++){
        for(int r = 0;r<T;r++){
            cout<<M[r][i];
            if(r != T-1){
                cout<<" ";
            }
            }
        cout<<endl;            
        }
}