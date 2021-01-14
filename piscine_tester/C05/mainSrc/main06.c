#include "main06.h"

int res[] = {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0};

int main()
{
	printf("\nTesting 06:\n\n\n");
	int err = 0;
	for (int i = 0; i < 100; i++)
	{
		int a = ft_is_prime(i);
		if(a != res[i])
		{
			printf("Error checking %d. Expected %d but got %d.\n", i, res[i], a);
			err = 1;
		}
	}
	if(!err)
		printf("No errors detected in range 0-99\n");
	printf("\n\nFinished testing is prime.\n");
}
