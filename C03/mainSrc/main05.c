#include "main05.h"

static void clean(char *str)
{
	int i = 0;
	while(str[i] != '\0'){
		str[i++] = '\0';
	}
}

int main()
{
	unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
	printf("\nTesting 05:\n\n");

	char *str1, *str2;
	unsigned int i;
	str1 = malloc(50);
	str2 = malloc(50);

	strcpy(str1, "test");
	strcpy(str2, "test");
	printf("\ns1: %s\ns2: %s\nsize: 0\n", str1, str2);
	i = strlcat(str1, str2, 0);
	printf("s1: %s\ns2: %s\nret: %d\nexpected: 4\n", str1, str2, i);
	clean(str1);
	clean(str2);

	strcpy(str1, "");
	strcpy(str2, "test");
	printf("\ns1: %s\ns2: %s\nsize: 10\n", str1, str2);
	i = strlcat(str1, str2, 10);
	printf("s1: %s\ns2: %s\nret: %d\nexpected: 4\n", str1, str2, i);
	clean(str1);
	clean(str2);

	strcpy(str1, "test");
	strcpy(str2, "");
	printf("\ns1: %s\ns2: %s\nsize: 10\n", str1, str2);
	i = strlcat(str1, str2, 10);
	printf("s1: %s\ns2: %s\nret: %d\nexpected: 4\n", str1, str2, i);
	clean(str1);
	clean(str2);

	strcpy(str1, "test one two 3!");
	strcpy(str2, "test 3 two one!");
	printf("\ns1: %s\ns2: %s\nsize: 5\n", str1, str2);
	i = strlcat(str1, str2, 5);
	printf("s1: %s\ns2: %s\nret: %d\nexpected: 20\n", str1, str2, i);
	clean(str1);
	clean(str2);

	strcpy(str1, "test one two 3!");
	strcpy(str2, "test 3 two one!");
	printf("\ns1: %s\ns2: %s\nsize: 25\n", str1, str2);
	i = strlcat(str1, str2, 25);
	printf("s1: %s\ns2: %s\nret: %d\nexpected: 30\n", str1, str2, i);
	clean(str1);
	clean(str2);

	printf("\n\nFinished testing n cat\n");

	free(str2);
	free(str1);
	return 0;
}
