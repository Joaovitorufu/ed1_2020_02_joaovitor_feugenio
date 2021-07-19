#include <stdio.h>

int main() {
     float bruto,liquido;
    int dias;
    printf("<< Pagamento encanador >>\n");
    printf("digite o numero de dias trabalhados: ");
    scanf("%d",&dias);
    bruto = dias * 30;
    printf("Valor bruto R$: %.2f\n",bruto);
    liquido = (bruto - (bruto*0.04)) -(bruto - (bruto*0.04)) * 0.08;
    printf("Valor liquido R$: %.2f\n",liquido);
    printf("ISS R$: %.2f\n",bruto*0.04);
    printf("IR R$: %.2f\n",(bruto - (bruto*0.04))*0.08);
}

/*
=> Um contador percebeu que o cálculo de IR do encanador estava errado, pois estava sendo calculado sobre o valor bruto que ele recebeu. 
Refaça o programa anterior, considerando que o IR é sobre o valor bruto após o desconto do ISS.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 794.88
ISS R$: 36
IR R$: 68.12
-------------------------------------------------------------------------------
*/