#include <main10.h>

int main()
{
	char *src;
	char *dst;
	int size;
	unsigned int ret;

	dst = malloc(sizeof(char) * 50);

	size = 0;
	src = "";
	ret = ft_strlcpy(dst, src, size);
	printf("\nsize: %d\nsrc: %s\ndst: %s\nret: %u", size, src, dst, ret);
	
	size = 10;
	src = "abcdefghijklmnopqrstuvwxyz";
	strcpy(dst, "");
	ret = ft_strlcpy(dst, src, size);
	printf("\nsize: %d\nsrc: %s\ndst: %s\nret: %u", size, src, dst, ret);

	size = 20;
	src = "123456789";
	strcpy(dst, "");
	ret = ft_strlcpy(dst, src, size);
	printf("\nsize: %d\nsrc: %s\ndst: %s\nret: %u", size, src, dst, ret);

	size = 0;
	src = "ABCD EFGH IJKL 123 456 789. Mnop";
	strcpy(dst, "");
	ret = ft_strlcpy(dst, src, size);
	printf("\nsize: %d\nsrc: %s\ndst: %s\nret: %u\n", size, src, dst, ret);

	return 0;
}