#include "holberton.h"

/**
 * puts_half - prints half of string
 * @str: string
 *
 */

void puts_half(char *str)

{
	int c;

	c = 5;
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
