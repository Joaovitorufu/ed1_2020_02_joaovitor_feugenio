#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    printf("<< Sem vogais >>\n");
    printf("Digite a string: ");
    char vet[50],vet2[50];
    int i,tam,j=0;
    gets(vet);
    tam=strlen(vet);
    for(i=0;i<=tam;i++){
        if(vet[i]=='a'||vet[i]=='e'||vet[i]=='i'||vet[i]=='o'||vet[i]=='u'){

        }else{
            vet2[j]=vet[i];
            j++;
        }
    }
    printf("saida sem vogais: %s",vet2);
    return 0;
}

/*

*/