clear
echo '\nTesting norminette -R\n'
norminette -R CheckForbiddenSourceHeader ex00/ft_putchar.c
norminette -R CheckForbiddenSourceHeader ex01/ft_print_alphabet.c
norminette -R CheckForbiddenSourceHeader ex02/ft_print_reverse_alphabet.c
norminette -R CheckForbiddenSourceHeader ex03/ft_print_numbers.c
norminette -R CheckForbiddenSourceHeader ex04/ft_is_negative.c
norminette -R CheckForbiddenSourceHeader ex05/ft_print_comb.c
norminette -R CheckForbiddenSourceHeader ex06/ft_print_comb2.c
norminette -R CheckForbiddenSourceHeader ex07/ft_putnbr.c
norminette -R CheckForbiddenSourceHeader ex08/ft_print_combn.c
echo '\nDone testing norminette\n'
mkdir test
gcc -Wall -Werror -Wextra ~/42-autoTest/C00/mainSrc/main00.c ex00/ft_putchar.c -o test/ex00 -I ~/42-autoTest/c00/mainInc && ./test/ex00
gcc -Wall -Werror -Wextra ~/42-autoTest/C00/mainSrc/main01.c ex01/ft_print_alphabet.c -o test/ex01 -I ~/42-autoTest/c00/mainInc && ./test/ex01
gcc -Wall -Werror -Wextra ~/42-autoTest/C00/mainSrc/main02.c ex02/ft_print_reverse_alphabet.c -o test/ex02 -I ~/42-autoTest/c00/mainInc && ./test/ex02
gcc -Wall -Werror -Wextra ~/42-autoTest/C00/mainSrc/main03.c ex03/ft_print_numbers.c -o test/ex03 -I ~/42-autoTest/c00/mainInc && ./test/ex03
gcc -Wall -Werror -Wextra ~/42-autoTest/C00/mainSrc/main04.c ex04/ft_is_negative.c -o test/ex04 -I ~/42-autoTest/c00/mainInc && ./test/ex04
gcc -Wall -Werror -Wextra ~/42-autoTest/C00/mainSrc/main05.c ex05/ft_print_comb.c -o test/ex05 -I ~/42-autoTest/c00/mainInc && ./test/ex05
gcc -Wall -Werror -Wextra ~/42-autoTest/C00/mainSrc/main06.c ex06/ft_print_comb2.c -o test/ex06 -I ~/42-autoTest/c00/mainInc && ./test/ex06
gcc -Wall -Werror -Wextra ~/42-autoTest/C00/mainSrc/main07.c ex07/ft_putnbr.c -o test/ex07 -I ~/42-autoTest/c00/mainInc && ./test/ex07
gcc -Wall -Werror -Wextra ~/42-autoTest/C00/mainSrc/main08.c ex08/ft_print_combn.c -o test/ex08 -I ~/42-autoTest/c00/mainInc && ./test/ex08
echo '\nAll tests done.\n'
