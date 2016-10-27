#include "holberton.h"

/**
 * rev_string - reverse
 * reverses a string
 * @s: holds value
 */

void rev_string(char *s)

{
	int i, c;
	char tmp;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}


	c = c - 1;
	i = 0;
	while (i < c)
	{
		tmp = s[i];
		s[i] = s[c];
		s[c] = tmp;
		i++;
		c--;
	}
}
