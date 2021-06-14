#include <iostream>
using namespace std;

int main(){
    int v1 = 0,v2 = 0,v3 = 0,v4 = 0,v5 = 0,v6 = 0;
    int vetor[30];
    for(int i = 0;i<30;i++){
        cin>>vetor[i];
        if(vetor[i] == 1){
            v1++;
        }else if(vetor[i] == 2){
            v2++;
        }else if(vetor[i] == 3){
            v3++;
        }else if(vetor[i] == 4){
            v4++;
        }else if(vetor[i] == 5){
            v5++;
        }else if(vetor[i] == 6){
            v6++;
        }
    }
    cout<<"v1: "<<v1<<endl;
    cout<<"v2: "<<v2<<endl;
    cout<<"v3: "<<v3<<endl;
    cout<<"v4: "<<v4<<endl;
    cout<<"v5: "<<v5<<endl;
    cout<<"v6: "<<v6<<endl;
}