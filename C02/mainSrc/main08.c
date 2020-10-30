#include <main08.h>

int main()
{
	char *str = malloc(100);
	strcpy(str, "THIS StR NEeds to BE traNSfORmEd to LowEr CasE.\nCAN it HanDlE lF?");
	printf("\nsrc: %s", str);
	printf("\nLow return: %s", ft_strlowcase(str));
	printf("\nLow in place: %s\n", str);
	free(str);
	return 0;
}