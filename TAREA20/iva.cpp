#include<stdio.h>
#include<math.h>
#include "tarea20.h"
float IVA= 0.16f;
float precio= 0.0f;
int main()
{
      float precio;
	  float IVA;
	  float  total;
      printf("\nCalcular IVA de un producto\n\n");
      printf("\nEscriba el precio del producto: ");
      scanf(" %f",&precio);
      printf("\n");
      (IVA=precio*0.16);
      printf("El valor del IVA del producto es de:%f",IVA);
      printf("\n\n");
      (total=precio+IVA);
      printf("El valor del producto con el IVA incluido es de: %f", total);
      printf("\n\n");
      return 0;
}
