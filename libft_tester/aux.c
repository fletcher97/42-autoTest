#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *m_strcat(const char *s1, const char *s2)
{
	char *ret;
	if(!s1 || !s2 || !(ret = calloc(strlen(s1) + strlen(s2) + 1, 1)))
		return NULL;
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

char *m_size_ttoa(size_t n)
{
	//Based on ULONG_MAX
	char *ret = malloc(21);
	sprintf(ret, "%zu", n);
	return ret;
}

int	of_check(size_t s, size_t n)
{
	size_t m;

	if (!s)
		return (0);
	m = (size_t)-1;
	return ((m / s) < n);
}

char *hex_conv(void *p, size_t n)
{
	u_char *v = (u_char*)p;
	char *ret, *a;
	if(!(ret = malloc(3)))
		return NULL;
	ret[0] = '\t';
	ret[1] = '\t';
	ret[2] = 0;
	char hex[3];
	for(size_t i = 0; i < n; i++)
	{
		sprintf(hex, "%02x", v[i]);
		a = m_strcat(ret, hex);
		free(ret);
		ret = a;
		if(i%2){
			a = m_strcat(ret, " ");
			free(ret);
			ret = a;
		}
		if((i%16) == 15 && i && n > (i + 1)){
			a = m_strcat(ret, "\n\t\t");
			free(ret);
			ret = a;
		}
		if(i == (size_t)-1)
			break;
	}
	return ret;
}
