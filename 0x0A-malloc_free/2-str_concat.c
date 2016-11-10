#include <stdlib.h>

/**
 * str_len - length of string
 * @s: string to check
 * Return: length
 */
int str_len(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * str_concat - concatenates two strings with malloc
 * @s1: first string
 * @s2: second string
 * Return: address of concat string, otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *cat, *temp;
	int k, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	k = str_len(s1);
	j = str_len(s2);
	j++;

	if (k != 0 || j != 0)
		cat = malloc(k * sizeof(*s1) + j * sizeof(*s2));

	else
		return (NULL);

	if (cat == NULL)
		return (NULL);

	temp = cat;
	while (*s1 != '\0')
	{
		*cat = *s1;
		cat++;
		s1++;
	}
	while (*s2 != '\0')
	{
	*cat = *s2;
	cat++;
	s2++;
	}
	*cat = '\0';
	return (temp);
}
