#include "main02.h"

static void clean(char *str)
{
	int i = 0;
	while(str[i] != '\0'){
		str[i++] = '\0';
	}
}

int main()
{

	printf("\nTesting 02:\n\n");

	char *str1, *str2;
	str1 = malloc(50);
	str2 = malloc(50);

	strcpy(str1, "test");
	strcpy(str2, "test");
	printf("\ns1: %s\ns2: %s\n", str1, str2);
	ft_strcat(str1, str2);
	printf("s1: %s\ns2: %s\n", str1, str2);
	clean(str1);
	clean(str2);

	strcpy(str1, "");
	strcpy(str2, "test");
	printf("\ns1: %s\ns2: %s\n", str1, str2);
	ft_strcat(str1, str2);
	printf("s1: %s\ns2: %s\n", str1, str2);
	clean(str1);
	clean(str2);

	strcpy(str1, "test");
	strcpy(str2, "");
	printf("\ns1: %s\ns2: %s\n", str1, str2);
	ft_strcat(str1, str2);
	printf("s1: %s\ns2: %s\n", str1, str2);
	clean(str1);
	clean(str2);

	strcpy(str1, "test one two 3!");
	strcpy(str2, "test 3 two one!");
	printf("\ns1: %s\ns2: %s\n", str1, str2);
	ft_strcat(str1, str2);
	printf("s1: %s\ns2: %s\n", str1, str2);
	clean(str1);
	clean(str2);

	printf("\n\nFinished testing cat\n");

	free(str2);
	free(str1);
}