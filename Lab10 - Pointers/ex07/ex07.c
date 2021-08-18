#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    char nome[]="Jose Augusto";
    char *p=&nome[0];
    int i;
    for(i=0;i<=12;i++)
    {
        printf("%c",*(p+i));
    }
    return 0;
}