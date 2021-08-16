
#include <stdio.h>

int main(){
    printf("<< nomes >>\n");
    printf("Digite o primeiro nome e o ultimo nome: ");
    char nome[50],sobrenome[50];
    char c,c2;
    int i,pos=0,pos2=0,dif=0;
    c=getchar();
    while(c !=' '){
        nome[pos]=c;
        pos++;
        c=getchar();
    }
    c2=getchar();
    
    while(c2 != '\n'){
        sobrenome[pos2]=c2;
        pos2++;
        c2=getchar();
    }
    
        printf("Nome: ");
    for(i=0;i<pos;i++){
        printf("%c",nome[i]);
    }
    
        printf("\nSobrenome: ");
    for(i=0;i<pos2;i++){
        printf("%c",sobrenome[i]);
    }

    return 0;
}

/*

*/