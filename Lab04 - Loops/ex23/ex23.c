#include <stdio.h>

int main() {
 int n,i,j;
	double fat, e = 1.0;
	printf("<< Numero neperiano >>\n");
	printf("Entre com o numero de termos: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		fat = 1;
		for (j = 1; j <= i; j++) fat *= j;
		e += 1.0/fat;
	}
	printf("e ~ %.14lf\n", e);
  return 0;
}

/*

*/