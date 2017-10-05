#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int x; 
    int intentos;
    int ganados ;
    int perdidos;
	int empate;
    unsigned int y;
    intentos=0;
	ganados=0;
    perdidos=0;
    empate=0;
    printf("Selecciona una opcion\n1.-Piedra\n2.-Papel\n3.-Tijera\n(o 4 para terminar): \n");
    scanf("%d", &x);
    while(x!=4){  
    y =(rand() %3);  
                 switch(x){    
                           case 1:
                                   if(x==y){ 
                                   printf("Es un empate\n");
                                   empate+= 1; 
                                   intentos+=1;}
                                   else if(x<=y){
                                   printf ("Tu pierdes\n");
                                   perdidos+=1;
                                   intentos+=1;}
                                   else if (x>=y){
                                   printf("Ta ganas\n");
                                   ganados+=1;
                                   intentos+=1;
                                   }
                                   break;
                           case 2: if(x==y){ 
                                   printf("Es un empate\n");
                                   empate+= 1;
                                   intentos+=1;}
                                   else if(x<=y){
                                   printf ("Tu pierdes\n");
                                   perdidos+=1;
                                   intentos+=1;}
                                   else if(x>=y){
                                   printf("Tu ganas\n");
                                   ganados+=1;
                                   intentos+=1;
                                   } 
                                  break;
                            case 3: if(x==y){ 
                                   printf("Es un empate\n");
                                   empate+= 1;
                                   intentos+=1;}
                                   else if(x<=y){
                                   printf ("Tu pierdes\n");
                                   perdidos+=1;
                                   intentos+=1;}
                                   else if(x>=y){
                                   printf("Tu ganas\n");
                                   ganados+=1;
                                   intentos+=1;
                                  }
                                  break;
							default: printf("Error\n");
							break;
									   }
                                                                     printf("Selecciona una opcion\n1.-Piedra\n2.-Papel\n3.-Tijera\n(o 4 para terminar)\n");
                                    scanf("%d", &x);
                                    }
    printf("\nHas ganado %d veces\n", ganados);
    printf("Has perdido %d veces\n", perdidos);
    printf("Has empatado %d veces\n", empate);
 printf("Has jugado %d veces\n", intentos);
       if(ganados>perdidos){ 
    printf("\nGanaste la partida");}
    else if(perdidos>ganados){
    printf("\nPerdiste la partida");}
    else if(ganados==perdidos){
    printf("\nEs un empate");}
printf("\nGracias por jugar ;)");
}

