#include <stdio.h>
#include <stdlib.h>

int main(void)
{
            int i;
            printf("Introduzca n�mero del 1 al 7: \n");
    scanf("%d",&i);

    switch(i){
              case 1:
                   printf ("Lunes\n");
                   break;
              case 2:
                   printf ("Martes\n");
                   break;
              case 3:
                   printf ("Mi�rcoles\n");
                   break;
              case 4:
                   printf ("Jueves\n");
                   break;
              case 5:
                   printf ("Viernes\n");
                   break;
              case 6:
                   printf ("S�bado\n");
                   break;
              case 7:
                   printf ("Domingo\n");
                   break;
              default:
                   printf ("Opci�n no v�lida\n");
                   break;
    }

    system("PAUSE");     
    return 0;
}
