#include <main07.h>

int main()
{
	char *str = malloc(100);
	strcpy(str, "THIS StR NEeds to BE traNSfORmEd to UppER CasE.\nCAN it HanDlE lF?");
	printf("\nsrc: %s", str);
	printf("\nUp in place: %s", ft_strupcase(str));
	printf("\nUp in place: %s\n", str);
	free(str);
	return 0;
}