#include "holberton.h"

/**
 * print_rev - reverse
 * @s: prints string in reverse
 *
 */

void print_rev(char *s)

{
	int e;

	e = 0;
	while (s[e] != '\0')
	{
		e++;
	}


	e = e - 1;
	while (e >= 0)
	{
		_putchar(s[e]);
		e--;
	}

	_putchar('\n');
}
