#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    printf("<< Compara nome >>\n");
    char nome[50],nome2[50];
    int i,tam;
    printf("Digite o nome 1: ");
    gets(nome);
    printf("Digite o nome 2: ");
    gets(nome2);
    tam=strlen(nome);
    for(i=0;i<=tam;i++){
      nome[i]=toupper(nome[i]);  
    }
    tam=strlen(nome2);
    for(i=0;i<=tam;i++){
      nome2[i]=toupper(nome2[i]);  
    }
    if(strcmp(nome,nome2)==0){
        printf("Os nomes digitados sao iguais");
    }else printf("Os nomes digitados sao diferentes");
    return 0;
}

/*

*/