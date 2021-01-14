#include <main09.h>

int main()
{
	char *str = malloc(100);
	strcpy(str, "abc this ShOuLd BE properly-capITALized");
	printf("\nsrc: %s", str);
	printf("\nCapt. return: %s", ft_strcapitalize(str));
	printf("\nCapt. in place: %s\n", str);
	free(str);
	return 0;
}