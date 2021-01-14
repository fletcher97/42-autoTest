clear
echo '\nTesting norminette -R\n'
norminette -R CheckForbiddenSourceHeader ex00/ft_strcpy.c
norminette -R CheckForbiddenSourceHeader ex01/ft_strncpy.c
norminette -R CheckForbiddenSourceHeader ex02/ft_str_is_alpha.c
norminette -R CheckForbiddenSourceHeader ex03/ft_str_is_numeric.c
norminette -R CheckForbiddenSourceHeader ex04/ft_str_is_lowercase.c
norminette -R CheckForbiddenSourceHeader ex05/ft_str_is_uppercase.c
norminette -R CheckForbiddenSourceHeader ex06/ft_str_is_printable.c
norminette -R CheckForbiddenSourceHeader ex07/ft_strupcase.c
norminette -R CheckForbiddenSourceHeader ex08/ft_strlowcase.c
norminette -R CheckForbiddenSourceHeader ex09/ft_strcapitalize.c
norminette -R CheckForbiddenSourceHeader ex10/ft_strlcpy.c
norminette -R CheckForbiddenSourceHeader ex11/ft_putstr_non_printable.c
norminette -R CheckForbiddenSourceHeader ex12/ft_print_memory.c
echo '\nDone testing norminette\n'
mkdir test
gcc -Wall -Werror -Wextra ~/42-autoTest/C02/mainSrc/main00.c ex00/ft_strcpy.c -o test/ex00 -I ~/42-autoTest/C02/mainInc && ./test/ex00
gcc -Wall -Werror -Wextra ~/42-autoTest/C02/mainSrc/main01.c ex01/ft_strncpy.c -o test/ex01 -I ~/42-autoTest/C02/mainInc && ./test/ex01
gcc -Wall -Werror -Wextra ~/42-autoTest/C02/mainSrc/main02.c ex02/ft_str_is_alpha.c -o test/ex02 -I ~/42-autoTest/C02/mainInc && ./test/ex02
gcc -Wall -Werror -Wextra ~/42-autoTest/C02/mainSrc/main03.c ex03/ft_str_is_numeric.c -o test/ex03 -I ~/42-autoTest/C02/mainInc && ./test/ex03
gcc -Wall -Werror -Wextra ~/42-autoTest/C02/mainSrc/main04.c ex04/ft_str_is_lowercase.c -o test/ex04 -I ~/42-autoTest/C02/mainInc && ./test/ex04
gcc -Wall -Werror -Wextra ~/42-autoTest/C02/mainSrc/main05.c ex05/ft_str_is_uppercase.c -o test/ex05 -I ~/42-autoTest/C02/mainInc && ./test/ex05
gcc -Wall -Werror -Wextra ~/42-autoTest/C02/mainSrc/main06.c ex06/ft_str_is_printable.c -o test/ex06 -I ~/42-autoTest/C02/mainInc && ./test/ex06
gcc -Wall -Werror -Wextra ~/42-autoTest/C02/mainSrc/main07.c ex07/ft_strupcase.c -o test/ex07 -I ~/42-autoTest/C02/mainInc && ./test/ex07
gcc -Wall -Werror -Wextra ~/42-autoTest/C02/mainSrc/main08.c ex08/ft_strlowcase.c -o test/ex08 -I ~/42-autoTest/C02/mainInc && ./test/ex08
gcc -Wall -Werror -Wextra ~/42-autoTest/C02/mainSrc/main09.c ex09/ft_strcapitalize.c -o test/ex09 -I ~/42-autoTest/C02/mainInc && ./test/ex09
gcc -Wall -Werror -Wextra ~/42-autoTest/C02/mainSrc/main10.c ex10/ft_strlcpy.c -o test/ex10 -I ~/42-autoTest/C02/mainInc && ./test/ex10
gcc -Wall -Werror -Wextra ~/42-autoTest/C02/mainSrc/main11.c ex11/ft_putstr_non_printable.c -o test/ex11 -I ~/42-autoTest/C02/mainInc && ./test/ex11
gcc -Wall -Werror -Wextra ~/42-autoTest/C02/mainSrc/main12.c ex12/ft_print_memory.c -o test/ex12 -I ~/42-autoTest/C02/mainInc && ./test/ex12
echo '\nAll tests done.\n'