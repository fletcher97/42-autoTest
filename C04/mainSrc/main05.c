#include "main05.h"

int main()
{
	printf("\nTesting 05:\n");

	char *base = malloc(37);

	strcpy(base, "0123456789");
	printf("\nExpected 123456789, got: %d", ft_atoi_base("123456789", base));

	strcpy(base, "01");
	printf("\nExpected 2730, got: %d", ft_atoi_base("101010101010", base));

	strcpy(base, "0123456789abcdef");
	printf("\nExpected 264032601, got: %d", ft_atoi_base("fafabcd159", base));

	strcpy(base, "0123456789abcdefghijklmnopqrstuvwxyz");
	printf("\nExpected 31870, got: %d", ft_atoi_base("ola", base));

	strcpy(base, "2Liobas4");
	printf("\nExpected 814, got: %d", ft_atoi_base("42Lisboa", base));

	strcpy(base, "");
	printf("\nExpected nothing (empty base), got: %d", ft_atoi_base("814", base));

	strcpy(base, "([{}])([{}])");
	printf("\nExpected nothing (duplicate base), got: %d", ft_atoi_base("814", base));

	strcpy(base, "12-34");
	printf("\nExpected nothing (sign base), got: %d", ft_atoi_base("814", base));

	free(base);

	printf("\n\nFinished testing converting numbers in diferent bases.\n");
	
	return 0;
}