#include <main11.h>

int main()
{
	char *str = "Hello.\n These are special char: \n\t\b \n\n";
	printf("\n");
	ft_putstr_non_printable(str);
	printf("\n");
	return 0;
}