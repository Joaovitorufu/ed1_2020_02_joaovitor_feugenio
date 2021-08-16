#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    printf("<< Vetor de char >>\n");
    char nome[50];

    int i,tam;
    printf("Digite um nome: ");
    gets(nome);
    tam=strlen(nome);
    for(i=0;i<=tam;i++){
      nome[i]=toupper(nome[i]);  
    }
    printf("o nome digitado eh: %s\n",nome);
    for(i=0;i<=tam;i++){
      nome[i]=tolower(nome[i]);  
    }
    printf("o nome digitado eh: %s",nome);


    return 0;
}

/*

*/