#include <iostream>

using namespace std;

int calcFibonacci(int x){
    // validacao do parametro passado
    if (0 > x){
        cout << "Entre com um numero inteiro positivo!\n";
        return 0;
    }
    // breaks 
    if (0 == x) return 0;
    if (1 == x) return 1;
    return calcFibonacci(x-1) + calcFibonacci(x-2); // normal case
}

int main(){
    cout << "Digite o n-esimo termo da sequencia de fibonacci a ser calculado\n";
    int x;
    cin >> x;
    cout << calcFibonacci(x) << endl;
    return 0;
}