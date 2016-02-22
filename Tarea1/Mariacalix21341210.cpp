#include <iostream>

using namespace std;

int main()
{
     int c=0;int numero; int suma=0; int mayor=0; int caso1=0; int caso2=0;  int caso3=0;

    while (c<10)
    { c++;
       cout<<"numero # "<<c<<"....:";
     cin>> numero;
     suma = suma + numero;

      if (numero>mayor )
   {
       mayor=numero;
   }

     if ((numero>1)and(numero<50))
     {
         caso1=caso1+1;
     }
        else if ((numero>51) and (numero<80))
        {
           caso2=caso2+1;
        }
        else if (numero>81)
        {
         caso3=caso3+1;
        }
     }
        cout<<"suma de los numeros es" << suma <<"\n";
        cout<<"el numero mayor es " << mayor <<"\n";
        cout<<"el numero esta entre 1-50 " << caso1 <<"\n";
        cout<<"el numero esta entre 51-80 " << caso2 <<"\n";
        cout<<"el numero es mayor a 80 " << caso3 <<"\n";

    return 0;
}
