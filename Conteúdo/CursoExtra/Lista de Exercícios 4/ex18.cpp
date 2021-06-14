#include <iostream>
using namespace std;

int main(){
    int idade, idadetot;
    float media;
    string status;
    idadetot = 0;
    for(int c = 1;c<=10;c++){
        cout<<"Digite a idade da pessoa "<<c<<": "<<endl;
        cin>>idade;
        idadetot += idade;
    }
    media = idadetot/10;
    if(media<=25){
        status = "jovem";
    }else if(media>=26 && media<=60){
        status = "adulta";
    }else{
        status = "idosa";
    }
    cout<<"A media da idade da turma e: "<<status;
}