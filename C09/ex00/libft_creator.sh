#!/bin/bash
rm -f libft.a
gcc -Wall -Wextra -Werror -c *.c
ar -rcs libft.a *.o
rm *.o
