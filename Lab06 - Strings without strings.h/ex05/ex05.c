
#include <stdio.h>

int main(){
    printf("<< Compara nomes >>\n");
    printf("Digite o nome 1: ");
    char nome[50],nome2[50];
    char c,c2;
    int i,pos=0,pos2=0,dif=0;
    c=getchar();
    while(c !='\n'){
        nome[pos]=c;
        pos++;
        c=getchar();
    }
    printf("Digite o nome 2: ");
    c2=getchar();
    
    while(c2 != '\n'){
        nome2[pos2]=c2;
        pos2++;
        c2=getchar();
    }
    
    for(i=0;i<pos;i++){
        if(nome[i] != nome2[i]){
            dif++;
        }
        if((nome[i]+32) == nome2[i]){
            dif--;
        }
        
        if(nome[i] == (nome2[i]+32)){
            dif--;
        }
    }
    
    if(dif==0){
        printf("os nomes digitados sao iguais");
        }else {printf("os nomes digitados sao diferentes");}
    return 0;
}

/*

*/