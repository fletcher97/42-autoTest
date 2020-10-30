#include <main05.h>

int main()
{
	char *str1 = "this shouldn\'t be UPPERCASE.";
	char *str2 = "THISSHOULDBEUPPERCASE";
	char *str3 = "";

	printf("\nNon uppercase (expected 0): %d\n", ft_str_is_uppercase(str1));
	printf("Uppercase (expected 1): %d\n", ft_str_is_uppercase(str2));
	printf("Empty (expected 1): %d\n", ft_str_is_uppercase(str3));
	return 0;
}