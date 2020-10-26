#include "main04.h"

int main()
{
	printf("\nTesting 04:\n\n");
	int *a, *b;

	a = malloc(sizeof(int *));
	b = malloc(sizeof(int *));

	*a = 429;
	*b = 10;

	ft_ultimate_div_mod(a, b);
	printf("%d %d", *a, *b);

	free(b);
	free(a);
	printf("\n\nFinished testing div and mod. expected 42 9\n");
	return 0;
}