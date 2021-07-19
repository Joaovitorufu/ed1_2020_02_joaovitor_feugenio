#include <stdio.h>

int main() {
    float bruto;
    int dias;
    printf("<< Pagamento encanador >>\n");
    printf("digite o numero de dias trabalhados: ");
    scanf("%d",&dias);
    bruto = dias * 30;
    printf("Valor bruto R$: %.1f\n",bruto);
    printf("Valor liquido R$: %.1f\n",bruto - (bruto*0.12));
    printf("ISS R$: %.1f\n",bruto*0.04);
    printf("IR R$: %.1f\n",bruto*0.08);
}

/*
=> Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador 
e imprima o valor bruto, o imposto, e a quantia líquida que deverá ser paga ao encanador, sabendo-se que são descontados 8% para 
imposto de renda e 4% de ISS. 

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 792
ISS R$: 36
IR R$: 72
-------------------------------------------------------------------------------
*/