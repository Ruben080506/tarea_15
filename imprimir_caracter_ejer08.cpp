//8) Se lee por teclado un carácter  y un entero. El carácter representa la letra que se imprimirá en pantalla 
//y el entero indica las veces que se imprimirá de esta forma:

#include <iostream>
using namespace std;

int main() {
    char caracter;
    int repeticiones;
    
    cout << "Ingrese un caracter: ";
    cin >> caracter;
    
    cout << "Ingrese el número de repeticiones: ";
    cin >> repeticiones;
    
    for (int i = 0; i < repeticiones; i++) {
        for (int j = 0; j < repeticiones; j++) {
            cout << caracter << " ";
        }
        cout << endl;
    }
    
    return 0;
}