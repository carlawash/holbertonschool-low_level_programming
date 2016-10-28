#include "holberton.h"

/**
 * _strncat - links two strings
 * @dest: hello
 * @src: world
 * @n: number of bytes
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)

{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
