#include "holberton.h"
#include <stdio.h>

/**
 * _abs - returns absolute number
 * @n: number
 * Return:(0)
 */

int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (0);
}
