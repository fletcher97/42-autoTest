#include <ctype.h>
#include <stdlib.h>

#include "test.h"
#include "aux.h"
#include "libft.h"


test_t *test_strlen(data_t *p){
	char *c = (char*)p->tests;
	char *n, *a, *t;
	int z,x;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	z = ft_strlen(*c);
	x = strlen(*c);
	if (z != x){
		ret->code = 1;
		t = m_itoa(z);
		n = m_strcat("Error calculating length.\n\tFunction returned:\n", t);
		free(t);
		a = m_strcat(n, ".\n\tExpected:\n");
		free(n);
		t = m_itoa(x);
		n = m_strcat(a, t);
		free(a);
		free(t);
		ret->error = m_strcat(n, ".");
		free(n);
	}
	else {
		ret->code = 0;
	}
	return ret;
}

test_t *test_strlcpy(data_t *p){
	t_list *c1 = (t_list*)(p->tests);
	char *n, *a, *t, *str;
	int z,x;
	test_t *ret;
	str = strdup(c1->content);
	if (!(ret = malloc(sizeof(test_t)))){
		free(str);
		return NULL;
	}
	z = ft_strlcat(c1->content, c1->next->content, (int)c1->next->next->content);
	x = strlcat(str, c1->next->content, (int)c1->next->next->content);
	if (z != x || strcmp(str, c1->content) != 0){
		ret->code = 1;
		t = m_itoa(z);
		n = m_strcat("Error copying strings:.\n\tFunction returned:", t);
		free(t);
		a = m_strcat(n, "\n\tExpected:\n");
		free(n);
		t = m_itoa(x);
		n = m_strcat(a, t);
		free(a);
		free(t);
		ret->error = m_strcat(n, ".");
		free(n);
	} else {
		ret->code = 0;
	}
	free(str);
	return ret;
}

test_t *test_strlcat(data_t *p){
	t_list *c1 = (t_list*)(p->tests);
	char *n, *a, *t, *str;
	int z,x;
	test_t *ret;
	str = strdup(c1->content);
	if (!(ret = malloc(sizeof(test_t)))){
		free(str);
		return NULL;
	}
	z = ft_strlcat(c1->content, c1->next->content, (int)c1->next->next->content);
	x = strlcat(str, c1->next->content, (int)c1->next->next->content);
	if (z != x || strcmp(str, c1->content) != 0){
		ret->code = 1;
		t = m_itoa(z);
		n = m_strcat("Error concatenating strings:.\n\tFunction returned:", t);
		free(t);
		a = m_strcat(n, "\n\tExpected:\n");
		free(n);
		t = m_itoa(x);
		n = m_strcat(a, t);
		free(a);
		free(t);
		ret->error = m_strcat(n, ".");
		free(n);
	} else {
		ret->code = 0;
	}
	free(str);
	return ret;
}

test_t *test_strchr(data_t *p){
	t_list *c1 = (t_list*)(p->tests);
	char *n, *a, *t, *s1, *s2;
	int size;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t)))){
		return NULL;
	}
	s1 = ft_strchr(c1->content, c1->next->content);
	s2 = strchr(c1->content, c1->next->content);
	if (strcmp(s1, s2) != 0){
		ret->code = 1;
		size = strlen(s1);
		t = hex_conv(s1, size);
		n = m_strcat("Error finding char in string.\n\tFunction returned:\n", t);
		free(t);
		a = m_strcat(n, "\n\tExpected: \n");
		free(n);
		size = strlen(s2);
		t = hex_conv(s2, size);
		n = m_strcat(a, t);
		free(t);
		free(a);
		ret->error = m_strcat(n, ".");
		free(n);
	} else {
		ret->code = 0;
	}
	free(s2);
	free(s1);
	return ret;
}

test_t *test_strrchr(data_t *p){
	t_list *c1 = (t_list*)(p->tests);
	char *n, *a, *t, *s1, *s2;
	int size;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t)))){
		return NULL;
	}
	s1 = ft_strrchr(c1->content, c1->next->content);
	s2 = strrchr(c1->content, c1->next->content);
	if (strcmp(s1, s2) != 0){
		ret->code = 1;
		size = strlen(s1);
		t = hex_conv(s1, size);
		n = m_strcat("Error finding char in string.\n\tFunction returned:\n", t);
		free(t);
		a = m_strcat(n, "\n\tExpected: \n");
		free(n);
		size = strlen(s2);
		t = hex_conv(s2, size);
		n = m_strcat(a, t);
		free(t);
		free(a);
		ret->error = m_strcat(n, ".");
		free(n);
	} else {
		ret->code = 0;
	}
	free(s2);
	free(s1);
	return ret;
}

test_t *test_strnstr(data_t *p){
	t_list *c = (t_list*)(p->tests);
	char *n, *a, *t, *s1, *s2;
	int size;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	s1 = ft_strnstr(c->content, c->next->content, (int)c->next->next->content);
	s2 = ft_strnstr(c->content, c->next->content, (int)c->next->next->content);
	if (strcmp(s1, s2) != 0){
		ret->code = 1;
		size = strlen(s1);
		t = hex_conv(s1, size);
		n = m_strcat("Error joining strings.\n\tFunction returned:\n", t);
		free(t);
		a = m_strcat(n, "\n\tExpected: \n");
		free(n);
		size = strlen(s2);
		t = hex_conv(s2, size);
		n = m_strcat(a, t);
		free(t);
		free(a);
		ret->error = m_strcat(n, ".");
		free(n);
	} else {
		ret->code = 0;
	}
	free(s2);
	free(s1);
	return ret;
}

test_t *test_strncmp(data_t *p){
	t_list *c = (t_list*)(p->tests);
	char *n, *a, *t;
	int z,x;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	z = ft_strncmp(c->content, c->next->content, (int)c->next->next->content);
	x = strncmp(c->content, c->next->content, (int)c->next->next->content);
	if (x != z){
		ret->code = 1;
		t = m_itoa(z);
		n = m_strcat("Error comparing strings.\n\tFunction returned:\n", t);
		free(t);
		a = m_strcat(n, "\n\tExpected: \n");
		free(n);
		t = m_itoa(x);
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
	t_list *c1 = (t_list*)(p->tests);
	char *n, *a, *t, *str;
	int size;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	str = ft_strjoin(c1->content, c1->next->content);
	if ((strcmp(str, c1->next->next->content)) != 0){
		ret->code = 1;
		size = strlen(str);
		t = hex_conv(str, size);
		n = m_strcat("Error joining strings.\n\tFunction returned:\n", t);
		free(t);
		a = m_strcat(n, "\n\tExpected: \n");
		free(n);
		size = strlen(c1->next->next->content);
		t = hex_conv(c1->next->next->content, size);
		n = m_strcat(a, t);
		free(t);
		free(a);
		ret->error = m_strcat(n, ".");
		free(n);
	} else {
		ret->code = 0;
	}
	free(str);
	return ret;
}

test_t *test_strtrim(data_t *p){
	t_list *c1 = (t_list*)(p->tests);
	char *n, *a, *t, *str;
	int size;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	str = ft_strtrim(c1->content);
	if ((strcmp(str, c1->next->content)) != 0){
		ret->code = 1;
		size = strlen(str);
		t = hex_conv(str, size);
		n = m_strcat("Error triming strings.\n\tFunction returned:\n", t);
		free(t);
		a = m_strcat(n, "\n\tExpected: \n");
		free(n);
		size = strlen(c1->next->content);
		t = hex_conv(c1->next->content, size);
		n = m_strcat(a, t);
		free(t);
		free(a);
		ret->error = m_strcat(n, ".");
		free(n);
	} else {
		ret->code = 0;
	}
	free(str);
	return ret;
}

test_t *test_strdup(data_t *p){
	t_list *c1 = (t_list*)(p->tests);
	char *n, *a, *t, *str;
	int size;
	test_t *ret;
	if (!(ret = malloc(sizeof(test_t))))
		return NULL;
	str = ft_strdup(c1->content);
	if ((strcmp(str, c1->content)) != 0 || str == c1->content){
		ret->code = 1;
		size = strlen(str);
		t = hex_conv(str, size);
		n = m_strcat("Error duplicating strings.\n\tFunction returned:\n", t);
		free(t);
		a = m_strcat(n, "\n\tExpected: \n");
		free(n);
		size = strlen(c1->content);
		t = hex_conv(c1->content, size);
		n = m_strcat(a, t);
		free(t);
		free(a);
		ret->error = m_strcat(n, ".");
		free(n);
	} else {
		ret->code = 0;
	}
	free(str);
	return ret;
}
