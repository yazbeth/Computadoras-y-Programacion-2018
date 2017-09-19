#include <stdio.h>
int main (){
	int num1=0;
	int num2=0;
	int num3=0;
	int max;
	int min;
	
printf("Dame el primer numero \n");
scanf("%d",& num1);
printf("Dame el segundo numero \n");
scanf("%d",& num2);
printf("Dame el tercer numero \n");
scanf("%d",& num3);
	max=num1;
	if(num2>max)
	max=num2;
	if(num3>max)
	max=num3;
	printf("El numero mayor es %d \n", max);
	
	min=num1;
	if(num2<min)
	min=num2;
	if(num3<min)
	min=num3;
	printf("El numero menor es %d \n", min);
	
}
