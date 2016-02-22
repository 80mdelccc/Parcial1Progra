#include <iostream>

using namespace std;
char nombre [30];
int turno;
double htrabajadas;
double phtrabajo;
double phextras;
double hextras;
double pahorastrabajadas;
double pahorasextras;
double pagototal;



void Datos(char nombre[], int &turno, double &htrabajadas, double &hextras)
{
    cout<<"ingresar Nombre del empleado......";
    cin>> nombre;
     cout<<"ingresar Numero de horas trabajadas ......";
    cin>> htrabajadas;
    cout<<"ingresar Numero de horas extras ......";
    cin>> hextras;


    do
    {
           cout<<"ingresar turno 1,2,3,4,....";
    cin>>turno;
    }
    while (!(turno==1 or turno==2 or turno==3 or turno==4));
}
int pporhorasnom ( int turno)
{
    if ( (turno==1) or  (turno==3))
    {
        return 200;
    }
    else if ((turno==2) or (turno==4))
    {
        return 300;
    }
}
 int pagohorasextras (int turno)
 {
      if ( (turno==1) or  (turno==3))
    {
        return 250;
    }
    else if ((turno==2) or (turno==4))
    {
        return 350;
    }
 }
 void Calcular(int turno, double &htrabajadas, double &hextras, double &pahorastrabajadas, double &pahorasextras, double &pagototal)
 {

     phtrabajo = pporhorasnom(turno);
     pahorastrabajadas= phtrabajo*htrabajadas;

     phextras=pagohorasextras(turno);
     pahorasextras=phextras*hextras;

    pagototal = pahorasextras + pahorastrabajadas;
 }
int main()
{
    Datos(nombre,turno,htrabajadas,hextras);
    Calcular(turno,htrabajadas,hextras,pahorastrabajadas,pahorasextras,pagototal);

    cout << "pago horas trabajadas....."<<pahorastrabajadas<<"\n";
    cout<< "pago horas extras......"<<pahorasextras<<"\n";
    cout<< "pago total...."<<pagototal<<"\n";
    return 0;
}
