#include <iostream>
using namespace std;

int main(){
    int R,C;
    cin>>R;
    cin>>C;
    int matriz[105][105];
    for(int i = 0;i<R;i++){
        for(int t = 0;t<C;t++){
            cin>>matriz[i][t];
        }
    }
    for(int i = 0;i<R;i++){
        for(int t = 0;t<C;t++){
            cout<<matriz[t][i]<<" ";
        }
        cout<<endl;
    }
}