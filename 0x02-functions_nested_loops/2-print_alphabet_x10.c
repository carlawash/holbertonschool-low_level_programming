#include "holberton.h"

/**
 * print_alphabet - print_alphabet
 *
 * Return: (0)
 */

void print_alphabet_x10(void)

{
	char c;
	char i;

	i = 0;
	while ( i < 10)
	{

		c = 'a';
		while ( c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}

}
