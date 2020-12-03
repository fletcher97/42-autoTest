#include <ctype.h>
#include <stdlib.h>

#include "test.h"
#include "aux.h"
#include "libft.h"

test_t *test_strlen(data_t *p){
	char *c = (char*)p->tests;
	char *n, *a, *t;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	if (ft_strlen(*c) != strlen(*c)){
		ret->code = 1;
		n = m_strcat("Error detecting type of: \"", c"\"");
		a = m_strcat(n, ".\n\tFunction returned: ");
		free(n);
		t = m_itoa(ft_strlen(*c));
		n = m_strcat(a, t);
		free(t);
		free(a);
		a = m_strcat(n, ".\n\tExpected: ");
		free(n);
		t = m_itoa(strlen(*c));
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

test_t *test_strlcpy(data_t *p){

}

test_t *test_strlcat(data_t *p){

}

test_t *test_strchr(data_t *p){

}

test_t *test_strrchr(data_t *p){

}

test_t *test_strnstr(data_t *p){

}

test_t *test_strncmp(data_t *p){
	char *c = (char*)p->tests;
	char *n, *a, *t;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	if (ft_strncmp(*c) != strncmp(*c)){
		ret->code = 1;
		n = m_strcat("Error detecting type of: \"", c"\"");
		a = m_strcat(n, ".\n\tFunction returned: ");
		free(n);
		t = m_itoa(ft_strlen(*c));
		n = m_strcat(a, t);
		free(t);
		free(a);
		a = m_strcat(n, ".\n\tExpected: ");
		free(n);
		t = m_itoa(strlen(*c));
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

test_t *test_strjoin(data_t *p){

}

test_t *test_strtrim(data_t *p){

}
