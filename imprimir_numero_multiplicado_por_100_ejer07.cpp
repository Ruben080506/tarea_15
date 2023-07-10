//7) Un bucle for inicia en 50 y termina en 5, con decrementos de 3 en 3. 
//Se pide que imprima cada número multiplicado x 100. 

#include <iostream>
using namespace std;

int main() {
    for (int i = 50; i >= 5; i -= 3) {
        cout << i << " x 100 = " << i * 100 << endl;
    }
    
    return 0;
}
