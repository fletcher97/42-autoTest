#include "main02.h"

int main()
{
	printf("\nTesting 02:\n\n\nExpected: 0\nGot: ");
	fflush(stdout);
	ft_putnbr(0);
	printf("\n\nExpected: 123\nGot :");
	fflush(stdout);
	ft_putnbr(123);
	printf("\n\nExpected: -2147483648\nGot ");
	fflush(stdout);
	ft_putnbr(-2147483648);
	printf("\n\nExpected: 2147483647\nGot: ");
	fflush(stdout);
	ft_putnbr(2147483647);
	printf("\n\nExpected: -159753\nGot: ");
	fflush(stdout);
	ft_putnbr(-159753);
	printf("\n\n\nFinished testing printing numbers.\n");
	return 0;
}