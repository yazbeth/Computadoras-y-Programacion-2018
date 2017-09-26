#include<stdio.h>
int main(){
    int n;
    int m;
    int j=0;
    printf("Dame el número a multiplicar \n");
    scanf("%d",&n);
    for(j=1; j<=10; j=j+1){
      int  m=(n*j);
       printf(" n *  %d = %d \n", j, m);
    }
}
