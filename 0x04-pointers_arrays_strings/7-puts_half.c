#include "holberton.h"

/**
 * puts_half - prints half of string
 * @str: string
 *
 */

void puts_half(char *str)
{
	int len;
	int i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = len / 2 + 1;
	}
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
