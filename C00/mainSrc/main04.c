#include "main04.h"

int main()
{
	printf("\nTesting 04:\n\n");
	ft_is_negative(42);
	printf("\n");
	ft_is_negative(123456789);
	printf("\n");
	ft_is_negative(-42);
	printf("\n");
	ft_is_negative(-123456789);
	printf("\n");
	ft_is_negative(0);
	printf("\n\nFinished testing sign. Expected P,P,N,N,P\n");
	return 0;
}