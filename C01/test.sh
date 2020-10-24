echo 'testing norminette'
norminette ex00/ft_ft.c
norminette ex01/ft_ultimate_ft.c
norminette ex02/ft_swap.c
norminette ex03/ft_div_mod.c
norminette ex04/ft_ultimate_div_mod.c
norminette ex05/ft_putstr.c
norminette ex06/ft_strlen.c
norminette ex07/ft_rev_int_tab.c
norminette ex08/ft_sort_int_tab.c
echo 'testing norminette -R'
norminette -R CheckForbiddenSourceHeader ex00/ft_ft.c
norminette -R CheckForbiddenSourceHeader ex01/ft_ultimate_ft.c
norminette -R CheckForbiddenSourceHeader ex02/ft_swap.c
norminette -R CheckForbiddenSourceHeader ex03/ft_div_mod.c
norminette -R CheckForbiddenSourceHeader ex04/ft_ultimate_div_mod.c
norminette -R CheckForbiddenSourceHeader ex05/ft_putstr.c
norminette -R CheckForbiddenSourceHeader ex06/ft_strlen.c
norminette -R CheckForbiddenSourceHeader ex07/ft_rev_int_tab.c
norminette -R CheckForbiddenSourceHeader ex08/ft_sort_int_tab.c
echo 'done testing norminette'
gcc -Wall -Werror -Wextra ~/Documents/piscine/autoTest/C01/main.c ex00/ft_ft.c ex01/ft_ultimate_ft.c ex02/ft_swap.c ex03/ft_div_mod.c ex04/ft_ultimate_div_mod.c ex05/ft_putstr.c ex06/ft_strlen.c ex07/ft_rev_int_tab.c ex08/ft_sort_int_tab.c -o autoTest -I ~/Documents/piscine/autoTest/c00/main.h && ./autoTest