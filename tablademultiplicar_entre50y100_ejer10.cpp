//10) Se lee un entero por teclado que indica una tabla de multiplicar. Este entero debe estar entre 1 y 50. 

//El bucle debe imprimir la tabla de multiplicar en forma descendente, desde el 12 al 1

//por ejemplo si el entero ingresado es 3, el resultado sería:

//3 x 12 = 36

//3 x 11 = 33

//3 x 10 = 20

//. . .

//. . .

//3 x 1 = 3

#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un entero entre 1 y 50: ";
    cin >> numero;
    
    if (numero >= 1 && numero <= 50) {
        for (int i = 12; i >= 1; i--) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }
    } else {
        cout << "El entero ingresado está fuera del rango válido." << endl;
    }
    
    return 0;
}
