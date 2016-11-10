#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concats args of program sep by new line
 * @ac: number of inputs
 * @av: input
 * Return: address, or NULL
 */
char *argstostr(int ac, char **av)
{
	char *res, *temp;
	int i, j, len;

	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			j++;
			len++;
		}
		len++;
	}
	len++;
	res = malloc(len * sizeof(char));
	if (res == NULL)
		return (NULL);

	temp = res;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*res = av[i][j];
			j++;
			res++;
		}
		*res = '\n';
		res++;
	}
	return (temp);
}
