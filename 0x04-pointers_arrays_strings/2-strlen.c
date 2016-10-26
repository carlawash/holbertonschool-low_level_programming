#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: address pointing to the value of the string
 * Return: (c)
 */

int _strlen(char *s)

{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
