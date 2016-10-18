#include "holberton.h"

/**
 * print_alphabet - print_alphabet
 * _putchar alpha
 */

void print_alphabet(void)

{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);

		a++;
	}
	_putchar('\n');
}
