#!/usr/bin/env bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c ./*.c
ar rcs liball.a ./*.o
