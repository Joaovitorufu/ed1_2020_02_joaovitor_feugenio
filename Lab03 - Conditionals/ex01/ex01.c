#include <stdio.h>

int main(){
    printf("<< Calculo da Media >>\n");
     float n1,n2,n3,media;
    char n;
    printf("Digite o nome do aluno: ");
    scanf("%c",&n);
    printf("Digite a nota da prova 1: ");
    scanf("%f",&n1);
    printf("Digite a nota da prova 2: ");
    scanf("%f",&n2);
    printf("Digite a nota da prova 3: ");
    scanf("%f",&n3);
    media = ((n1*1)+(n2*1)+(n3*2))/4;

    if(media<60){
    printf("A nota media do aluno %c eh %.1f => REPROVADO!",n,media);

    }else{
    printf("A nota media do aluno %c eh %.1f => APROVADO!",n,media);
    }
    return 0;
}

/*

*/