#include <stdio.h>

int main() {
    float salario;
    printf("<< Aumento Salarial >>\n");
    printf("Digite o valor do salario R$:");
    scanf("%f",&salario);
    salario = (salario*0.25)+salario;
    printf("Apos 25%% de aumento o salario fica em R$ %.2f",salario);

}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Aumento Salarial >>
Digite o valor do salario R$: 4000
Apos 25% de aumento o salario fica em R$ 5000.00
-------------------------------------------------------------------------------
*/