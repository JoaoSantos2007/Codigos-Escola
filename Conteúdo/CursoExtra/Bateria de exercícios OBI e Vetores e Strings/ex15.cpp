#include <iostream>
using namespace std;

int main(){
    string frase;
    bool repetir = true;
    int A = 0, E = 0, I = 0, O = 0 , U = 0;
    int i = 0;
    getline(cin, frase);
    while(repetir){
        if(frase[i] != '\0'){
            if(frase[i] == 'a' || frase[i] == 'A'){
                A++;
            }else if(frase[i] == 'e' || frase[i] == 'E'){
                E++;
            }else if(frase[i] == 'i' || frase[i] == 'I'){
                I++;
            }else if(frase[i] == 'o' || frase[i] == 'O'){
                O++;
            }else if(frase[i] == 'u' || frase[i] == 'U'){
                U++;
            }
        }else{
            repetir = false;
        }
        i++;
    }
    cout<<endl;
    cout<<" A("<<A<<") E("<<E<<") I("<<I<<") O("<<O<<") U("<<U<<")";
    cout<<endl;
}