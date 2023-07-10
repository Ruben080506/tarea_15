//2) Diseñe un programa que utilice un bucle for para imprimir la tabla de multiplicar del 5, 
//desde el 1 al 15 (Realizado en clases).
#include <iostream>
using namespace std;
main()
{
    int tabla, r;
    for (tabla=1; tabla<=15; tabla++)
    {
        r=tabla*5;
        cout<<endl<<" 5 * "<<tabla<<" = "<<r;
    }
    return 0;
}
