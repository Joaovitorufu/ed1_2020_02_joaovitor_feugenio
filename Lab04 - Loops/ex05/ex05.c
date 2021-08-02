#include <stdio.h>

int main(){
    printf("<< Contagem regressiva >>\n");
    int i;
    printf("Digite o valor que deseja inicar a contagem: ");
    scanf("%d",&i);
    do
    {
        printf("%d..",i);
        i--;
    } while (i>=0);
    printf("FIM!");
    return 0;
}

/*

*/