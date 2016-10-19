#include "holberton.h"

/**
 * print_last_digit - returns remainder
 *@i: returns remainder
 * Return:(0)
 */

int print_last_digit(int i)
{
	if (i > 0)
	{
		i = i % 10;
		_putchar(i + 48);
		return (i);
	}
	if (i < 0)
	{
		i = i * -1;
		i = i % 10;
		_putchar(i + 48);
		return (i);
	}
	if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}

