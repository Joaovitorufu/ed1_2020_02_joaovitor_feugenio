#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    printf("<< Vetor de char >>\n");
    char nome[50];
    printf("Digite um nome: ");
    gets(nome);
    printf("o nome digitado eh: %s",nome);

    return 0;
}

/*

*/