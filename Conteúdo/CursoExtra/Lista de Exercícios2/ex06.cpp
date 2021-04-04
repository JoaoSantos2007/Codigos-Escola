#include <iostream>
using namespace std;

int main(){
    int dia, ano, anoAtual, mes, totDias;
    cout<<"digite o ano atual: ";//obrigatório
    cin>>anoAtual;
    cout<<"digite o dia em que voce nasceu: ";//opcional
    cin>>dia;
    cout<<"digite o mes em que voce nasceu: ";//opcional
    cin>>mes;
    cout<<"digite o ano em que voce nasceu: ";//obrigatório
    cin>>ano;
    totDias = (anoAtual - ano) * 365;
    cout<<"em "<<anoAtual<<" voce completara "<<totDias<<" dias!!!";
}