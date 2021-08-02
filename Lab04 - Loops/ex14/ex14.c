#include <stdio.h>

int main() {
 int i,n,cont=0;
 printf("<< Numeros primos >> \n");
 printf("Entre com o valor:");
 scanf("%d",&i);
 n=1;
 while(n<=i)
 {
   if(i%n==0)
   cont++;
   n++;
  
 }
 if(cont==2)
 {
   printf("O numero %d eh primo",i);
 }else
 printf("O numero %d nao eh primo",i);
  return 0;
}

/*

*/