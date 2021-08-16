
#include <stdio.h>

int main(){
    printf("<< Vetor de char >>\n");
    printf("Digite um nome: ");
    char nome[50];
    char c;
    int i,pos=0;
    c=getchar();
    while(c !='\n'){
        nome[pos]=c;
        pos++;
        c=getchar();
    }
    printf("O nome digitado eh: ");
    for(i=0;i<pos;i++){
        if(nome[i]<=96){
        printf("%c",nome[i]);
        }else{
            printf("%c",nome[i]-32);
        }
    }
    return 0;
}

/*

*/