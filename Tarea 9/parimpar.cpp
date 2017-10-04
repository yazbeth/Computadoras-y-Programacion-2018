#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int i;
            printf("Introduzca numero:\n");
    scanf("%d",&i);

    if (i%2==0) {
       printf("El numero es par.\n");
    }
    else
    {
       printf("El numero es impar.\n");
    }

    system("PAUSE");     
    return 0;
}
