#include <stdio.h>

int main(){
    printf("<< Contagem regressiva >>\n");
    int i;
    printf("Digite o valor que deseja inicar a contagem: ");
    scanf("%d",&i);
    for( i ; i<=0;i++){
        printf("%d..",i);
    }
    printf("FIM!");
    return 0;
}

/*

*/