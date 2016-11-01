#include "holberton.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer
 * @b: value
 * @n: number of bytes
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int c;

	c = 0;
	while (c < n)
	{
		s[c] = b;
		c++;
	}
	return (s);
}
