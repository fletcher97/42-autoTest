#ifndef TEST_H
#define TEST_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define foreach(item, array) \
	for(int keep = 1, \
			count = 0,\
			size = sizeof (array) / sizeof *(array); \
		keep && count != size; \
		keep = !keep, count++) \
		for(item = (array) + count; keep; keep = !keep)

#define CLEAR "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

typedef struct	test_s
{
	int code;
	char *error;
}				test_t;

typedef struct	data_s
{
	void *tests;
	void *results;
}				data_t;


typedef test_t *(*test_f_t)(data_t *);

typedef struct	test_fn_s
{
	test_f_t function;
	char *name;
	void *data;
}				test_fn_t;

int test(test_f_t f, data_t *p);

#endif
