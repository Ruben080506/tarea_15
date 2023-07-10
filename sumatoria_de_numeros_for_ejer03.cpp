//3) Realice la sumatoria de los números comprendidos entre 10 
// y 20. Análisis: 10 + 11 + 12 + 13 + 14 + . . . . . +20 (Realizado en clases). 

#include <iostream>
using namespace std;
main()
{
    int suma=0;
    int r;
    for (r=10; r<=20; r++)
    {
        suma=r+suma;
        cout<<endl<<"la sumatoria de los numeros comprendidos entre 10 y 20 es: "<<suma;
    }
    return 0;
}