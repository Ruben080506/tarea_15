//9) Realice un bucle for que imprima 20 números aleatorios comprendidos entre 50 y 100.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Inicializar generador de números aleatorios
    
    for (int i = 0; i < 20; i++) {
        int numero = rand() % 51 + 50; // Generar número aleatorio entre 50 y 100
        cout << numero << endl;
    }
    
    return 0;
}
