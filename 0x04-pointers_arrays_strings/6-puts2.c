#include "holberton.h"

/**
 * puts2 - prints one char out of 2
 * @str: input string
 *
 */

void puts2(char *str)

{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c = c + 2;
	}
	_putchar('\n');
}
