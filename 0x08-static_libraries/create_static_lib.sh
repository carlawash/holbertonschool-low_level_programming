#!/bin/bash
gcc -Wall -Wextra -Werror -c *.c
ar -rc libholbertonschool.a *.o
