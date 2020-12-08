#include "is_tester.h"
#include "singles_tester.h"
#include "to_tester.h"
#include "test.h"
#include "libft.h"

void test_is()
{
	test_fn_t tests[] = {{test_isalnum, "isalnum", NULL}, {test_isalpha, "isalpha", NULL}, {test_isascii, "isascii", NULL}, {test_isdigit, "isdigit", NULL}, {test_isprint, "isprint", NULL}};
	foreach(test_fn_t *t, tests){
		int errors = 0;
		printf("%sINFO: testing %s.%s\n", GREEN, t->name, CLEAR);
		for (int i = 0; i < 255; i++)
		{
			data_t *temp;
			if(!(temp = malloc(sizeof(data_t))))
			{
				printf("%s%sERROR: Failed to allocate memorry to test %s.%s\n", BLACK, RED_BG, t->name, CLEAR);
				errors++;
				continue;
			}
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
	int errors;
	/*atoi*/
	printf("%sINFO: testing atoi.%s\n", GREEN, CLEAR);
	char *atoi_tests[12] = {"0", "-1", "+1", "+-1", "-+1", "--1", "++1", "2147483647", "-2147483648"};
	errors = 0;
	for (int i = 0; i < 9; i++)
	{
		data_t *temp;
		if(!(temp = malloc(sizeof(data_t))))
		{
			printf("%s%sERROR: Failed to allocate memorry to test atoi.%s\n", BLACK, RED_BG, CLEAR);
			errors++;
			continue;
		}
		temp->tests = atoi_tests[i];
		errors += test(test_atoi, temp);
		free(temp);
	}
	if(!errors)
		printf("%sOK: All tests passed for atoi.%s\n", GREEN, CLEAR);
	else
		printf("%sSUMMARY: a total of %d errors were detected in atoi.%s\n", YELLOW, errors, CLEAR);
	/*itoa*/
	printf("%sINFO: testing itoa.%s\n", GREEN, CLEAR);
	int itoa_tests[] = {0, 1, -1, 123456789, -123456789, 2147483647, -2147483648};
	char *itoa_results[12] = {"0", "1", "-1", "123456789", "-123456789", "2147483647", "-2147483648"};
	errors = 0;
	for (int i = 0; i < 7; i++)
	{
		data_t *temp;
		if(!(temp = malloc(sizeof(data_t))))
		{
			printf("%s%sERROR: Failed to allocate memorry to test itoa.%s\n", BLACK, RED_BG, CLEAR);
			errors++;
			continue;
		}
		temp->tests = &(itoa_tests[i]);
		temp->results = itoa_results[i];
		errors += test(test_itoa, temp);
		free(temp);
	}
	if(!errors)
		printf("%sOK: All tests passed for itoa.%s\n", GREEN, CLEAR);
	else
		printf("%sSUMMARY: a total of %d errors were detected in itoa.%s\n", YELLOW, errors, CLEAR);
	/*bzero*/
	printf("%sINFO: testing bzero.%s\n", GREEN, CLEAR);
	char *bzero_tests[20] = {"", "a", "abc", "123456789", "-12dsad  dsa 789", "dasddwq", "fsjhahjdsafkfsajfkd", NULL, NULL};
	int bzero_test2[] = {1, 2, 4, 5, 17, 8, 0, 0, 10};
	int bzero_test3[] = {1, 2, 4, 10, 17, 8, 20, 0, 0};
	char **bzero_test1;
	if(!(bzero_test1 = malloc(sizeof(char *) * 9)))
	{
		printf("%s%s%s %s.%s\n", BLACK, RED_BG, ERROR_MESSAGE, "bzero", CLEAR);
		goto calloc;
	}
	char **bzero_results;
	if(!(bzero_results = malloc(sizeof(char *) * 9)))
	{
		printf("%s%sERROR: Failed to allocate memorry to test bzero.%s\n", BLACK, RED_BG, CLEAR);
		goto calloc;
	}
	for (int i = 0; i < 7; i++)
	{
		if (!bzero_test3[i])
		{
			bzero_test1[i] = NULL;
			bzero_results[i] = NULL;
			continue;
		}
		bzero_test1[i] = malloc(bzero_test3[i]);
		bzero_results[i] = malloc(bzero_test3[i]);
		bzero_test1[i] = memcpy(bzero_test1[i], bzero_tests[i], bzero_test3[i]);
		bzero_results[i] = memcpy(bzero_results[i], bzero_tests[i], bzero_test3[i]);
		bzero(bzero_results[i], bzero_test2[i]);
	}
	errors = 0;
	for (int i = 0; i < 7; i++)
	{
		data_t *temp;
		if(!(temp = malloc(sizeof(data_t))))
		{
			printf("%s%sERROR: Failed to allocate memorry to test bzero.%s\n", BLACK, RED_BG, CLEAR);
			errors++;
			continue;
		}
		t_list *lst;
		if(!(lst = malloc(sizeof(t_list))))
		{
			printf("%s%sERROR: Failed to allocate memorry to test bzero.%s\n", BLACK, RED_BG, CLEAR);
			free(temp);
			errors++;
			continue;
		}
		if(!(lst->next = malloc(sizeof(t_list))))
		{
			printf("%s%sERROR: Failed to allocate memorry to test bzero.%s\n", BLACK, RED_BG, CLEAR);
			free(lst);
			free(temp);
			errors++;
			continue;
		}
		if(!(lst->next->next = malloc(sizeof(t_list))))
		{
			printf("%s%sERROR: Failed to allocate memorry to test bzero.%s\n", BLACK, RED_BG, CLEAR);
			free(lst->next);
			free(lst);
			free(temp);
			errors++;
			continue;
		}
		lst->content = bzero_test1[i];
		lst->next->content = &bzero_test2[i];
		lst->next->next->content = &bzero_test3[i];
		temp->tests = lst;
		temp->results = bzero_results[i];
		errors += test(test_bzero, temp);
		free(lst->next->next);
		free(lst->next);
		free(lst);
		free(temp);
	}
	if(!errors)
		printf("%sOK: All tests passed for bzero.%s\n", GREEN, CLEAR);
	else
		printf("%sSUMMARY: a total of %d errors were detected in bzero.%s\n", YELLOW, errors, CLEAR);
	/*calloc*/
	calloc:
	printf("%sINFO: testing calloc.%s\n", GREEN, CLEAR);
	int calloc_tests[6][2] = {{0, 0}, {0, 1}, {1, 0}, {50, 4}, {128, 256}, {-1, -1}};
	errors = 0;
	for (int i = 0; i < 6; i++)
	{
		data_t *temp;
		if(!(temp = malloc(sizeof(data_t))))
		{
			printf("%s%sERROR: Failed to allocate memorry to test calloc.%s\n", BLACK, RED_BG, CLEAR);
			errors++;
			continue;
		}
		temp->tests = calloc_tests[i];
		errors += test(test_calloc, temp);
		free(temp);
	}
	if(!errors)
		printf("%sOK: All tests passed for calloc.%s\n", GREEN, CLEAR);
	else
		printf("%sSUMMARY: a total of %d errors were detected in calloc.%s\n", YELLOW, errors, CLEAR);
}

void test_to()
{
	test_fn_t tests[] = {{test_toupper, "toupper", NULL}, {test_tolower, "tolower", NULL}};
	foreach(test_fn_t *t, tests){
		int errors = 0;
		printf("%sINFO: testing %s.%s\n", GREEN, t->name, CLEAR);
		for (int i = 0; i < 255; i++)
		{
			data_t *temp;
			if(!(temp = malloc(sizeof(data_t))))
			{
				printf("%s%sERROR: Failed to allocate memory to test %s.%s\n", BLACK, RED_BG, t->name, CLEAR);
				errors++;
				continue;
			}
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
