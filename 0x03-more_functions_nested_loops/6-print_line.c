#include "holberton.h"

/**
 * print_line - print line
 * @n: placeholder for 0
 *
 */

void print_line(int n)

{

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
