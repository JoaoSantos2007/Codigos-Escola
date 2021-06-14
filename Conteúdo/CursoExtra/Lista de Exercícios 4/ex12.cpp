#include <iostream>
using namespace std;

int main(){
    int tab, mult;
    cout<<"Tabuada do: ";
    cin>>tab;
    for(int i = 0;i<=10;i++){
        mult = i * tab;
        cout<<i<<" x "<<tab<<" = "<<mult<<endl;
    }
}