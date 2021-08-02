#include <stdio.h>

int main() {
  int soma,n, i, j, a = 0;
  printf("<< Multiplos >>\n");
	printf("Entre com o valor de n: ");
	scanf("%d", &n);
	printf("Entre com o valor de i: ");
	scanf("%d", &i);
	printf("Entre com o valor de j: ");
	scanf("%d", &j);
	printf("Os multiplos de i ou j sao: ");
	for (soma = 0; soma < n; a++)
	{
		if (a % i == 0 || a % j == 0)
		{
			if (soma == n-1)
			{			
				printf("%d", a);
			} else printf("%d,", a);
			soma++;
		}
	}
	printf("\n");
  return 0;
}