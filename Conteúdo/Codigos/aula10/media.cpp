#include <iostream>
using namespace std;

int main(){
    float p1, pic, media;
    cin >> p1 >> pic;
    media = (p1 + 2 + pic)/3;

    if(media < 5){
        cout<<"Recuperacao!"<<endl;
    }else{
        cout<<"Passou!"<<endl;
    }
}