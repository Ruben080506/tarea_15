////uso del bucle for imprime en pantalla 10 veces un saludo
#include <iostream>
using namespace std;
main()
{
    //declare la variable de incremento en el bucle for (variable k)
    for (int k=1; k<=10; k++)
    {
         cout<<endl<<"Bienvenido a la PUCE ESMERALDAS";
    }
    //cout<<endl<<"El valor de k es "<<k; 
    //se produce error en al variable k, ya que tiene alcanse dentro del bucle for
    
    //declaro la variable fuera del bucle (variable j)
    int j;
    int num=0;
    for (j=5; j<50; j+=2)//inicia en 5, se ejecuta mientras la j sea menos que 50, incremento de 2 en 2
    {
        num=j*10;
         cout <<endl<<"el valor de j es: "<<j<<", el valor de num es "<<num;
    }
         cout<<endl<<"El valor de j es "<<j;

    //bucle for descendente
    for(int k=30; k>15; k--)
    {
          cout<<endl<<"el valor de k es "<<k;
    }

}

return 0;