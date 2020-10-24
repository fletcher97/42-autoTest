#include <stdio.h>
#include <stdlib.h>

#include "main.h"

void ex00()
{
	printf("\nTesting 00:\n\n");
	int *i;
	i = malloc(sizeof(int *));

	ft_ft(i);
	printf("%d", *i);

	free(i);
	printf("\n\nFinished testing setting val 42\n");
}


void ex01()
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

	ft_utltimate_ft(nbr);
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
}

void ex02()
{
	printf("\nTesting 02:\n\n");
	int *a;
	int *b;

	a = malloc(sizeof(int*));
	b = malloc(sizeof(int*));

	*a = 42;
	*b = 24;

	printf("%d %d\n", *a, *b);
	ft_swap(a, b);
	printf("%d %d", *a, *b);

	free(b);
	free(a);
	printf("\n\nFinished testing swap.\n");
}

void ex03()
{
	printf("\nTesting 03:\n\n");
	int *div, *mod;

	div = malloc(sizeof(int *));
	mod = malloc(sizeof(int *));

	ft_div_mod(429, 10, div, mod);
	printf("%d %d", *div, *mod);

	free(mod);
	free(div);
	printf("\n\nFinished testing div and mod. Expected 42 9\n");
}

void ex04()
{
	printf("\nTesting 04:\n\n");
	int *a, *b;

	a = malloc(sizeof(int *));
	b = malloc(sizeof(int *));

	*a = 429;
	*b = 10;

	ft_ultimate_div_mod(a, b);
	printf("%d %d", *a, *b);

	free(b);
	free(a);
	printf("\n\nFinished testing div and mod. expected 42 9\n");
}

void ex05()
{
	printf("\nTesting 05:\n\n");
	char* str = "abc 123 >.<";
	ft_putstr(str);
	printf("\n\nFinished testing string printing. expected \"abc 123 >.<\"\n");
}

void ex06()
{
	printf("\nTesting 06:\n\n");
	printf("%d", ft_strlen("123"));
	printf("\n\nFinished testing string length calculation. Expected 4\n");
}

void ex07()
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
}

void ex08()
{
	printf("\nTesting 08:\n\n");
	int arr[10] = {3, 2, 6, 5, 9, 0, 8, 1, 4, 7};
	ft_sort_int_tab(arr, 10);
	for(int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	printf("\n\nFinished testing sorting.\n\n");
}

int main()
{
	ex00();
	ex01();
	ex02();
	ex03();
	ex04();
	ex05();
	ex06();
	ex07();
	ex08();
	return 0;
}
