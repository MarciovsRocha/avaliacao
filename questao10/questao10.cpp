#include <iostream>
#include <string>
using namespace std;
// funcao desenvolvida no exercicio 8
int tamanhoString(string str){
    int cont = 0;
    for (char& c : str){
        cont++;
    }
    return cont;
}

string inverteString(string str){
    string resultado;
    for(int i = tamanhoString(str);i>=0;i--){
        resultado += str[i];
    }
    return resultado;
}

int main(){
    string str = "marcio";
    cout << inverteString(str) << endl;
    return 0;
}