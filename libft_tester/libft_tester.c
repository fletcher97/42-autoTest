#include "is_tester.h"
#include "to_tester.h"
#include "test.h"

void test_is()
{
	test_fn_t tests[] = {{test_isalnum, "Isalnum", NULL}, {test_isalpha, "Isalpha", NULL}, {test_isascii, "Isascii", NULL}, {test_isdigit, "Isdigit", NULL}, {test_isprint, "Isprint", NULL}};
	foreach(test_fn_t *t, tests){
		int errors = 0;
		printf("%sINFO: testing %s%s\n", GREEN, t->name, CLEAR);
		for (int i = 0; i < 255; i++)
		{
			data_t *temp = malloc(sizeof(data_t));
			temp->tests = &i;
			errors += test(t->function, temp);
			free(temp);
		}
		if(!errors)
			printf("%sOK: All tests passed for %s%s\n", GREEN, t->name, CLEAR);
		else
			printf("%sINFO: a total of %d errors were detected in %s%s\n", GREEN, errors, t->name, CLEAR);
	}
}

void test_single()
{

}

void test_to()
{
	test_fn_t tests[] = {{test_toupper, "toupper", NULL}, {test_tolower, "tolower", NULL}};
	foreach(test_fn_t *t, tests){
		int errors = 0;
		printf("%sINFO: testing %s%s\n", GREEN, t->name, CLEAR);
		for (int i = 0; i < 255; i++)
		{
			data_t *temp = malloc(sizeof(data_t));
			temp->tests = &i;
			errors += test(t->function, temp);
			free(temp);
		}
		if(!errors)
			printf("%sOK: All tests passed for %s%s\n", GREEN, t->name, CLEAR);
		else
			printf("%sINFO: a total of %d errors were detected in %s%s\n", GREEN, errors, t->name, CLEAR);
	}
}

int main()
{
	// test_atoi();
	// test_itoa();
	// test_bzero();
	// test_calloc();

	test_is();
	test_single();
	// test_lst();
	// test_mem();
	// test_fd();
	// test_str();
	test_to();
	return 0;
}
