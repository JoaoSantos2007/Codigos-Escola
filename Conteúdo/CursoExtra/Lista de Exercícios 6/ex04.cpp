//Resolvido
#include <iostream>
using namespace std;

int main(){
    int L, C;
    int maior = 0;
    int menor = 0;
    int n1 = 0;
    int n2 = 0;
    cin>>L;
    cin>>C;
     int z = L-1;
    int matriz[L][C];
    for(int i = 0;i<L;i++){
        for(int c = 0;c<C;c++){
            cin>>matriz[i][c];
        }
    }
    cout<<"Matriz formada:"<<endl;
    for(int i = 0;i<L;i++){
        for(int c = 0;c<C;c++){
            if(matriz[i][c] > 0){
                maior = maior + 1;
            }else if(0 > matriz[i][c]){
                menor = menor + 1;
            }
            if(C == L){
                if(i == c){
                    n1 = n1 + matriz[i][c];
                }
            }
            cout<<matriz[i][c];
            if (c == C-1){
            }else{
                cout<<" ";
            }
        }
    n2 = n2 + matriz[i][z];
    z--;    
    cout<<endl;    
    }
    
    if(C==L){
        cout<<"A diagonal principal e secundaria tem valor(es) "<<n1<<" e "<<n2<<" respectivamente."<<endl; 
    }else{
        cout<<"A diagonal principal e secundaria nao pode ser obtida."<<endl;
    }
    cout<<"A matriz possui "<<menor<<" numero(s) menor(es) que zero."<<endl;
    cout<<"A matriz possui "<<maior<<" numero(s) maior(es) que zero."<<endl;
}