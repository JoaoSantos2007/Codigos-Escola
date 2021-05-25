#include <iostream>
using namespace std;

// int main(){
//     int k;
//     int matriz[4][4];
//     cin>>k;
//     for(int i = 0;i<4;i++){
//         for(int r = 0;r<4;r++){
//             cin>>matriz[i][r];
//             if(i == r){
//                 matriz[i][r] = matriz[i][r]*k;
//             }    
//         }
//     }
//     cin>>k;
//     for(int i = 0;i<4;i++){
//         for(int r = 0;r<4;r++){
//             cout<<matriz[r][i]<<" ";    
//         }
//         cout<<endl;
//     }
// }

int main(){
    int k;
    int matriz[4][4];
    cin>>k;
    for(int i = 0;i<4;i++){
        for(int r = 0;r<4;r++){
            cin>>matriz[r][i];
            if(i == r){
                matriz[r][i] = matriz[r][i]*k;
            }
        }
    }
    int mult = k;
    cin>>k;
    for(int i = 0;i<4;i++){
        for(int r = 0;r<4;r++){
            cout<<matriz[r][i]<<" ";  
        }
        cout<<endl;
    }
}