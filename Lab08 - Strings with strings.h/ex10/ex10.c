#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    printf("<< Invertendo >>\n");
    char vet[50],aux[50];
    int i,j,comp;
    printf("Digite a string: ");
    gets(vet);
    j=strlen(vet)-1;
    for(i=0;vet[i]!='\0';i++){
        aux[i]=vet[j];
        j--;
    }
    aux[i]='\0';
    comp=strcmp(aux,vet);
    if(comp==0){
        printf("eh Palindromo\n");
    }else printf("nao eh Palindromo\n");
    return 0;
}

/*

*/