#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*ingresar la nota de examen y la acumulada en base a 100.
la nota de examen vale 70% y la nota acumulada 30%*/
int main()
{ double ne,na,nf;
printf( "ingresar nota acumulada....>");
scanf("%lf",&na);

printf( "ingresar nota de examen....>");
scanf("%lf",&ne);
nf =(na*0.3)+(ne*0.7);
printf( "nota final es %lf \n",nf);

if(nf>=60)
{
    printf("Esado de la nota : Apr\n");
}
else
    { printf("estado de la nota : Rep\n");

    }
system("Pause");

    return 0;
}
