#include<stdio.h>
#include<math.h>
int main()
{
      float precio;
	  float iva;
	  float  total;
      printf("\nCalcular IVA de un producto\n\n");
      printf("\nEscriba el precio del producto: ");
      scanf(" %f",&precio);
      printf("\n");
      (iva=precio*0.16);
      printf("El valor del IVA del producto es de: %f", iva);
      printf("\n\n");
      (total=precio+iva);
      printf("El valor del producto con el IVA incluido es de: %f ", total);
      printf("\n\n");
      return 0;
}
