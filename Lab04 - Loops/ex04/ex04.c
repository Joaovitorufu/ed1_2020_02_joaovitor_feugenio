#include <stdio.h>

int main(){
    printf("<< Contagem regressiva >>\n");
    int i;
    printf("digite o valor para a contagem iniciar: ");
    scanf("%d",&i);
    while(i>=0){
    printf("%d..",i);
    i--;
    }
    printf("FIM!");
    return 0;
}

/*

*/