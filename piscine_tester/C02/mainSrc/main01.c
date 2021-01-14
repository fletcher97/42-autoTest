#include <main01.h>

static void clear_str(char *str){
	for(unsigned long i = 0; i < (sizeof(str) / sizeof(char)); i++){
		str[i] = '\0';
	}
}

int main()
{
	char *src;
	char *dst;
	int size;

	dst = malloc(sizeof(char) * 50);

	size = 0;
	src = "";
	clear_str(dst);
	ft_strncpy(dst, src, size);
	printf("\nsize: %d\nsrc: %s\ndst: %s\n", size, src, dst);
	
	size = 10;
	src = "abcdefghijklmnopqrstuvwxyz";
	clear_str(dst);
	ft_strncpy(dst, src, size);
	printf("\nsize: %d\nsrc: %s\ndst: %s\n", size, src, dst);

	size = 20;
	src = "123456789";
	clear_str(dst);
	ft_strncpy(dst, src, size);
	printf("\nsize: %d\nsrc: %s\ndst: %s\n", size, src, dst);

	size = 0;
	src = "ABCD EFGH IJKL 123 456 789. Mnop";
	clear_str(dst);
	ft_strncpy(dst, src, size);
	printf("\nsize: %d\nsrc: %s\ndst: %s\n", size, src, dst);

	return 0;
}