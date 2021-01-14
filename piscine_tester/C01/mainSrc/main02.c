#include "main02.h"

int main()
{
	printf("\nTesting 02:\n\n");
	int *a;
	int *b;

	a = malloc(sizeof(int*));
	b = malloc(sizeof(int*));

	*a = 42;
	*b = 24;

	printf("%d %d\n", *a, *b);
	ft_swap(a, b);
	printf("%d %d", *a, *b);

	free(b);
	free(a);
	printf("\n\nFinished testing swap.\n");
	return 0;
}