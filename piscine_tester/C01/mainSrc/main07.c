#include "main07.h"

int main()
{
	printf("\nTesting 07:\n\n");
	int arr1[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int arr2[12] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	ft_rev_int_tab(arr1, 9);
	ft_rev_int_tab(arr2, 12);

	for(int i = 0; i < 9; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for(int i = 0; i < 12; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n\nFinished testing reversing order. Expected first reversed and second in order.\n");
	return 0;
}