#include "holberton.h"

/**
 * print_square - prints square
 * @size: holds value
 *
 */
void print_square(int size)
{
	int c;
	int i;

	c = 0;
	while (c < size)
	{

		i = 0;
		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		c++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
