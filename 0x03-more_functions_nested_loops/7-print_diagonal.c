#include "holberton.h"

/**
 * print_diagonal - print diagonal
 * @n: placeholder
 *
 */

void print_diagonal(int n)

{
	int y;
	int x;

	y = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (y < n)
	{
		x = 0;
		while (x < n)
		{
			if (y > x)
				_putchar(' ');
			else if (y == x)
				_putchar('\\');
			x++;
		}
		y++;
		_putchar('\n');
	}
}
