#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: value
 * @src: copy value
 * @n: number of bytes
 * Return: (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int c;

	c = 0;
	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
