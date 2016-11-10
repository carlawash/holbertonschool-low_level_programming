#include "holberton.h"

/**
 * _strncpy - copy n char of string
 * @dest: destination
 * @src: source string
 * @n: number of char
 * Return: c
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *c;
	int i;

	i = 0;
	c = dest;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (c);
}
