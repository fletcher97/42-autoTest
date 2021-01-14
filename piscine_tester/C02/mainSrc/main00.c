#include "main00.h"

static void clear_str(char *str){
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		str[i++] = '\0';
	}
}

int main()
{
	
	char *src;
	char *dst;
	
	dst = malloc(sizeof(char) * 50);

	clear_str(dst);
	src = "";
	ft_strcpy(dst, src);
	printf("src: %s\ndst: %s\n", src, dst);
	
	clear_str(dst);
	src = "abcdefghijklmnopqrstuvwxyz";
	ft_strcpy(dst, src);
	printf("src: %s\ndst: %s\n", src, dst);

	clear_str(dst);
	src = "123456789";
	ft_strcpy(dst, src);
	printf("src: %s\ndst: %s\n", src, dst);

	clear_str(dst);
	src = "ABCD EFGH IJKL 123 456 789. Mnop";
	ft_strcpy(dst, src);
	printf("src: %s\ndst: %s\n", src, dst);

	free(dst);

	return 0;
}
