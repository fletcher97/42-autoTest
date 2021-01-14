clear
echo '\nTesting norminette -R\n'
norminette -R CheckForbiddenSourceHeader ex00/ft_ft.c
norminette -R CheckForbiddenSourceHeader ex01/ft_ultimate_ft.c
norminette -R CheckForbiddenSourceHeader ex02/ft_swap.c
norminette -R CheckForbiddenSourceHeader ex03/ft_div_mod.c
norminette -R CheckForbiddenSourceHeader ex04/ft_ultimate_div_mod.c
norminette -R CheckForbiddenSourceHeader ex05/ft_putstr.c
norminette -R CheckForbiddenSourceHeader ex06/ft_strlen.c
norminette -R CheckForbiddenSourceHeader ex07/ft_rev_int_tab.c
norminette -R CheckForbiddenSourceHeader ex08/ft_sort_int_tab.c
echo '\nDone testing norminette\n'
mkdir test
gcc -Wall -Werror -Wextra ~/42-autoTest/C01/mainSrc/main00.c ex00/ft_ft.c -o test/ex00 -I ~/42-autoTest/C01/mainInc && ./test/ex00
gcc -Wall -Werror -Wextra ~/42-autoTest/C01/mainSrc/main01.c ex01/ft_ultimate_ft.c -o test/ex01 -I ~/42-autoTest/C01/mainInc && ./test/ex01
gcc -Wall -Werror -Wextra ~/42-autoTest/C01/mainSrc/main02.c ex02/ft_swap.c -o test/ex02 -I ~/42-autoTest/C01/mainInc && ./test/ex02
gcc -Wall -Werror -Wextra ~/42-autoTest/C01/mainSrc/main03.c ex03/ft_div_mod.c -o test/ex03 -I ~/42-autoTest/C01/mainInc && ./test/ex03
gcc -Wall -Werror -Wextra ~/42-autoTest/C01/mainSrc/main04.c ex04/ft_ultimate_div_mod.c -o test/ex04 -I ~/42-autoTest/C01/mainInc && ./test/ex04
gcc -Wall -Werror -Wextra ~/42-autoTest/C01/mainSrc/main05.c ex05/ft_putstr.c -o test/ex05 -I ~/42-autoTest/C01/mainInc && ./test/ex05
gcc -Wall -Werror -Wextra ~/42-autoTest/C01/mainSrc/main06.c ex06/ft_strlen.c -o test/ex06 -I ~/42-autoTest/C01/mainInc && ./test/ex06
gcc -Wall -Werror -Wextra ~/42-autoTest/C01/mainSrc/main07.c ex07/ft_rev_int_tab.c -o test/ex07 -I ~/42-autoTest/C01/mainInc && ./test/ex07
gcc -Wall -Werror -Wextra ~/42-autoTest/C01/mainSrc/main08.c ex08/ft_sort_int_tab.c -o test/ex08 -I ~/42-autoTest/C01/mainInc && ./test/ex08
echo '\nAll tests done.\n'