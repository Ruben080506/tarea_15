// 5) Realice un programa que calcule la sumatoria de los números pares comprendidos entre 20 y 100.
//Análisis: 20 + 22 + 24 + 26 + . . . + 100

#include <iostream>
using namespace std;

int main() {
    int sumatoria = 0;
    
    for (int i = 20; i <= 100; i += 2) {
        sumatoria += i;
    }
    
    cout << "La sumatoria de los números pares entre 20 y 100 es: " << sumatoria << endl;
    
    return 0;
}
