#include <iostream>
using namespace std;

int main(){
    float n1, n2, media;
    cout<<"Digite a nota da primeira prova: ";
    cin>>n1;
    cout<<"Digite a nota da segunda prova: ";
    cin>>n2;
    media = (n1+n2)/2;
    cout<<"Sua media e "<<media<<endl;
    if (media<5){
        cout<<"Voce esta de recuperacao "<<endl;
    }else{
        cout<<"Voce passou de ano "<<endl;
    }
}