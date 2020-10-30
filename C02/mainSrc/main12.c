#include <main12.h>

int main()
{
	char *test = malloc(256);

	for(int i = 0; i < 256; i++){
		test[i] = i;
	}

	printf("\n");
	ft_print_memory(test, 257);

	free(test);

	return 0;
}