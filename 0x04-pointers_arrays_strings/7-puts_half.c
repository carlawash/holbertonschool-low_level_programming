#include "holberton.h"

/**
 * puts_half - prints half of string
 * @str: string
 *
 */

void puts_half(char *str)

{
	int c;
	int i;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	if (c % 2 == 0)
	{
		i = c / 2;
	}
	else
	{
		i = (c - 1) / 2;
	}
	while (i < c)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
