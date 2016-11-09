#include <stdlib.h>

/**
 * _strdup - returns pointer to new space in memory
 * @str: string to copy
 * Return: address or NULL
 */
char *_strdup(char *str)
{
	char *dup, *tem;

	dup = malloc(sizeof(*str));
	tem = dup;
	while (*str  != '\0')
	{
		*dup = *str;
		dup++;
		str++;
	}
	if (tem)
		return (tem);
	else
		return (NULL);
}
