#!/bin/bash

norm=~/.norminette/norminette.rb

c_reset='\u001b[0m'
fg_red='\u001b[31m'
fg_green='\u001b[32m'
fg_yellow='\u001b[33m'

Mandatory_file=('atoi' 'bzero' 'calloc' 'isalnum' 'isalpha' 'isascii' 'isdigit'
'isprint' 'itoa' 'lstadd_back' 'lstadd_front' 'lstclear' 'lstdelone' 'lstiter'
'lstlast' 'lstmap' 'lstnew' 'lstsize' 'memccpy' 'memchr' 'memcmp' 'memcpy'
'memmove' 'memset' 'putchar_fd' 'putendl_fd' 'putnbr_fd' 'putstr_fd' 'split'
'strchr' 'strcpy_bonus' 'strdup' 'strjoin' 'strjoin_m_bonus' 'strlcat'
'strlcpy' 'strlen' 'strmapi' 'strncmp' 'strnstr' 'strrchr' 'strtrim'
'strwcnt_bonus' 'substr' 'tolower' 'toupper')

path=$1

error() {
	echo -e "${fg_red}ERROR: $1${c_reset}"
	return 1
}

ok() {
	echo -e "${fg_green}OK: $1${c_reset}"
	return 0
}

test_norm() {
	out=$(${norm} ${path}/*.[ch] | grep --no-group-separator -B1 ^"Error")
	if [ $(echo "${out}" | wc -l) != 1 ] ; then
		echo -e "${fg_red}${out}${c_reset}"
		error "Norminette failed."
		return 1
	fi
	ok "Norminette passed"
	return 0
}

test_mandatory_exist() {
	count=0;
	for i in "${Mandatory_file[@]}"; do
		if [[ ! -f "${path}/ft_$i.c" ]]; then
			count=$((count + 1))
			error "Missing file ft_$i.c"
		fi
	done
	if [[ $count == 0 ]]; then
		ok "All mandatory files found"
		return $?
	fi
	error "There are $count files missing."
	return $?
}

test_mandatory_make() {
	make fclean -C $path > /dev/null
	make -C $path
	make clean -C $path > /dev/null
	if [[ ! -f "${path}/libft.a" ]]; then
		error "The libft.a was not generated by make."
		return $?
	fi
	ok "libft.a compiled."
	return $?
}

test_mandatory_exec() {
	if [[ ! -f libft.h ]]; then
		cp ${path}/libft.h .
	fi
	gcc -Wall -Werror -Wextra -g *.c ${path}/libft.a -o tester && ./tester
}

test_mandatory() {
	test_mandatory_exist
	if [[ $? != 0 ]]; then
		return 1
	fi
	test_mandatory_make
	if [[ $? != 0 ]]; then
		return 1
	fi
	test_mandatory_exec
	if [[ $? != 0 ]]; then
		return 1
	fi
	return 0
}

echo -e "${fg_yellow}Script made by mgueifao.${c_reset}"
echo "Testing libft."

if [[ -d $path ]]; then
	test_norm
	test_mandatory
else
	error "The path \"${path}\" does not exist or is not a directory."
fi
