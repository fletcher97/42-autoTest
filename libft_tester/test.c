#include "test.h"

int test(test_f_t f, data_t *p)
{
	test_t *res =  f(p);
	if(res->code){
		printf("%sERROR: %s%s\n", RED, res->error, CLEAR);
		free(res->error);
		free(res);
		return 1;
	}
	return 0;
}
