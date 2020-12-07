#include "test.h"

int test(test_f_t f, data_t *p)
{
	test_t *res =  f(p);
	if(!res){
		printf("%s%sERROR: test could not be performed.%s\n", BLACK, RED_BG, CLEAR);
		return 1;
	}else if(res->code == 1){
		printf("%sERROR: %s%s\n", RED, res->error, CLEAR);
		free(res->error);
		free(res);
		return 1;
	}else if(res->code == 2){
		printf("%sWARNING: %s%s\n", YELLOW, res->error, CLEAR);
		free(res->error);
		free(res);
	}
	return 0;
}
