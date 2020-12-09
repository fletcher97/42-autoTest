#include "is_tester.h"
#include "to_tester.h"
#include "str_tester.h"
#include "test.h"
#include "libft.h"

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

void test_str()
{
	/*strlen*/
	printf("%sINFO: testing strlen.%s\n", GREEN, CLEAR);
	char *strlen_tests[145] = {"a", "\r", "hello", "", "hello this is a test", "testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest"};
	int errors = 0;
	for (int i = 0; i < 8; i++)
	{
		data_t *temp;
		if(!(temp = malloc(sizeof(data_t)))){
			printf("%s%sERROR: Failed to allocate memory to test strlen.%s\n", BLACK, RED_BG, CLEAR);
				errors++;
				continue;
		}
		temp->tests = strlen_tests[i];
		errors += test(test_strlen, temp);
		free(temp);
	}
	if(!errors)
		printf("%sOK: All tests passed for strlen.%s\n", GREEN, CLEAR);
	else
		printf("%sINFO: a total of %d errors were detected in strlen.%s\n", GREEN, errors, CLEAR);
	/*strlcpy*/
	printf("%sINFO: testing strlcpy.%s\n", GREEN, CLEAR);
	char strlcpy_tests[8][2][21] = {{"abc","bca"}, {"\n","\r"}, {"hello","hella"}, {"",""}, {"hello this is a test","hello thi\n is a test"}, {"tests","tests"}, {"there is a test here",""}, {"\x82\x81\xa3","\x02\x01\x23"}};
	int strlcpy_tests_num[8] = {4, 2, 5, 2, 12, 6, 0, 4};
	errors = 0;
	for (int i = 0; i < 8; i++)
	{
		data_t *temp;
		if(!(temp = malloc(sizeof(data_t)))){
			printf("%s%sERROR: Failed to allocate memory to test strlcpy.%s\n", BLACK, RED_BG, CLEAR);
			errors++;
			continue;
		}
		t_list *temp1;
		if(!(temp1 = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strlcpy.%s\n", BLACK, RED_BG, CLEAR);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strlcpy.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->next->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strlcpy.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1->content);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->next->next->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strlcpy.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1->next->content);
			free(temp1->content);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		temp1->content = strlcpy_tests[i][1];
		temp1->next->content = strlcpy_tests[i][2];
		temp1->next->next->content = &(strlcpy_tests_num[i]);
		temp->tests = temp1;
		errors += test(test_strlcpy, temp);
		free(temp1->next->next->content);
		free(temp1->next->content);
		free(temp1->content);
		free(temp1);
		free(temp);
	}
	/*strlcat*/
	printf("%sINFO: testing strlcat.%s\n", GREEN, CLEAR);
	char strlcat_tests[8][2][21] = {{"abc","bca"}, {"\n","\r"}, {"hello","hella"}, {"",""}, {"hello this is a test","hello thi\n is a test"}, {"tests","tests"}, {"there is a test here",""}, {"\x82\x81\xa3","\x02\x01\x23"}};
	int strlcat_tests_num[8] = {4, 2, 5, 2, 12, 6, 0, 4};
	errors = 0;
	for (int i = 0; i < 8; i++)
	{
		data_t *temp;
		if(!(temp = malloc(sizeof(data_t)))){
			printf("%s%sERROR: Failed to allocate memory to test strlcat.%s\n", BLACK, RED_BG, CLEAR);
			errors++;
			continue;
		}
		t_list *temp1;
		if(!(temp1 = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strlcat.%s\n", BLACK, RED_BG, CLEAR);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strlcat.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->next->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strlcat.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1->content);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->next->next->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strlcat.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1->next->content);
			free(temp1->content);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		temp1->content = strlcat_tests[i][1];
		temp1->next->content = strlcat_tests[i][2];
		temp1->next->next->content = &(strlcat_tests_num[i]);
		temp->tests = temp1;
		errors += test(test_strlcat, temp);
		free(temp1->next->next->content);
		free(temp1->next->content);
		free(temp1->content);
		free(temp1);
		free(temp);
	}
	/*strchr*/
	printf("%sINFO: testing strchr.%s\n", GREEN, CLEAR);
	char strchr_tests[8][21] = {"a", "\r", "hella", "", "hello thi\n is a", "tests", "bcd", "\x82\x81\xa3"};
	char strchr_tests_chr[8] = {"a", "\r", "4", "a", "", "t", "z", "\x81"};
	errors = 0;
	for (int i = 0; i < 8; i++)
	{
		data_t *temp;
		if(!(temp = malloc(sizeof(data_t)))){
			printf("%s%sERROR: Failed to allocate memory to test strchr.%s\n", BLACK, RED_BG, CLEAR);
			errors++;
			continue;
		}
		t_list *temp1;
		if(!(temp1 = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strchr.%s\n", BLACK, RED_BG, CLEAR);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strchr.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->next->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strchr.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1->content);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		temp1->content = strchr_tests[i];
		temp1->next->content = strchr_tests_chr[i];
		temp->tests = temp1;
		errors += test(test_strchr, temp);
		free(temp1->next->content);
		free(temp1->content);
		free(temp1);
		free(temp);
	}
	if(!errors)
		printf("%sOK: All tests passed for strlen.%s\n", GREEN, CLEAR);
	else
		printf("%sINFO: a total of %d errors were detected in strlen.%s\n", GREEN, errors, CLEAR);
	/*strrchr*/
	printf("%sINFO: testing strrchr.%s\n", GREEN, CLEAR);
	char strrchr_tests[8][21] = {"a", "\r", "hella", "", "hello thi\n is a", "tests", "bcd", "\x82\x81\xa3"};
	char strrchr_tests_chr[8] = {"a", "\r", "4", "a", "", "t", "z", "\x81"};
	errors = 0;
	for (int i = 0; i < 8; i++)
	{
		data_t *temp;
		if(!(temp = malloc(sizeof(data_t)))){
			printf("%s%sERROR: Failed to allocate memory to test strrchr.%s\n", BLACK, RED_BG, CLEAR);
			errors++;
			continue;
		}
		t_list *temp1;
		if(!(temp1 = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strrchr.%s\n", BLACK, RED_BG, CLEAR);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strrchr.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->next->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strrchr.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1->content);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		temp1->content = strrchr_tests[i];
		temp1->next->content = strrchr_tests_chr[i];
		temp->tests = temp1;
		errors += test(test_strrchr, temp);
		free(temp1->next->content);
		free(temp1->content);
		free(temp1);
		free(temp);
	/*strnstr*/
	printf("%sINFO: testing strnstr.%s\n", GREEN, CLEAR);
	char strnstr_tests[8][2][21] = {{"testing program","m"}, {"\ravs","\r"}, {"hello","ll"}, {"",""}, {"hello this is a test","thi\n"}, {"tests","t"}, {"abc","d"}, {"\x82\x81\xa3","\x02\x01\x23"}, {"\x82\x81\xa3","\x82"}};
	int strnstr_tests_num[8] = {15, 1, 4, 2, 12, 6, 0, 3};
	errors = 0;
	for (int i = 0; i < 8; i++)
	{
		data_t *temp;
		if(!(temp = malloc(sizeof(data_t)))){
			printf("%s%sERROR: Failed to allocate memory to test strnstr.%s\n", BLACK, RED_BG, CLEAR);
			errors++;
			continue;
		}
		t_list *temp1;
		if(!(temp1 = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strnstr.%s\n", BLACK, RED_BG, CLEAR);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strnstr.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->next->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strnstr.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1->content);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->next->next->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strnstr.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1->next->content);
			free(temp1->content);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		temp1->content = strnstr_tests[i][1];
		temp1->next->content = strnstr_tests[i][2];
		temp1->next->next->content = &(strnstr_tests_num[i]);
		temp->tests = temp1;
		errors += test(test_strnstr, temp);
		free(temp1->next->next->content);
		free(temp1->next->content);
		free(temp1->content);
		free(temp1);
		free(temp);
	}
	/*strncmp*/
	printf("%sINFO: testing strncmp.%s\n", GREEN, CLEAR);
	char strncmp_tests[8][2][21] = {{"a","b"}, {"\r","\r"}, {"hello","hella"}, {"",""}, {"hello this is a test","hello thi\n is a"}, {"tests","tests"}, {"abc","bcd"}, {"\x82\x81\xa3","\x02\x01\x23"}};
	int strncmp_tests_num[8] = {5, 1, 4, 2, 12, 6, 0, 3};
	errors = 0;
	for (int i = 0; i < 8; i++)
	{
		data_t *temp;
		if(!(temp = malloc(sizeof(data_t)))){
			printf("%s%sERROR: Failed to allocate memory to test strncmp.%s\n", BLACK, RED_BG, CLEAR);
			errors++;
			continue;
		}
		t_list *temp1;
		if(!(temp1 = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strncmp.%s\n", BLACK, RED_BG, CLEAR);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strncmp.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->next->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strncmp.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1->content);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->next->next->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strncmp.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1->next->content);
			free(temp1->content);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		temp1->content = strncmp_tests[i][1];
		temp1->next->content = strncmp_tests[i][2];
		temp1->next->next->content = &(strncmp_tests_num[i]);
		temp->tests = temp1;
		errors += test(test_strncmp, temp);
		free(temp1->next->next->content);
		free(temp1->next->content);
		free(temp1->content);
		free(temp1);
		free(temp);
	}
	if(!errors)
		printf("%sOK: All tests passed for strlen.%s\n", GREEN, CLEAR);
	else
		printf("%sINFO: a total of %d errors were detected in strlen.%s\n", GREEN, errors, CLEAR);
	/*strjoin*/
	printf("%sINFO: testing strjoin.%s\n", GREEN, CLEAR);
	char strjoin_tests[8][2][21] = {{"abc","bca","abcbca"}, {"\n","\r","\n\r"}, {"hello","hella","hellohella"}, {"","",""}, {"hello this is a test","hello thi\n is a test","hello this is a testhello thi\n is a test"}, {"tests","tests","tests"}, {"there is a test here","","there is a test here"}, {"\x82\x81\xa3","\x02\x01\x23","\x82\x81\xa3\x02\x01\x23"}};
	errors = 0;
	for (int i = 0; i < 8; i++)
	{
		data_t *temp;
		if(!(temp = malloc(sizeof(data_t)))){
			printf("%s%sERROR: Failed to allocate memory to test strjoin.%s\n", BLACK, RED_BG, CLEAR);
			errors++;
			continue;
		}
		t_list *temp1;
		if(!(temp1 = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strjoin.%s\n", BLACK, RED_BG, CLEAR);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strjoin.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->next->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strjoin.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1->content);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		if(!(temp1->next->next->content = malloc(sizeof(t_list)))){
			printf("%s%sERROR: Failed to allocate memory to test strjoin.%s\n", BLACK, RED_BG, CLEAR);
			free(temp1->next->content);
			free(temp1->content);
			free(temp1);
			free(temp);
			errors++;
			continue;
		}
		temp1->content = strjoin_tests[i][1];
		temp1->next->content = strjoin_tests[i][2];
		temp1->next->next->content = strjoin_tests[i][3];
		temp->tests = temp1;
		errors += test(test_strjoin, temp);
		free(temp1->next->next->content);
		free(temp1->next->content);
		free(temp1->content);
		free(temp1);
		free(temp);
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
