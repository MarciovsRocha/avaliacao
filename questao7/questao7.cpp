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
    cout << calcFibonacci(20) << endl;
    return 0;
}