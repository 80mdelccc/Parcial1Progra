#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/*ingresar un nuero y determinar su signi si es cero,
positivo o negativo*/

int main()
{ int num;
printf("ingresar un numero ..>");
    scanf("%d",&num);
if (num>0)
{
    printf("el numero es positivo \n");

}
else if (num<0)
{
    printf("el numero es negativo \n");
}
else
{
    printf("el numero es cero \n");
}
   system("Pause");
    return 0;
}
