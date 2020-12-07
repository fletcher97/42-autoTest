#include "test.h"
#include "aux.h"
#include "libft.h"

test_t *test_atoi(data_t *p)
{
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	int res = ft_atoi(p->tests);
	int exp = atoi(p->tests);
	if(res != exp)
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
		t = m_itoa(exp);
		n = m_strcat(a, t);
		free(t);
		free(a);
		ret->error = m_strcat(n, ".");
		free(n);
	} else {
		ret->code = 0;
	}
	return ret;
}

test_t *test_itoa(data_t *p)
{
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t)))){
		return NULL;
	}
	char *res = ft_itoa(*((int *)(p->tests)));
	if (!res){
		ret->code = 2;
		ret->error = strdup("Error calling function. NULL was returned.");
	} else if(strcmp(res, (char *)p->results)) {
		char *t, *n, *a;
		ret->code = 1;
		t = m_itoa(*((int *)(p->tests)));
		n = m_strcat("Error converting int ", t);
		free(t);
		a = m_strcat(n, " to string.\n\tFunction returned: ");
		free(n);
		n = m_strcat(a, res);
		free(a);
		a = m_strcat(n, ".\n\tExpected: ");
		free(n);
		n = m_strcat(a, p->results);
		free(a);
		ret->error = m_strcat(n, ".");
		free(n);
	} else {
		ret->code = 0;
	}
	free(res);
	return ret;
}

test_t *test_bzero(data_t *p)
{
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	t_list *lst = (t_list*)(p->tests);
	ft_bzero(lst->content, *((int*)(lst->next->content)));
	int size = *((int*)(lst->next->next->content));
	if(memcmp(lst->content, p->results, size))
	{
		char *t, *n, *a;
		ret->code = 1;
		t = hex_conv(lst->content, size);
		n = m_strcat("Error executing bzero.\n\tFunction returned:\n", t);
		free(t);
		a = m_strcat(n, "\n\tExpected:\n");
		free(n);
		t = hex_conv(p->results, size);
		n = m_strcat(a, t);
		free(t);
		free(a);
		ret->error = m_strcat(n, "");
		free(n);
	} else {
		ret->code = 0;
	}
	return ret;
}

test_t *test_calloc(data_t *p)
{
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	int *v = (int*)p->tests;
	char * s = ft_calloc(v[0], v[1]);
	size_t size = v[0] * v[1];
	int done = 0;
	if(!s && (of_check(v[0], v[1]) || !v[0] || !v[1]))
		done = 100;
	else if(!s && !of_check(v[0], v[1]))
		done = 1;
	else if(s && of_check(v[0], v[1]))
		done = 2;
	for(size_t i = 0; i < size && !done; i++){
		if(s[i])
			done = 1;
		else if(i == (size_t)-1)
			done = 100;
	}
	if(done == 1)
	{
		char *t, *n, *a;
		ret->code = 1;
		t = m_size_ttoa(v[0]);
		n = m_strcat("Error executing calloc with values ", t);
		free(t);
		a = m_strcat(n, " and ");
		free(n);
		t = m_size_ttoa(v[1]);
		n = m_strcat(a, t);
		free(t);
		free(a);
		ret->error = m_strcat(n, ".");
		free(n);
	} else if(done == 2) {
		char *t, *n, *a;
		ret->code = 2;
		t = m_size_ttoa(v[0]);
		n = m_strcat("Executing calloc with values ", t);
		free(t);
		a = m_strcat(n, " and ");
		free(n);
		t = m_size_ttoa(v[1]);
		n = m_strcat(a, t);
		free(t);
		free(a);
		ret->error = m_strcat(n, " will lead to undefine behavior. Consider returning NULL in theses situations");
		free(n);
	} else {
		ret->code = 0;
	}
	return ret;
}
