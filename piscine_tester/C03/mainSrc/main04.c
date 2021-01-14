#include "main04.h"

int main()
{
	char *str = malloc(120);
	char *to_find = malloc(50);
	char *ret;

	printf("\nTesting 04:\n\n");

	strcpy(str, "This is a string. A very important string... Why? Because I said so. Don't tell anyone. It will be our secret.");
	printf("haystack: \"%s\"\n", str);

	strcpy(to_find, "");
	printf("\nLooking for: %s\n", to_find);
	ret = ft_strstr(str, to_find);
	if(ret)
		printf("Found: %s\n", ret);
	else
		printf("NULL returned\n");

	strcpy(to_find, "Why");
	printf("\nLooking for: %s\n", to_find);
	ret = ft_strstr(str, to_find);
	if(ret)
		printf("Found: %s\n", ret);
	else
		printf("NULL returned\n");

	strcpy(to_find, "strang");
	printf("\nLooking for: %s\n", to_find);
	ret = ft_strstr(str, to_find);
	if(ret)
		printf("Found: %s\n", ret);
	else
		printf("NULL returned\n");

	strcpy(to_find, "A very important ");
	printf("\nLooking for: %s\n", to_find);
	ret = ft_strstr(str, to_find);
	if(ret)
		printf("Found: %s\n", ret);
	else
		printf("NULL returned\n");

	// char *ft_strstr(str, to_find);
	free(to_find);
	free(str);

	printf("\n\nFinished testing strstr\n");

	return 0;
}
