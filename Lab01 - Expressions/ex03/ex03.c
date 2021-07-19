#include <stdio.h>

int main() {
    printf("<< Sucessor e Antecessor >>\n");
    printf("Digite um numero:");
    int n;
    scanf("%d",&n);
    printf("Antecessor: %d\nNumero: %d\nSucessor: %d\n",n-1,n,n+1);
}

/*
=> Ler um número e retorne seu antecessor e seu sucessor.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Sucessor e Antecessor >>
Digite um numero: 2

Antecessor: 1
Numero: 2
Sucessor: 3
-------------------------------------------------------------------------------
*/