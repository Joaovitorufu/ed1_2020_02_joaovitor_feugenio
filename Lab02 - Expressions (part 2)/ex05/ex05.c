#include <stdio.h>
#include <math.h>

int main() {
    int b1,b2,b3,b4,d;
    printf("== Conversor de numeros binarios ==\n");
    printf("Digite o 1o. bit: ");
    scanf("%d",&b1);
    printf("Digite o 2o. bit: ");
    scanf("%d",&b2);
    printf("Digite o 3o. bit: ");
    scanf("%d",&b3);
    printf("Digite o 4o. bit: ");
    scanf("%d",&b4);
    d =b1 * pow(2, 3)+ b2 * pow(2,2) + b3 * pow(2,1)+ b4 * pow(2,0);
    printf("O numero binario %d%d%d%d corresponde ao numero decimal %d",b1,b2,b3,b4,d);
}

/*
=> Faça um conversor de número binário para decimal (inteiro). 
O número deve ter 4 bits, sendo o bit mais significativo digitado primeiro. 
Mostrar na resposta o número binário e o número decimal.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Conversor de numeros binarios >>
Digite o 1o. bit: 1
Digite o 2o. bit: 0
Digite o 3o. bit: 1
Digite o 4o. bit: 1
O numero binario 1011 corresponde ao numero decimal 11
-------------------------------------------------------------------------------
*/