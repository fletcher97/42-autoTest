#include "main03.h"

int res[] = {1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,2,4,8,16,32,64,128,256,512,1,3,9,27,81,243,729,2187,6561,19683,1,4,16,64,256,1024,4096,16384,65536,262144,1,5,25,125,625,3125,15625,78125,390625,1953125,1,6,36,216,1296,7776,46656,279936,1679616,10077696,1,7,49,343,2401,16807,117649,823543,5764801,40353607,1,8,64,512,4096,32768,262144,2097152,16777216,134217728,1,9,81,729,6561,59049,531441,4782969,43046721,387420489};

int main()
{
	printf("\nTesting 03:\n\n\n");
	int err = 0;
	for(int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++)
		{
			int a = ft_recursive_power(i, j);
			if (a != res[i*10+j])
			{
				printf("Error calculating %d^%d. Expected %d but got %d.\n", i, j, res[i*10+j], a);
				err = 1;
			}
		}
	}
	if(!err)
		printf("No errors detected in range 0-9^0-9\n");
	printf("\n\nFinished testing recursive power.\n");
	return 0;
}
