#include "holberton.h"

/**
 * print_most_numbers - print numbers except
 *
 *
 */

void print_most_numbers(void)

{
	int a;

	a = '0';
	while (a <= '9')
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
		a++;
	}
	_putchar('\n');
}
