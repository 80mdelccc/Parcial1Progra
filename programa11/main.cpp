#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()

 {srand(time(0));
 int i;
 int n, numero;
   cout <<"ingresar numero de veces ...:";
   cin>>n;
   for   (i=1;i<=n;i++)
 {    numero=50 + rand()%(100-50);

     cout<< "\nvalor de la i es..."<<i<<"\n"<<"valor de numero" << numero;
 }
    return 0;
}


