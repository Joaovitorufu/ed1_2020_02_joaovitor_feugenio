#include <stdio.h>

int main(){
    float n1,n2,media;
    printf("<< Calculo da Media >>\n");
    printf("Digite a nota da prova 1: ");
    scanf("%f",&n1);
    printf("Digite a nota da prova 2: ");
    scanf("%f",&n2);
    media = (n1+n2)/2;
    printf("A nota media eh %.0f",media);
}

/*
=> Faça um algoritmo que calcula a média das notas de 2 provas.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite a nota da prova 1: 80
Digite a nota da prova 2: 90
A nota media eh 85
-------------------------------------------------------------------------------
*/