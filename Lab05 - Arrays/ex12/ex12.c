#include <stdio.h>


int main() {
  char cor[4][20]={"Verde","Azul","Amarela","Vermelha"};
  int vet[4],i;
  float prob[4],soma=0,maior=0;
  printf("<< Probabilidades >>\n");
  printf("Digite a quantidade de bolinhas\n");
  for(i=0;i<4;i++)
  {
    printf("%s:",cor[i]);
    scanf("%d",&vet[i]);
  }
  
  for(i=0;i<4;i++)
  {
    soma+=vet[i];
  }
  
  for(i=0;i<4;i++)
  {
    prob[i]=(vet[i]*100)/soma;
  }
  for(i=0;i<4;i++)
  {
    if(maior<=prob[i])
    {
      maior=prob[i];
      
    }
  }
  
  printf("Probabilidades\n");
  for(i=0;i<4;i++)
  {
    if(maior==prob[i])
    printf("%s: %.1f%% << Maior probabilidade\n",cor[i],prob[i]);
    else printf("%s: %.1f%%\n",cor[i],prob[i]);
  }
  return 0;
}

/*
Uma piscina de bolinhas possui bolas azuis, verdes, amarelas e vermelhas. 
Faça um programa em que o usuário digita a quantidade de bolinhas de cada
cor existente em uma piscina e mostra a probabilidade de ocorrência de cada 
cor, indicando qual possui a maior probabilidade

Exemplo de saída:
<< Probabilidades >>

Digite a quantidade de bolinhas
Verde: 51
Azul: 60
Amarela: 70
Vermelha: 80

Probabilidades
Verde: 19.5%
Azul: 22.9%
Amarela: 26.8%
Vermelha: 30.6% << Maior probabilidade
*/