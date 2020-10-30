#include <main02.h>

int main()
{
	char *str1 = "this shouldn\'t be alphabetical.123";
	char *str2 = "thisshouldbeALPHABETICAL";
	char *str3 = "";

	printf("\nNon alphabetical (expected 0): %d\n", ft_str_is_alpha(str1));
	printf("Alphabetical (expected 1): %d\n", ft_str_is_alpha(str2));
	printf("Empty (expected 1): %d\n", ft_str_is_alpha(str3));
	return 0;
}