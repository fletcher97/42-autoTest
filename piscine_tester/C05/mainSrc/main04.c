#include "main04.h"

int res[] = {0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368};

int main()
{
	printf("\nTesting 04:\n\n\n");
	int err = 0;
	for (int i = 0; i < 25; i++)
	{
		int a = ft_fibonacci(i);
		if (a != res[i])
		{
			printf("Error calculating fibonacci for %d. Expected %d but got %d.\n", i, res[i], a);
			err = 1;
		}
	}
	if(!err)
		printf("No errors detected in range 0-24\n");
	printf("\n\nFinished testing fibonacci.\n");
	return 0;
}
