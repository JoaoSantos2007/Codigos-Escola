#include <iostream>
using namespace std;

int main(){
    float nota, n, media;
    nota = 0;
    n = 0;
    for(int i = 1;i<=4;i++){
        cout<<"Digite a nota do bimestre "<<i<<": ";
        cin>>n;
        nota += n;
        media = nota/4;
    }
    cout<<"A media de todas as nota e "<<media;
}