#include <stdio.h>
int main()
{
    int i,num;

    printf("Ingrese un numero: ");
    scanf("%d",&num);

    for(i=0; i<num ; i++)
        printf(" * ");

    return 0;
}
