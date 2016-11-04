#include "holberton.h"
/**
 * len - function to check string length
 * @s: pointer to count string
 * Return: (len)
 */
int len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + len(s + 1));
}
/**
 * palcheck - helper function to check palindrome
 * @index: counts index of string
 * @s: pointer to count string
 * Return: (palcheck)
 */
int palcheck(int index, char *s)
{
	if (index <= 1)
	{
		return (1);
	}
	if (*s != s[index - 1])
	{
		return (0);
	}
	return (palcheck(index - 2, s + 1));
}
/**
 * is_palindrome - palindrome function
 * @s: holds value given by function
 * Return: (palcheck)
 */
int is_palindrome(char *s)
{
	int index;

	index = len(s);
	if (index <= 1)
	{
		return (1);
	}
	return (palcheck(index, s));
}
