clear
echo '\nTesting norminette -R\n'
norminette -R CheckForbiddenSourceHeader ex00/ft_strcmp.c
norminette -R CheckForbiddenSourceHeader ex01/ft_strncmp.c
norminette -R CheckForbiddenSourceHeader ex02/ft_strcat.c
norminette -R CheckForbiddenSourceHeader ex03/ft_strncat.c
norminette -R CheckForbiddenSourceHeader ex04/ft_strstr.c
norminette -R CheckForbiddenSourceHeader ex05/ft_strlcat.c
echo '\nDone testing norminette\n'
mkdir test
gcc -Wall -Werror -Wextra ~/42-autoTest/C03/mainSrc/main00.c ex00/ft_strcmp.c -o test/ex00 -I ~/42-autoTest/C03/mainInc && ./test/ex00
gcc -Wall -Werror -Wextra ~/42-autoTest/C03/mainSrc/main01.c ex01/ft_strncmp.c -o test/ex01 -I ~/42-autoTest/C03/mainInc && ./test/ex01
gcc -Wall -Werror -Wextra ~/42-autoTest/C03/mainSrc/main02.c ex02/ft_strcat.c -o test/ex02 -I ~/42-autoTest/C03/mainInc && ./test/ex02
gcc -Wall -Werror -Wextra ~/42-autoTest/C03/mainSrc/main03.c ex03/ft_strncat.c -o test/ex03 -I ~/42-autoTest/C03/mainInc && ./test/ex03
gcc -Wall -Werror -Wextra ~/42-autoTest/C03/mainSrc/main04.c ex04/ft_strstr.c -o test/ex04 -I ~/42-autoTest/C03/mainInc && ./test/ex04
gcc -Wall -Werror -Wextra ~/42-autoTest/C03/mainSrc/main05.c ex05/ft_strlcat.c -o test/ex05 -I ~/42-autoTest/C03/mainInc && ./test/ex05
echo '\nAll tests done.\n'