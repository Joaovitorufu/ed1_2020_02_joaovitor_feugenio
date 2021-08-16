#include <stdio.h>

int main(){
  printf("<< Valores iguais >>\n");
    int vetor [8], vetor2[8], i, j, x=0, z=0, repete;
  
  for(i=0;i<8;i++){
    printf("Entre com o numero %d: ",i+1);
    scanf("%d",&vetor[i]);
  }
  
    for(i=0;i<8;i++){
      repete = 0;
      for(j=i+1;j<8;j++){
        if (vetor[i] == vetor[j]){
          repete++;
          }
        }
      if(repete != 0){
        if(repete == 1){
          vetor2[z] = vetor[i];
          x++;
          z++;
        }
    }
  }
  
  printf("Valores repetidos: ");
  for(i=0;i<x;i++){
    printf("%d",vetor2[i]);
    if(i<x){
      printf(", ");
    }
  }
  
  return 0;
}

/*
Faça um programa que leia um vetor de 8 posições e verifique se existem 
valores iguais e os escreva (cada número repetido deve aparecer somente 
uma vez na resposta)

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


Valores repetidos: 5, 6, -3
*/