#include <main03.h>

int main()
{
	char *str1 = "this shouldn\'t be numeric.";
	char *str2 = "123456789455644648823";
	char *str3 = "";

	printf("\nNon numeric (expected 0): %d\n", ft_str_is_numeric(str1));
	printf("Numeric (expected 1): %d\n", ft_str_is_numeric(str2));
	printf("Empty (expected 1): %d\n", ft_str_is_numeric(str3));
	return 0;
}