#include "main03.h"

int main()
{
	char *n;
	printf("\nTesting 03:\n");
	n = "0";
	printf("\nExpected: %d\nGot: %d", atoi(n), ft_atoi(n));
	n = "123";
	printf("\nExpected: %d\nGot: %d", atoi(n), ft_atoi(n));
	n = "-123";
	printf("\nExpected: %d\nGot: %d", atoi(n), ft_atoi(n));

	n = malloc(15);
	itoa(INT_MIN, n, 10);
	printf("\nExpected: %d\nGot: %d", atoi(n), ft_atoi(n));
	itoa(INT_MAX, n, 10);
	printf("\nExpected: %d\nGot: %d", atoi(n), ft_atoi(n));
	free(n);

	printf("\n\nFinished testing converting strings to numbers.\n");

	return 0;
}
