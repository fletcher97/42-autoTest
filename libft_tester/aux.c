#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *m_strcat(const char *s1, const char *s2)
{
	char *ret = calloc(strlen(s1) + strlen(s2) + 1, 1);
	ret = strcpy(ret, s1);
	ret = strcat(ret, s2);
	return ret;
}

char *m_itoa(int n)
{
	char *ret = malloc(12);
	sprintf(ret, "%d", n);
	return ret;
}
