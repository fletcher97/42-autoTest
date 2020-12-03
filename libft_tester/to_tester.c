#include <ctype.h>
#include <stdlib.h>

#include "test.h"
#include "aux.h"
#include "libft.h"

test_t *test_toupper(data_t *p)
{
	int *c = (int*)p->tests;
	char *n, *a, *t;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	if (!ft_toupper(*c) != !toupper(*c)){
		ret->code = 1;
		t = m_itoa(*c);
		n = m_strcat("Error converting ascii:", t);
		free(t);
		a = m_strcat(n, ".\n\tFunction returned: ");
		free(n);
		t = m_itoa(ft_toupper(*c));
		n = m_strcat(a, t);
		free(t);
		free(a);
		a = m_strcat(n, ".\n\tExpected: ");
		free(n);
		t = m_itoa(toupper(*c));
		n = m_strcat(a, t);
		free(t);
		ret->error = m_strcat(n, ".");
		free(a);
		free(n);
	} else {
		ret->code = 0;
	}
	return ret;
}

test_t *test_tolower(data_t *p)
{
	int *c = (int*)p->tests;
	char *n, *a, *t;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	if (!ft_tolower(*c) != !tolower(*c)){
		ret->code = 1;
		t = m_itoa(*c);
		n = m_strcat("Error converting ascii:", t);
		free(t);
		a = m_strcat(n, ".\n\tFunction returned: ");
		free(n);
		t = m_itoa(ft_tolower(*c));
		n = m_strcat(a, t);
		free(t);
		free(a);
		a = m_strcat(n, ".\n\tExpected: ");
		free(n);
		t = m_itoa(tolower(*c));
		n = m_strcat(a, t);
		free(t);
		ret->error = m_strcat(n, ".");
		free(a);
		free(n);
	} else {
		ret->code = 0;
	}
	return ret;
}
