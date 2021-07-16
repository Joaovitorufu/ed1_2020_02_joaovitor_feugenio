#include <stdio.h>

int main(){
    int num = 0;
    printf("<< Calculo do Quadrado de n >>\n");
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("O valor de %d ao quadrado eh %d",num,num*num);
}

/*
=> Efetuar a leitura de um número real e apresentar o resultado do quadrado desse número.

-------------------------------------------------------------------------------
Exemplo de saída: 
<< Calculo do Quadrado de n>>
Digite um número: 2.5O 
O valor de 2.5 ao quadrado é 6.25
-------------------------------------------------------------------------------
*/