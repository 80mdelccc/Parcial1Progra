#include <iostream>

using namespace std;
/*ingresar 5 numeros usando el ciclo while luego debara cpntar
los numeros que estan rango de 1-50,51-100 y mayor a 101*/
int main()
{
    int c=0;
    int numero;
    int promcaso1=0;
    int promcaso2=0;
    int promcaso3=0;
    int mayor=0;
    int menor =151515;
    int caso1=0;
    int caso2=0;
    int caso3=0;

    while (c<5)
    { c++;
       cout<<"numero # "<<c<<"....:";
     cin>> numero;

     if (numero>mayor)
     {
         mayor=numero;
     }

     if (numero<menor)
     {
         menor =numero;
     }
     if ((numero>=1)and (numero<=50))
     {
         caso1=caso1+1;
          promcaso1=promcaso1+numero;
     }

       else if ((numero>=51)and (numero<=100))
     {
         caso2=caso2+1;
          promcaso2=promcaso2+numero;
     }
     else if(numero>=101)
     {
         caso3=caso3+1;
          promcaso3=promcaso3+numero;
     }

    }

   promcaso1 = promcaso1/caso1;
    promcaso2 = promcaso2/caso2;
     promcaso3 =promcaso3/caso3;

        cout<<"el numero mayor es " << mayor <<"\n";
        cout<<"el numero menor es " << menor <<"\n";
        cout<<"el numero esta entre 1-50 " << caso1 <<"\n";
        cout<<"el numero esta entre 51-100 " << caso2 <<"\n";
        cout<<"el numero es mayor a 101 " << caso3 <<"\n";
        cout<<"el promedio de 1-50 " << promcaso1 <<"\n";
        cout<<"el promedio de 51-100 " << promcaso2 <<"\n";
        cout<<"el promedio de mayor a 101 " << promcaso3 <<"\n";

    return 0;
}
