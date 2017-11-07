#include<stdio.h>
int main(){
	int j=0;
	int k=0;
 int largo=0;
 int ancho=0;
    printf("Cual es el ancho de tu cuadrado?\n");
    scanf("%d",& largo);
    printf("Cual es el largo de tu cuadrado?\n");
    scanf("%d",& ancho);
	for(j=1; j<=largo; j=j+1){
	for(k=1; k<=ancho; k=k+1){
	printf("*");
	}	
	printf("\n");
}
}
