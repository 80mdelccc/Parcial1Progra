#include <iostream>

using namespace std;
/*ingresar la nota acumulada y examen, luego obtener la nota final y ajustarla a 60 si se encuentra entre 57-59, presetar
la nota y el estado aprobado o reprobado"*/
int na,ne,nf, estado;
int main()
{
    cout << "Ingresar nota acumulada";

    cin>> na;

    cout << "Ingresar nota examen";

    cin>> ne;

    nf=na+ne;

    if ((nf>=57 and (nf<=59)))
    {
    nf=60;
    }

    cout << "la nota final es.."<<nf;

    if (nf>=60)
    {
        cout << "aprodado \n";
    }
   else
   {
       cout << "reprobado \n";
   }
    return 0;
}
