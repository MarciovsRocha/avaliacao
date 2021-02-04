#include <iostream>

using namespace std;

int pesquisa_linear(int ar[],int tamanoArray, int key){
    for (int c = 0;c<tamanoArray;c++){
        if (key == ar[c]) return c;
    }
    return -1;
}

int main(){
    int vetor[] = {1,4,10,23,56};
    int tamanhoVetor = 5;
    int chave = 2;
    if (-1 != pesquisa_linear(vetor,tamanhoVetor,chave)){
        cout << "O indice da chave dentro do array informado eh: " << pesquisa_linear(vetor,tamanhoVetor,chave) << endl;
    }else{
        cout << "A chave passada nao esta dentro do array!\n";
    }
    
    return 0;
}

/*

*/