#include "holberton.h"

/**
 * _strstr - Find first occurence of needle in the haystack
 * @haystack: String to search
 * @needle: String to search for
 *
 * Return: Pointer to needle in haystack, else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int c, i;

	i = 1;
	while (i && *haystack)
	{
		c = 0;
		do {
			if (*(needle + c) == '\0')
			{
				i = 0;
				break;
			}
			else if (*(haystack + c) != *(needle + c))
				break;
			c++;
		} while (*(haystack + c - 1) != '\0');
		if (i)
			haystack++;
	}
	if (i)
		return ('\0');
	else
		return (haystack);
}
