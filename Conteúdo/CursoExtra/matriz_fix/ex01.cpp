#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Quantas posicoes voce quer nos vetores: ";
    cin>>n;
    int vetor1[n], vetor2[n];
    int vetor_soma[n];

    cout<<endl<<"Vetor 1:"<<endl;
    for(int i = 0;i < n;i++){
        cin>>vetor1[i];
    }

    cout<<endl<<"Vetor 2:"<<endl;
    for(int i = 0;i < n;i++){
        cin>>vetor2[i];
    }


    for(int i = 0;i < n;i++){
        vetor_soma[i] = vetor1[i] + vetor2[i];
    }

    cout<<endl<<"Vetor Soma: "<<endl;
    for(int i = 0;i < n;i++){
        cout<<vetor_soma[i]<<endl;
    }
}