#include "main00.h"

int res[] = {1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,1932053504,1278945280,2004310016,2004189184,-288522240,-898433024,109641728,-2102132736,-1195114496,-522715136,862453760,-775946240};

int main()
{
	printf("\nTesting 00:\n\n\n");
	int err = 0;
	for(int i = 0; i < 25; i++){
		int a = ft_iterative_factorial(i);
		if (a != res[i])
		{
			printf("Error calculating factorial of %d.\n\tExpected %d but got %d.\n", i, res[i], a);
			err = 1;
		}
	}
	if(!err)
		printf("No errors detected in range 0-24\n");
	printf("\n\nFinished testing iterative factorial.\n");
	return 0;
}
