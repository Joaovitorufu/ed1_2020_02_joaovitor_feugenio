#include <stdio.h>

int main(){
    printf("<< Contagem regressiva >>\n");
    int i = 10;
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