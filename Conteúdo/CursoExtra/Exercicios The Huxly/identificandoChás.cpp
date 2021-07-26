// #include <iostream>
// using namespace std;

// int main(){
//     int T, A, B, C, D, E;
//     cin>>T;
//     int certas = 0;
//     cin>>A>>B>>C>>D>>E;
//     if(A == T){
//         certas++;
//     }
//     if(B == T){
//         certas++;
//     }
//     if(C == T){
//         certas++;
//     }
//     if(D == T){
//         certas++;
//     }
//     if(E == T){
//         certas++;
//     }
//     cout<<certas;
// }

#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    int acertos = 0;
    int vetor[5];
    for(int i = 0;i<5;i++){
        cin>>vetor[i];
    }
    for(int i = 0;i<5;i++){
        if(vetor[i] == T){
            acertos++;
        }
    }
    cout<<acertos;
}