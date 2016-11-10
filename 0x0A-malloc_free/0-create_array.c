#include <stdlib.h>

/**
* create_array - creates array of chars
* @size: size of array
* @c: buffer
* Return: beginning of array
*/
char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	i = 0;
	ar = malloc(size * sizeof(char));
	while (i < (int)size)
	{
		ar[i] = c;
		i++;
	}
	if (ar)
		return (ar);
	else
		return (NULL);
}
