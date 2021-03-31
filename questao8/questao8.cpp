#include <iostream>
#include <string>

using namespace std;

int tamanhoString(string str){
    int cont = 0;
    char* ch = &str[0];
    while (*ch != '\0'){
        cont++;
        *ch++;
    }
    return cont;
}

int main(){
    string myStr; 
    myStr = "Minha";
    cout << "tamanho da String: " << tamanhoString(myStr) << endl;
    myStr = "Minha String";
    cout << "tamanho da String: " << tamanhoString(myStr) << endl;
    return 0;
}