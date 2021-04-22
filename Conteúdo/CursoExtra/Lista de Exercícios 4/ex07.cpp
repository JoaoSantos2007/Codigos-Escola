#include <iostream>
using namespace std;

int main(){
    int soma, n1;
    soma = 0;
    n1 = 0;
    for(int n = 1;n<=10;n++){
        cout<<"Digite um numero "<<n<<": "<<endl;
        cin>>n1;
        soma += n1;
    }
    cout<<"A soma de todos os numeros e "<<soma;
}