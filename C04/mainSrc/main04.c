#include "main04.h"

int main()
{
	printf("\nTesting 04:\n");

	char *base = malloc(37);

	strcpy(base, "0123456789");
	printf("\nExpected 123456789, got: ");
	fflush(stdout);
	ft_putnbr_base(123456789, base);

	strcpy(base, "01");
	printf("\nExpected 101010101010, got: ");
	fflush(stdout);
	ft_putnbr_base(2730, base);

	strcpy(base, "0123456789abcdef");
	printf("\nExpected fafabcd159, got: ");
	fflush(stdout);
	ft_putnbr_base(264032601, base);

	strcpy(base, "0123456789abcdefghijklmnopqrstuvwxyz");
	printf("\nExpected \'ola\', got: ");
	fflush(stdout);
	ft_putnbr_base(31870, base);

	strcpy(base, "2Liobas4");
	printf("\nExpected 42Lisboa, got: ");
	fflush(stdout);
	ft_putnbr_base(814, base);

	strcpy(base, "");
	printf("\nExpected nothing (empty base), got: ");
	fflush(stdout);
	ft_putnbr_base(814, base);

	strcpy(base, "([{}])([{}])");
	printf("\nExpected nothing (duplicate base), got: ");
	fflush(stdout);
	ft_putnbr_base(814, base);

	strcpy(base, "12-34");
	printf("\nExpected nothing (sign base), got: ");
	fflush(stdout);
	ft_putnbr_base(814, base);

	free(base);

	printf("\n\nFinished testing printing numbers in diferent bases.\n");
	
	return 0;
}
