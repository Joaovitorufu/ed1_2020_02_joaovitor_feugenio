#include <stdio.h>

int main(void) {
  int i, fat = 1;
	printf("<< Fatorial >>\n");
	for (i = 1; i <= 10; i++)
	{
		fat =fat* i;
		printf("%d! = %d\n", i, fat);
	}
  return 0;
}

/*

*/