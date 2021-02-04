#include <iostream>
#include <string>

using namespace std;

int tamanhoString(string str){
    int cont = 0;
    for (char& c : str){
        cont++;
    }
    return cont;
}

int main(){
    string myStr = "Minha String";
    cout << "tamanho da String: " << tamanhoString(myStr) << endl;
    return 0;
}