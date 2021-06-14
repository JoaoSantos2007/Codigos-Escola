#include <iostream>
using namespace std;

int main(){
    float n1,nota,media;
    int i = 1;
    nota = 0;
    n1 = 0;
    do{
        cout<<"Digite a nota do bimestre "<<i<<": ";
        cin>>n1;
        nota += n1;
        i++;
    } while(i<=4);
    media = nota/4;
    if(media>=7){
        cout<<"Voce passou de ano\n";
    }else{
        cout<<"Voce esta de RO\n";
    }
    cout<<"Media: "<<media;
}