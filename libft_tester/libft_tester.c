#include "is_tester.h"
#include "singles_tester.h"
#include "to_tester.h"
#include "test.h"

void test_is()
{
	test_fn_t tests[] = {{test_isalnum, "isalnum", NULL}, {test_isalpha, "isalpha", NULL}, {test_isascii, "isascii", NULL}, {test_isdigit, "isdigit", NULL}, {test_isprint, "isprint", NULL}};
	foreach(test_fn_t *t, tests){
		int errors = 0;
		printf("%sINFO: testing %s.%s\n", GREEN, t->name, CLEAR);
		for (int i = 0; i < 255; i++)
		{
			data_t *temp = malloc(sizeof(data_t));
			temp->tests = &i;
			errors += test(t->function, temp);
			free(temp);
		}
		if(!errors)
			printf("%sOK: All tests passed for %s.%s\n", GREEN, t->name, CLEAR);
		else
			printf("%sSUMMARY: a total of %d errors were detected in %s.%s\n", YELLOW, errors, t->name, CLEAR);
	}
}

void test_single()
{
	char *tests[12] = {"0", "-1", "+1", "+-1", "-+1", "--1", "++1", "2147483647", "-2147483648"};
	int results[] = {0, -1, 1, 0, 0, 0, 0, 2147483647, -2147483648};
	int errors = 0;
	printf("%sINFO: testing atoi.%s\n", GREEN, CLEAR);
	for (int i = 0; i < 9; i++)
	{
		data_t *temp = malloc(sizeof(data_t));
		temp->tests = tests[i];
		temp->results = &results[i];
		errors += test(test_atoi, temp);
		free(temp);
	}
	if(!errors)
		printf("%sOK: All tests passed for atoi.%s\n", GREEN, CLEAR);
	else
		printf("%sSUMMARY: a total of %d errors were detected in atoi.%s\n", YELLOW, errors, CLEAR);
}

void test_to()
{
	test_fn_t tests[] = {{test_toupper, "toupper", NULL}, {test_tolower, "tolower", NULL}};
	foreach(test_fn_t *t, tests){
		int errors = 0;
		printf("%sINFO: testing %s.%s\n", GREEN, t->name, CLEAR);
		for (int i = 0; i < 255; i++)
		{
			data_t *temp = malloc(sizeof(data_t));
			temp->tests = &i;
			errors += test(t->function, temp);
			free(temp);
		}
		if(!errors)
			printf("%sOK: All tests passed for %s.%s\n", GREEN, t->name, CLEAR);
		else
			printf("%sSUMMARY: a total of %d errors were detected in %s.%s\n", YELLOW, errors, t->name, CLEAR);
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
