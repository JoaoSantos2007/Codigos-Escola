#include <iostream>
using namespace std;

int main(){
    int N,M,O;
    cin>>N>>M>>O;
    int A[N][M];
    int B[M][O];
    int C[O][N];
    for(int i = 0;i<N;i++){
        for(int c = 0;c<M;c++){
            cin>>A[i][c];
        }
    }
    for(int i = 0;i<N;i++){
        for(int c = 0;c<M;c++){
            cin>>B[i][c];
        }
    }
    for(int i = 0;i<N;i++){
        for(int c = 0;c<M;c++){
            C[i][c] = A[i]*B[c];
        }
    }
    for(int i = 0;i<N;i++){
        for(int c = 0;c<M;c++){
            cout<<C[i][c]<<" ";
        }
        cout<<endl;
    }
}