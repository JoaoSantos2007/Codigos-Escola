#include <iostream>
using namespace std;

int main(){
    int pressmot,pressbomba,dif;
    cout<<"Digite a pressao desejada pelo motorista: ";
    cin>>pressmot;
    cout<<"Digite a pressao indicada na bomba: ";
    cin>>pressbomba;
    dif=pressmot-pressbomba;
    cout<<"A diferenca entre a pressao desejada pelo motorista e a pressao indicada pela bomba e "<<dif; 
}