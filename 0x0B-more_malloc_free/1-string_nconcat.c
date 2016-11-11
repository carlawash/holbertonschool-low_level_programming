#include <stdlib.h>

/**
 * string_nconcat - concat two strings
 * @s1: first string
 * @s2: second string
 * @n: max size of 2nd string to concat
 * Return: concat string or NULL for fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp, *concat;
	unsigned int len1, len2, i, j;

	len1 = len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	temp = s1;
	while (*temp != '\0')
		temp++, len1++;
	temp = s2;
	while (*temp != '\0')
		temp++, len2++;
	if (len2 <= n)
		concat = malloc((len1 + len2 + 1) * sizeof(char));
	else
		concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; *s1 != '\0'; s1++, i++)
		concat[i] = *s1;
	for (j = i; *s2 != '\0' && (j - i) < n; s2++, j++)
		concat[j] = *s2;
	concat[j] = '\0';
	return (concat);
}
