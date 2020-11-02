#include "main01.h"

int main()
{
	char *str1 = "";
	char *str2 = "hello!";
	char *str3 = "HELLO!";
	// char *str4 = "HELLO THERE!";

	printf("\nTesting 01:\n\n");

	printf("\ns1: %s\ns2: %s\ncmp: %d\nnexpected: %d\n", str1, str1, ft_strncmp(str1, str1, 0), strncmp(str1, str1, 0));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nnexpected: %d\n", str1, str2, ft_strncmp(str1, str2, 0), strncmp(str1, str2, 0));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nnexpected: %d\n", str2, str1, ft_strncmp(str2, str1, 0), strncmp(str2, str1, 0));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nnexpected: %d\n", str1, str3, ft_strncmp(str1, str3, 2), strncmp(str1, str3, 2));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nnexpected: %d\n", str3, str1, ft_strncmp(str3, str1, 2), strncmp(str3, str1, 2));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nnexpected: %d\n", str2, str2, ft_strncmp(str2, str2, 2), strncmp(str2, str2, 2));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nnexpected: %d\n", str2, str3, ft_strncmp(str2, str3, 15), strncmp(str2, str3, 15));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nnexpected: %d\n", str3, str2, ft_strncmp(str3, str2, 15), strncmp(str3, str2, 15));
	printf("\ns1: %s\ns2: %s\ncmp: %d\nnexpected: %d\n", str3, str3, ft_strncmp(str3, str3, 15), strncmp(str3, str3, 15));

	printf("\n\nFinished testing n cmp\n");

	return 0;
}