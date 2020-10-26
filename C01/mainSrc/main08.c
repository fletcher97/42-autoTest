#include "main08.h"

int main()
{
	printf("\nTesting 08:\n\n");
	int arr[10] = {3, 2, 6, 5, 9, 0, 8, 1, 4, 7};
	ft_sort_int_tab(arr, 10);
	for(int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	printf("\n\nFinished testing sorting.\n");
	return 0;
}