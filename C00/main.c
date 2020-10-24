#include <stdio.h>

#include "main.h"

void	test00(){
	printf("\nTesting 00:\n\n");
	ft_putchar('a');
	ft_putchar('\n');
	ft_putchar(':');
	ft_putchar('\n');
	ft_putchar('!');
	ft_putchar('\n');
	ft_putchar('2');
	printf("\n\nFinished testing with chars \"a\", \":\", \"!\" and \"2\".\n");
}

void	test01(){
	printf("\nTesting 01:\n\n");
	ft_print_alphabet();
	printf("\n\nFinished testing print the alphabet.\n");
}

void	test02()
{
	printf("\nTesting 02:\n\n");
	ft_print_reverse_alphabet();
	printf("\n\nFinished testing print the alphabet reversed.\n");
}

void	test03()
{
	printf("\nTesting 03:\n\n");
	ft_print_numbers();
	printf("\n\nFinished testing printing all digits.\n");
}

void	test04()
{
	printf("\nTesting 04:\n\n");
	ft_is_negative(42);
	printf("\n");
	ft_is_negative(123456789);
	printf("\n");
	ft_is_negative(-42);
	printf("\n");
	ft_is_negative(-123456789);
	printf("\n");
	ft_is_negative(0);
	printf("\n\nFinished testing sign. Expected P,P,N,N,P\n");
}

void	test05()
{
	printf("\nTesting 05:\n\n");
	ft_print_comb();
	printf("\n\nFinished testing combinations.\n");
}

void	test06()
{
	printf("\nTesting 06:\n\n");
	ft_print_comb2();
	printf("\n\nFinished testing combinations 2.\n");
}

void	test07()
{
	printf("\nTesting 07:\n\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(123);
	printf("\n");
	ft_putnbr(123456789);
	printf("\n");
	ft_putnbr(-123456789);
	printf("\n");
	ft_putnbr(-159753);
	printf("\n\nFinished testing printing numbers.\n");
}

void	test08()
{
	printf("\nTesting 08:\n\n");
	ft_print_combn(1);
	printf("\n");
	ft_print_combn(2);
	printf("\n");
	ft_print_combn(3);
	printf("\n");
	ft_print_combn(4);
	printf("\n");
	ft_print_combn(5);
	printf("\n");
	ft_print_combn(6);
	printf("\n");
	ft_print_combn(7);
	printf("\n");
	ft_print_combn(8);
	printf("\n");
	ft_print_combn(9);
	printf("\n\nFinished testing print combinations of n digits.\n\n");
}

int main()
{
	test00();
	test01();
	test02();
	test03();
	test04();
	test05();
	test06();
	test07();
	test08();
	return 0;
}
