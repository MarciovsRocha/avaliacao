#include <iostream>

using namespace std;

int calcFibonacci(int x){
    // validacao do parametro passado
    if (0 > x){
        cout << "Entre com um numero inteiro positivo\n";
        return 0;
    }
    if (0 == x) return 0;
    if (1 == x) return 1;
    int aux = 0;
    for (int cont = 0;cont<x;cont++){
        
    }


}

int main(){
    cout << "Digite o n-esimo termo da sequencia de fibonacci";
    calcFibonacci(10);
    return 0;
}