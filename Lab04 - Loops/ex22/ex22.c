#include <stdio.h>
//o erro ocorre pois estoura a memoria de um int,para dar certo é só colocar um float em vez de int
int main(void) {
   int i;
   double fat = 3628800;
	printf("Fatorial \n");
	for (i = 10; i <= 15; i++) {
		fat =fat* i;
		printf("%ld! = %.0f\n", i, fat);
	}
  return 0;
}

/*

*/