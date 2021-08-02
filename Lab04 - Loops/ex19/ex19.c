#include <stdio.h>

int main() {
  int i,ano = 0;
	double j = 50000.00, c = 25000.00;
	while (c < j)
	{
		for (i = 1; i <= 12; i++)
		{
			j += 800.00;
			c += 3000.00;
			if (c > j) break;
		}
		ano++;
	}
	if (ano == 1) printf("%d", ano);
	else printf("%d", ano);
	
  return 0;
}

/*

*/