#include <stdio.h>

int main(){
  printf("<< Valores iguais >>\n");
   int vetor [8], vetor2[8], qtd_aparece[8], i, j, x=0, z=0, aparece, a=0, aux;
  
  for(i=0;i<8;i++){
    printf("Entre com o numero %d: ",i+1);
    scanf("%d",&vetor[i]);
  }
  
    for(i=0;i<8;i++){
      for(j=i;j<8;j++){
        if(vetor[i] == vetor[j] && i != j){
          aux=vetor[i+1];
          vetor[i+1] = vetor[j];
          vetor[j] = aux;
        }
      }
    }
    
    printf("Valores repetidos:\n");
    aparece = 1;
    for(i=1;i<=8;i++){
        if (vetor[i] == vetor[i-1]){
          aparece++;
          }
          else if(aparece > 1){
            printf("%d aparece %d vezes\n", vetor[i-1], aparece);
            aparece = 1;
          }
    }
  
  return 0;
}

/*

Faça um programa que leia um vetor de 8 posições e verifique se existem 
valores iguais e os escreva a quantidade de vezes que eles aparecem na lista

Exemplo de saída:
<< Valores iguais >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 5
Entre com o numero 5: -3 
Entre com o numero 6: -3
Entre com o numero 7: -3
Entre com o numero 8: 6


Valores repetidos: 
5 aparece 2 vezes
6 aparece 2 vezes
-3 aparece 3 vezes

*/