#include "holberton.h"

/**
 * _isupper - returns upper case
 * @c: checks for upper case
 * Return:(0)
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
