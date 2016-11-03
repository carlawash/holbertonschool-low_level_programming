#include "holberton.h"

/**
 * _strlen_recursion - returns length of string
 * @s: holds value of beginning of string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
