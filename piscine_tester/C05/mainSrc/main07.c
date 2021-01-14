#include "main07.h"

int res[] = {2,2,2,3,5,5,7,7,11,11,11,11,13,13,17,17,17,17,19,19,23,23,23,23,29,29,29,29,29,29,31,31,37,37,37,37,37,37,41,41,41,41,43,43,47,47,47,47,53,53,53,53,53,53,59,59,59,59,59,59,61,61,67,67,67,67,67,67,71,71,71,71,73,73,79,79,79,79,79,79,83,83,83,83,89,89,89,89,89,89,97,97,97,97,97,97,97,97,101,101};

int main()
{
	printf("\nTesting 06:\n\n\n");
	int err = 0;
	for (int i = 0; i < 100; i++)
	{
		int a = ft_find_next_prime(i);
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
