#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    printf("<< Compara nome >>\n");
    char nome[50],nome2[50];
    printf("Digite o nome 1: ");
    gets(nome);
    printf("Digite o nome 2: ");
    gets(nome2);
    if(strcmp(nome,nome2)==0){
        printf("Os nomes digitados sao iguais");
    }else printf("Os nomes digitados sao diferentes");
    return 0;
}

/*

*/