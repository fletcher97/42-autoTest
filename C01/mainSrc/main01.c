#include "main01.h"

int main()
{
	printf("\nTesting 01:\n\n");
	int *********nbr;
	nbr = malloc(sizeof(int*));
	*nbr = malloc(sizeof(int**));
	**nbr = malloc(sizeof(int***));
	***nbr = malloc(sizeof(int****));
	****nbr = malloc(sizeof(int*****));
	*****nbr = malloc(sizeof(int******));
	******nbr = malloc(sizeof(int*******));
	*******nbr = malloc(sizeof(int********));
	********nbr = malloc(sizeof(int*********));

	ft_ultimate_ft(nbr);
	printf("%d",*********nbr);

	free(********nbr);
	free(*******nbr);
	free(******nbr);
	free(*****nbr);
	free(****nbr);
	free(***nbr);
	free(**nbr);
	free(*nbr);
	free(nbr);
	printf("\n\nFinished testing setting val 42.\n");
	return 0;
}