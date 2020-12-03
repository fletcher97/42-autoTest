#include <ctype.h>
#include <stdlib.h>

#include "test.h"
#include "aux.h"
#include "libft.h"

test_t *test_isalnum(data_t *p)
{
	int *c = (int*)p->tests;
	char *n, *a, *t;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	if (!ft_isalnum(*c) != !isalnum(*c)){
		ret->code = 1;
		t = m_itoa(*c);
		n = m_strcat("Error detecting type of ", t);
		free(t);
		a = m_strcat(n, ".\n\tFunction returned: ");
		free(n);
		t = m_itoa(ft_isalnum(*c));
		n = m_strcat(a, t);
		free(t);
		free(a);
		a = m_strcat(n, ".\n\tExpected: ");
		free(n);
		t = m_itoa(isalnum(*c));
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

test_t *test_isalpha(data_t *p)
{
	int *c = (int*)p->tests;
	char *n, *a, *t;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	if (!ft_isalpha(*c) != !isalpha(*c)){
		ret->code = 1;
		t = m_itoa(*c);
		n = m_strcat("Error detecting type of ", t);
		free(t);
		a = m_strcat(n, ".\n\tFunction returned: ");
		free(n);
		t = m_itoa(ft_isalpha(*c));
		n = m_strcat(a, t);
		free(t);
		free(a);
		a = m_strcat(n, ".\n\tExpected: ");
		free(n);
		t = m_itoa(isalpha(*c));
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

test_t *test_isascii(data_t *p)
{
	int *c = (int*)p->tests;
	char *n, *a, *t;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	if (!ft_isascii(*c) != !isascii(*c)){
		ret->code = 1;
		t = m_itoa(*c);
		n = m_strcat("Error detecting type of ", t);
		free(t);
		a = m_strcat(n, ".\n\tFunction returned: ");
		free(n);
		t = m_itoa(ft_isascii(*c));
		n = m_strcat(a, t);
		free(t);
		free(a);
		a = m_strcat(n, ".\n\tExpected: ");
		free(n);
		t = m_itoa(isascii(*c));
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

test_t *test_isdigit(data_t *p)
{
	int *c = (int*)p->tests;
	char *n, *a, *t;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	if (!ft_isdigit(*c) != !isdigit(*c)){
		ret->code = 1;
		t = m_itoa(*c);
		n = m_strcat("Error detecting type of ", t);
		free(t);
		a = m_strcat(n, ".\n\tFunction returned: ");
		free(n);
		t = m_itoa(ft_isdigit(*c));
		n = m_strcat(a, t);
		free(t);
		free(a);
		a = m_strcat(n, ".\n\tExpected: ");
		free(n);
		t = m_itoa(isdigit(*c));
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

test_t *test_isprint(data_t *p)
{
	int *c = (int*)p->tests;
	char *n, *a, *t;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	if (!ft_isprint(*c) != !isprint(*c)){
		ret->code = 1;
		t = m_itoa(*c);
		n = m_strcat("Error detecting type of ", t);
		free(t);
		a = m_strcat(n, ".\n\tFunction returned: ");
		free(n);
		t = m_itoa(ft_isprint(*c));
		n = m_strcat(a, t);
		free(t);
		free(a);
		a = m_strcat(n, ".\n\tExpected: ");
		free(n);
		t = m_itoa(isprint(*c));
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
