#include <main04.h>

int main()
{
	char *str1 = "this shouldn\'t be lowercase.";
	char *str2 = "thisshouldbelowercase";
	char *str3 = "";

	printf("\nNon lowercase (expected 0): %d\n", ft_str_is_lowercase(str1));
	printf("Lowercase (expected 1): %d\n", ft_str_is_lowercase(str2));
	printf("Empty (expected 1): %d\n", ft_str_is_lowercase(str3));
	return 0;
}