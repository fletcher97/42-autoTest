#include "test.h"
#include "aux.h"
#include "libft.h"

test_t *test_atoi(data_t *p)
{
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	int res = ft_atoi(p->tests);
	if(res != *((int *)(p->results)))
	{
		char *t, *n, *a;
		ret->code = 1;
		n = m_strcat("Error converting string \"", (char *)(p->tests));
		a = m_strcat(n, "\" to int.\n\tFunction returned: ");
		free(n);
		t = m_itoa(res);
		n = m_strcat(a, t);
		free(t);
		free(a);
		a = m_strcat(n, ".\n\tExpected: ");
		free(n);
		t = m_itoa(*((int *)(p->results)));
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
