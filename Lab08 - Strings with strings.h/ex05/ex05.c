#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    printf("<< Vetor de char >>\n");
    char vet[50],nome[50],sobrenome[50];
    int i=0,tam=0,j=0;
    printf("Digite um nome e um sobrenome : ");
    gets(vet);

    while(vet[i] !=' '){
        nome[i]= vet[i];
        i++;
    }
    i++;
    nome[i-1]='\0';
    printf("nome: %s\n",nome);
    while(vet[i] != '\0'){
        sobrenome[j] = vet[i];
        i++;
        j++;
    }
    printf("Sobrenome: %s",sobrenome);

    
    return 0;
}

/*

*/