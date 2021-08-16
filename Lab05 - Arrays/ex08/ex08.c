#include <stdio.h>
#include <math.h>

int main(){
    printf("<< Media e desvio-padrao >>\n");
    int vet[5],i;
    float media=0,desvio=0;
    for(i=0;i<5;i++)
  {
    printf("Digite o valor %d:",i+1);
    scanf("%d",&vet[i]);
  }
  for(i=0;i<5;i++)
  {
    media+=vet[i];
  }
  media = media/5;
  
  for(i=0;i<5;i++)
  {
    desvio+=pow((vet[i]-media),2);
  }
  desvio=sqrt(desvio/4);
  
  printf("A media eh %.2f e o desvio-padrao eh %.2f",media,desvio);

    return 0;
}

/*
Calcular a média e o desvio padrão amostral de 5 números informados pelo usuário.
obs: desvio-padrão (amostral, normalizado por N-1)

Exemplo de saída:
<< Media e desvio-padrao >>
Digite o valor 1: 50
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60
A media eh 64 e o desvio-padrao eh 11.40
*/
