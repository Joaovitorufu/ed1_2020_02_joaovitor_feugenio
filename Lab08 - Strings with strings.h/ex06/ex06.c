#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    printf("<< Separa letra >>\n");
    printf("Digite um nome: ");
    char nome[50];
    int i=0;
    gets(nome);
    while(nome[i] != '\0'){
        printf("%da letra: %c\n",i+1,nome[i]);
        i++;
    }
    return 0;
}

/*

*/