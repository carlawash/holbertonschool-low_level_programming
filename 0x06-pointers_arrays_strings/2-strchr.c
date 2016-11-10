#include "holberton.h"
/**
 * _strchr - searches for c
 * @s: first byte
 * @c: char to find
 * Return: memory address pointed at start of string
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) != c)
			i++;
		else
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	else
		return ('\0');
}
