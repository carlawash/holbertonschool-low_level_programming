#include "holberton.h"

/**
 * _puts_recursion - prints a string
 * @s: string of charaters
 * Return:(0)
 */
void _puts_recursion(char *s)
{
	int index;

	index = 0;
	if (s[index] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
