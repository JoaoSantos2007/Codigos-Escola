#include <iostream>
using namespace std;

int main(){
    float n[10],somatot,media;
    somatot = 0;
    for(int c = 0;c<10;c++){
        cout<<"Digite um numero: ";
        cin>>n[c];
    }
    for(int c = 0;c<10;c++){
        somatot += n[c];
    }
    media = somatot/10;
    cout<<"Media: "<<media;
}