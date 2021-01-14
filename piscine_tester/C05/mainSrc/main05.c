#include "main05.h"

int res[] = {0,1,0,0,2,0,0,0,0,3,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

int main()
{
	printf("\nTesting 05:\n\n\n");
	int err = 0;
	for (int i = 0; i < 100; i++)
	{
		int a = ft_sqrt(i);
		if(a != res[i])
		{
			printf("Error calculating sqrt of %d. Expected %d but got %d.\n", i, res[i], a);
			err = 1;
		}
	}
	if(!err)
		printf("No errors detected in range 0-99\n");
	printf("\n\nFinished testing sqrt.\n");
}
