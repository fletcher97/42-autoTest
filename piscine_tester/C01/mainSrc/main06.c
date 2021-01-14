#include "main06.h"

int main()
{
	printf("\nTesting 06:\n\n");
	printf("%d\n", ft_strlen(""));
	printf("%d\n", ft_strlen("123123123123123123123123123123123123123123123123123"));
	printf("%d\n", ft_strlen("abcd45687952365896547874589652"));
	printf("\n\nFinished testing string length calculation. Expected 0, 51, 30\n");
	return 0;
}