#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    int x;
    double y;
    void *p;
    p=&x;
    printf("Digite o Int\n");
    scanf("%d",(int *)p);
    p=&y;
    printf("digite o double\n");
    scanf("%lf",(double *)p);
    printf("double: %.2lf\n",*(double *)p);
    p=&x;
    printf("int: %d",*(int *)p);
    return 0;
}