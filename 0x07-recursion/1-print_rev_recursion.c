#include "holberton.h"

/**
 * _print_rev_recursion - reverse recursion
 * @s: pointer that prints string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
