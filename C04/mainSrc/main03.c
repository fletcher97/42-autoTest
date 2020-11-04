#include "main03.h"

int main()
{
	char *n;
	printf("\nTesting 03:\n");
	n = "0";
	printf("\nExpected: %d\nGot: %d\n", atoi(n), ft_atoi(n));
	n = "123";
	printf("\nExpected: %d\nGot: %d\n", atoi(n), ft_atoi(n));
	n = "-123";
	printf("\nExpected: %d\nGot: %d\n", atoi(n), ft_atoi(n));
	n = "-2147483648";
	printf("\nExpected: %d\nGot: %d\n", atoi(n), ft_atoi(n));
	n = "2147483647";
	printf("\nExpected: %d\nGot: %d\n", atoi(n), ft_atoi(n));

	printf("\n\nFinished testing converting strings to numbers.\n");

	return 0;
}
