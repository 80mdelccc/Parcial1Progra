#include <iostream>

using namespace std;
//presentar los numerps del 1 al 10 usando while//

int main()
{  int c=0;int numero; int suma=0; int mayor=0; double promedio=0;

    while (c<5)
    { c++;
       cout<<"numero # "<<c<<"....:";
     cin>> numero;
   suma= suma + numero;

 if (numero>mayor )
   {
       mayor = numero;
   }
    else
    {
        mayor = mayor;
    }
    promedio = suma/c;
    }

    cout<<"numeros  mayor es" << mayor<<"\n";
    cout<<"suma de los numeros es" << suma<<"\n";
    cout<<"el promedio es " << promedio<<"\n";
    cout<<"final del ciclo\n";

    return 0;
}
