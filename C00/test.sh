echo 'testing norminette'
norminette ex00/ft_putchar.c
norminette ex01/ft_print_alphabet.c
norminette ex02/ft_print_reverse_alphabet.c
norminette ex03/ft_print_numbers.c
norminette ex04/ft_is_negative.c
norminette ex05/ft_print_comb.c
norminette ex06/ft_print_comb2.c
norminette ex07/ft_putnbr.c
norminette ex08/ft_print_combn.c
echo 'testing norminette -R'
norminette -R CheckForbiddenSourceHeader ex00/ft_putchar.c
norminette -R CheckForbiddenSourceHeader ex01/ft_print_alphabet.c
norminette -R CheckForbiddenSourceHeader ex02/ft_print_reverse_alphabet.c
norminette -R CheckForbiddenSourceHeader ex03/ft_print_numbers.c
norminette -R CheckForbiddenSourceHeader ex04/ft_is_negative.c
norminette -R CheckForbiddenSourceHeader ex05/ft_print_comb.c
norminette -R CheckForbiddenSourceHeader ex06/ft_print_comb2.c
norminette -R CheckForbiddenSourceHeader ex07/ft_putnbr.c
norminette -R CheckForbiddenSourceHeader ex08/ft_print_combn.c
echo 'done testing norminette'
gcc -Wall -Werror -Wextra ~/Documents/piscine/autoTest/C00/main.c ex00/ft_putchar.c ex01/ft_print_alphabet.c ex02/ft_print_reverse_alphabet.c ex03/ft_print_numbers.c ex04/ft_is_negative.c ex05/ft_print_comb.c ex06/ft_print_comb2.c ex07/ft_putnbr.c ex08/ft_print_combn.c -o autoTest -I ~/Documents/piscine/autoTest/c00/main.h && ./autoTest
