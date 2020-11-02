#include <main11.h>

int main()
{
	char *str = malloc(256);
	printf("\n");

	for(int i = 0; i < 256; i++)
	{
		str[i] = (i + 1) % 256;
	}
	
	ft_putstr_non_printable(str);
	
	printf("\n");
	
	free(str);

	return 0;
}