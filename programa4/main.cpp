#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*ingresar dos numeros e identificar el numero mayor
*/

int main()
{
    int n1,n2;

    printf("ingresar  primer numero:");
    scanf("%d",&n1);

     printf("ingresar  primer numero:");
    scanf("%d",&n2);
     if (n1>n2)
     {
    printf( "mayor es %d\n",n1);
     }
     else
     {
     printf( "mayor es %d\n",n2);
     }

     system("Pause");

    return 0;


}
