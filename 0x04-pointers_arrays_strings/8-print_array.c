#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to an int
 * @n: number of bytes
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		printf("%d", a[c]);
		if (c != n - 1)
		{
			printf(", ");
		}
		c++;
	}
	printf("\n");
}
