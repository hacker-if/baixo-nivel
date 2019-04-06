// Importando a biblioteca que contém o cout e o cin
#include <iostream>  

// Usando o namespace std
using namespace std;

/*
 *  Esse é o protótipo da função.
 *  Existem duas opções:
 *  Ou você escreve o protótipo aqui e declara a função depois da main; (Foi o que eu fiz)
 *  Ou você já declara a função aqui em cima. 
 */ 
long double potencia(int x, int n);

// O programa começa execução aqui
int main() {
    int x, n; 
    long double pot;

    cout << "Calculadora de potências.\n";
    cout << "Digite x: ";
    cin >> x;
    cout << "Digite n: ";
    cin >> n;
    
    pot = potencia(x, n);

    cout << x << " elevado a " << n << " é " << pot << "\n";

    return 0;
}

/* Essa é a nossa função potência. Usei long double para conseguir tamanhos maiores, 
 * já que potência estoura muito fácil.
 */
long double potencia(int x, int n) {
    long double pot = 1;

    for(int i = 0; i < n; i++) {
        pot *= x;
    }
    
    return pot;
}
