#include <stdio.h>

int main(){
    printf("<< Tipo de triangulo >>\n");
    int a,b,c;
    printf("Digite o primeiro lado: ");
    scanf("%d",&a);
    printf("Digite o segundo lado: ");
    scanf("%d",&b);
    printf("Digite o terceiro lado: ");
    scanf("%d",&c);

    if ((a*a) == (b*b)+(c*c)){
        printf("foi formado um triangulo retangulo");
    }else
    if((a*a)>(b*b)+(c*c)){
        printf("foi formado um triangulo obtusangulo");
    }
    if((a*a)<(b*b)+(c*c)){
        printf("foi formado um triangulo acutangulo");
    }

    return 0;
}

/*

*/