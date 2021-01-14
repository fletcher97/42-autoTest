#include "main00.h"

int main()
{
	printf("\nTesting 00:\n\n");
	int *i;
	i = malloc(sizeof(int *));

	ft_ft(i);
	printf("%d", *i);

	free(i);
	printf("\n\nFinished testing setting val 42\n");
	return 0;
}