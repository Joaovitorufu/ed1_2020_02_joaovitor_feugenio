#include <stdio.h>

int main() {
    printf("<< Conversor Temperatura >>\n");
    printf("Digite a temperatura (em Celsius):\n");
    int n,res;
    scanf("%d",&n);
    res = (n*9/5)+32;
    printf("%d graus Celsius correspondem a %d Fahrenheit\n",n,res);
return 0;
}

/*
=> Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de 
conversão é : F = C ∗ (9.0/5.0)+ 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Conversor Temperatura >>
Digite a temperatura (em Celsius): 2.5O 
30 graus Celsius correspondem a 86 Fahrenheit
-------------------------------------------------------------------------------
*/