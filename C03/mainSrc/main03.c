#include "main03.h"

static  void clean(char *str)
{
	int i = 0;
	while(str[i] != '\0'){
		str[i++] = '\0';
	}
}

int main()
{

	printf("\nTesting 03:\n\n");

	char *str1, *str2;
	str1 = malloc(50);
	str2 = malloc(50);

	strcpy(str1, "test");
	strcpy(str2, "test");
	printf("\ns1: %s\ns2: %s\nsize: 0\n", str1, str2);
	ft_strncat(str1, str2, 0);
	printf("s1: %s\ns2: %s\n", str1, str2);
	clean(str1);
	clean(str2);

	strcpy(str1, "");
	strcpy(str2, "test");
	printf("\ns1: %s\ns2: %s\nsize: 4\n", str1, str2);
	ft_strncat(str1, str2, 4);
	printf("s1: %s\ns2: %s\n", str1, str2);
	clean(str1);
	clean(str2);

	strcpy(str1, "test");
	strcpy(str2, "");
	printf("\ns1: %s\ns2: %s\nsize: 4\n", str1, str2);
	ft_strncat(str1, str2, 4);
	printf("s1: %s\ns2: %s\n", str1, str2);
	clean(str1);
	clean(str2);

	strcpy(str1, "test one two 3!");
	strcpy(str2, "test 3 two one!");
	printf("\ns1: %s\ns2: %s\nsize: 6\n", str1, str2);
	ft_strncat(str1, str2, 6);
	printf("s1: %s\ns2: %s\n", str1, str2);
	clean(str1);
	clean(str2);

	strcpy(str1, "test one two 3!");
	strcpy(str2, "test 3 two one!");
	printf("\ns1: %s\ns2: %s\nsize: 25\n", str1, str2);
	ft_strncat(str1, str2, 25);
	printf("s1: %s\ns2: %s\n", str1, str2);
	clean(str1);
	clean(str2);

	printf("\n\nFinished testing n cat\n");

	free(str2);
	free(str1);
	return 0;
}