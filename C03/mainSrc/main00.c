#include "main00.h"

int main()
{
	char *str1 = "";
	char *str2 = "hello!";
	char *str3 = "HELLO!";

	printf("\nTesting 00:\n\n");

	printf("\ns1: %s\ns2: %s\ncmp: %d\nexpected: %d\n", str1, str1, ft_strcmp(str1, str1), strcmp(str1, str1));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nexpected: %d\n", str1, str2, ft_strcmp(str1, str2), strcmp(str1, str2));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nexpected: %d\n", str2, str1, ft_strcmp(str2, str1), strcmp(str2, str1));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nexpected: %d\n", str1, str3, ft_strcmp(str1, str3), strcmp(str1, str3));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nexpected: %d\n", str3, str1, ft_strcmp(str3, str1), strcmp(str3, str1));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nexpected: %d\n", str2, str2, ft_strcmp(str2, str2), strcmp(str2, str2));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nexpected: %d\n", str2, str3, ft_strcmp(str2, str3), strcmp(str2, str3));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nexpected: %d\n", str3, str2, ft_strcmp(str3, str2), strcmp(str3, str2));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nexpected: %d\n", str3, str3, ft_strcmp(str3, str3), strcmp(str3, str3));

	printf("\n\nFinished testing cmp\n");

	return 0;
}