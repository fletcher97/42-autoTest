#include "is_tester.h"
#include "to_tester.h"
#include "str_tester.h"
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

	int results[] = {1, 1, 5, 0, 20, 144};
	test_fn_t tests[] = {{test_strlen, "strlen", NULL}, {test_strlcpy, "strlcpy", NULL}, {test_strlcat, "strlcat", NULL}, {test_strchr, "strchr", NULL}, {test_strrchr, "strrchr", NULL}, {test_strnstr, "strnstr", NULL}, {test_strncmp, "strncmp", NULL}, {test_strjoin, "strjoin", NULL}, {test_strtrim, "strtrim", NULL}};
	foreach(test_fn_t *t, tests){

void test_str()
{
	/*strlen*/
	char *strlen_tests[145] = {"a", "\r", "hello", "", "hello this is a test", "testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest"};
	int errors = 0;
	printf("%sINFO: testing strlen.%s\n", GREEN, CLEAR);
	for (int i = 0; i < 6; i++)
	{
		data_t *temp = malloc(sizeof(data_t));
		temp->tests = &i;
		errors += test(test_strlen, temp);
		free(temp);
	}
	if(!errors)
		printf("%sOK: All tests passed for strlen.%s\n", GREEN, CLEAR);
	else
		printf("%sINFO: a total of %d errors were detected in strlen.%s\n", GREEN, errors, CLEAR);
	/*strlcpy*/
	/*strlcat*/
	/*strchr*/
	/*strrchr*/
	/*strnstr*/
	/*strncmp*/
	char *strncmp_tests1[21] = {"a", "\r", "hello", "", "hello this is a test", "tests", "abc"};
	char *strncmp_tests2[21] = {"b", "\r", "hella", "", "hello thi\n is a", "tests", "bcd"};
	int n_compares[] = {5, 1, 4, 2, 2, 12, 6, 0};
	int errors = 0;
	printf("%sINFO: testing strlen.%s\n", GREEN, CLEAR);
	for (int i = 0; i < 6; i++)
	{
		data_t *temp = malloc(sizeof(data_t));
		temp->tests = &i;
		errors += test(test_strlen, temp);
		free(temp);
	}
	if(!errors)
		printf("%sOK: All tests passed for strlen.%s\n", GREEN, CLEAR);
	else
		printf("%sINFO: a total of %d errors were detected in strlen.%s\n", GREEN, errors, CLEAR);
	/*strjoin*/
	/*strtrim*/
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
	test_str();
	test_to();
	return 0;
}
