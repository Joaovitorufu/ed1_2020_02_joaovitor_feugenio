#include <stdio.h>

int main() {
  int i,j;
	unsigned int n, x = 1;
    printf("Quantas linhas deseja ?: ");
	scanf("%u", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++, x++)printf("%u ", x);
		printf("\n");
	}
  return 0;
}
/*

*/