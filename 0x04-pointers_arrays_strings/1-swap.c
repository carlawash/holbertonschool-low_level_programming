#include "holberton.h"

/**
 * swap_int - swaps value of two integers
 * @a: holds value
 * @b: holds value
 */

void swap_int(int *a, int *b)

{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
