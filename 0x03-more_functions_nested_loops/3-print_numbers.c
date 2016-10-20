#include "holberton.h"

/**
 * putchar - print numbers
 * @a: placeholder for 0
 * Return: (0)
 */


void print_numbers(void)

{
	int a;

	a = '0';
	while (a <= '9')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
