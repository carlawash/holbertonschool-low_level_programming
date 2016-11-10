#include "holberton.h"

/**
 * string_toupper - changes all letters to CAPS
 * @s: string to make CAPS
 * Return: Pointer to string
 */

char *string_toupper(char *s)
{
	char *temp;

	temp = s;
	do {
		if (*s <= 'z' && *s >= 'a')
			*s -= 32;
	} while (*s++);

	return (temp);
}
