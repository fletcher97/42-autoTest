#include "test.h"
#include "e4c.h"

int test(test_f_t f, data_t *p)
{
	test_t *res = NULL;
	int sig = 0;
	e4c_context_begin(E4C_TRUE);
	try
	{
		res = f(p);
	}
	catch(RuntimeException)
	{
		const e4c_exception *e = e4c_get_exception();
		printf("%s%sERROR: %s%s\n", BLACK, RED_BG, e->message, CLEAR);
		sig = 1;
	}
	e4c_context_end();
	if(sig){
		return 1;
	}else if(!res){
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
		return 1;
	}
	return 0;
}
