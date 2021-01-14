clear
echo '\nTesting norminette -R\n'
norminette -R CheckForbiddenSourceHeader ex00/ft_iterative_factorial.c
norminette -R CheckForbiddenSourceHeader ex01/ft_recursive_factorial.c
norminette -R CheckForbiddenSourceHeader ex02/ft_iterative_power.c
norminette -R CheckForbiddenSourceHeader ex03/ft_recursive_power.c
norminette -R CheckForbiddenSourceHeader ex04/ft_fibonacci.c
norminette -R CheckForbiddenSourceHeader ex05/ft_sqrt.c
norminette -R CheckForbiddenSourceHeader ex06/ft_is_prime.c
norminette -R CheckForbiddenSourceHeader ex07/ft_find_next_prime.c
norminette -R CheckForbiddenSourceHeader ex08/ft_ten_queens_puzzle.c
echo '\nDone testing norminette\n'
mkdir test
gcc -Wall -Werror -Wextra ~/42-autoTest/piscine_tester/C05/mainSrc/main00.c ex00/*.c -o test/ex00 -I ~/42-autoTest/piscine_tester/C05/mainInc && ./test/ex00
gcc -Wall -Werror -Wextra ~/42-autoTest/piscine_tester/C05/mainSrc/main01.c ex01/*.c -o test/ex01 -I ~/42-autoTest/piscine_tester/C05/mainInc && ./test/ex01
gcc -Wall -Werror -Wextra ~/42-autoTest/piscine_tester/C05/mainSrc/main02.c ex02/*.c -o test/ex02 -I ~/42-autoTest/piscine_tester/C05/mainInc && ./test/ex02
gcc -Wall -Werror -Wextra ~/42-autoTest/piscine_tester/C05/mainSrc/main03.c ex03/*.c -o test/ex03 -I ~/42-autoTest/piscine_tester/C05/mainInc && ./test/ex03
gcc -Wall -Werror -Wextra ~/42-autoTest/piscine_tester/C05/mainSrc/main04.c ex04/*.c -o test/ex04 -I ~/42-autoTest/piscine_tester/C05/mainInc && ./test/ex04
gcc -Wall -Werror -Wextra ~/42-autoTest/piscine_tester/C05/mainSrc/main05.c ex05/*.c -o test/ex05 -I ~/42-autoTest/piscine_tester/C05/mainInc && ./test/ex05
gcc -Wall -Werror -Wextra ~/42-autoTest/piscine_tester/C05/mainSrc/main06.c ex06/*.c -o test/ex06 -I ~/42-autoTest/piscine_tester/C05/mainInc && ./test/ex06
gcc -Wall -Werror -Wextra ~/42-autoTest/piscine_tester/C05/mainSrc/main07.c ex07/*.c -o test/ex07 -I ~/42-autoTest/piscine_tester/C05/mainInc && ./test/ex07
gcc -Wall -Werror -Wextra ~/42-autoTest/piscine_tester/C05/mainSrc/main08.c ex08/*.c -o test/ex08 -I ~/42-autoTest/piscine_tester/C05/mainInc && ./test/ex08 > test/queens && diff test/queens ~/42-autoTest/piscine_tester/C05/queens
echo '\nAll tests done.\n'
