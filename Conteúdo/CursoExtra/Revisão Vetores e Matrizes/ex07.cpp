#include <iostream>
using namespace std;

int main(){
    int vezes = 30;
    int vetor[30];
    int vezes1 = 0,vezes2 = 0,vezes3 = 0,vezes4 = 0,vezes5 = 0,vezes6 = 0;
    for(int i = 0; i < vezes; i++){
        cin>>vetor[i];
    }

    for(int i = 0; i < vezes; i++){
        if(vetor[i] == 1){
            vezes1++;
        }
        if(vetor[i] == 2){
            vezes2++;
        }
        if(vetor[i] == 3){
            vezes3++;
        }
        if(vetor[i] == 4){
            vezes4++;
        }
        if(vetor[i] == 5){
            vezes5++;
        }
        if(vetor[i] == 6){
            vezes6++;
        }
    }
    cout<<endl;
    cout<<"Vezes 1: "<<vezes1<<endl;
    cout<<"Vezes 2: "<<vezes2<<endl;
    cout<<"Vezes 3: "<<vezes3<<endl;    
    cout<<"Vezes 4: "<<vezes4<<endl;
    cout<<"Vezes 5: "<<vezes5<<endl;
    cout<<"Vezes 6: "<<vezes6<<endl;
}