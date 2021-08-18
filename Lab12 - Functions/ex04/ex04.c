#include <stdio.h>
double potencia(double x, int n){
    int i;
	if (n == 0) return 1;
	else if (n > 0) for (i = 1; i < n; i++) x *= x;
	else {
		x = 1/x;
		for (i = 1; i < (-n); i++) x *= x;
	}
	return x;
}

int main(){
    double x;
    int y;
    printf("Digite o valor de x: ");
    scanf("%lf",&x);
    printf("Digite o valor de n: ");
    scanf("%d",&y);
    printf("%.0lf elevado a %d = %.0lf\n", x, y, potencia(x, y));

    return 0;
}

/*
=> Faça uma função para calcular xn. Não utilizar o operador pow (nem ^ - que não existe em C).
No programa principal permita ao usuário informar o valor de x e de n (inteiro). 
Lembre que n pode assumir valor negativo.

Ex: Elevado(2,4) tem como saída 16; 
    

No programa principal, solicite ao usuário o valor de x e o valor de n.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x: 2
Digite o valor de n: 4
O valor de 2 elevado a 4 eh 16
-------------------------------------------------------------------------------
*/