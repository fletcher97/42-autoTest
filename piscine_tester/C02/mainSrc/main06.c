#include <main06.h>

int main()
{
	char *str1 = "this shouldn\'t be \t printable.";
	char *str2 = "this should be printable";
	char *str3 = "";

	printf("\nNon printable (expected 0): %d\n", ft_str_is_printable(str1));
	printf("Printable (expected 1): %d\n", ft_str_is_printable(str2));
	printf("Empty (expected 1): %d\n", ft_str_is_printable(str3));
	return 0;
}