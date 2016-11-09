#include <stdlib.h>

/**
 * _strdup - returns pointer to new space in memory
 * @str: string to copy
 * Return: address or NULL
 */
char *_strdup(char *str)
{
	char *dup, *temp;

	dup = malloc(sizeof(*str));
	temp = dup;
	while (*str  != '\n')
	{
		*dup = *str;
		dup++;
		str++;
	}
	if (temp)
		return (temp);
	else
		return (NULL);
}
