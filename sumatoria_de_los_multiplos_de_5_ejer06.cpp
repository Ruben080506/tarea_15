//6) Un bucle for inicia en 7 y termina en 100. Se pide realizar la sumatoria de los números múltiplos de 5. 
// Nota:se suman todos los número múltiplos de 5 excepto el 35, 70 y 95

#include <iostream>
using namespace std;

int main() {
    int sumatoria = 0;
    
    for (int i = 7; i <= 100; i++) {
        if (i % 5 == 0 && i != 35 && i != 70 && i != 95) {
            sumatoria += i;
        }
    }
    
    cout << "La sumatoria de los múltiplos de 5 (excepto el 35, 70 y 95) entre 7 y 100 es: " << sumatoria << endl;
    
    return 0;
}