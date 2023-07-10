//4) Realice un programa que lee por teclado un 
//entero que indica la cantidad de veces que se imprimirá una X.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un entero positivo: ";
    cin >> n;
    
    if (n < 0) {
        cout << "El número ingresado es negativo." << endl;
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        cout << "X ";
    }
    
    cout << endl;
    return 0;
}
