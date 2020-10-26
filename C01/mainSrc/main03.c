#include "main03.h"

int main()
{
	printf("\nTesting 03:\n\n");
	int *div, *mod;

	div = malloc(sizeof(int *));
	mod = malloc(sizeof(int *));

	ft_div_mod(429, 10, div, mod);
	printf("%d %d", *div, *mod);

	free(mod);
	free(div);
	printf("\n\nFinished testing div and mod. Expected 42 9\n");
	return 0;
}