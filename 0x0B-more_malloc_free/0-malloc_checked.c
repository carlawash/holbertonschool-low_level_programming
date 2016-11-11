#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size to malloc
 * Return: 98 if fail, otherwise malloc
 */
void *malloc_checked(unsigned int b)
{
	void *temp;

	temp = malloc(b);
	if (temp == NULL)
		exit(98);
	return (temp);
}
