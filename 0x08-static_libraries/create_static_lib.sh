#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.o
ar rc libholbertonschool.a *.o

