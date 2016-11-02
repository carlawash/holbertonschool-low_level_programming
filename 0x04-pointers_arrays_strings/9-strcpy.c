#include "holberton.h"

/**
 * _strcpy - copies the string
 * @dest: buffer to copy the string
 * @src: string to copy
 * Return: a pointer to the copy of the string
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
