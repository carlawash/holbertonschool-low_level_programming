#include "holberton.h"

/**
 * _islower - int _islower(int c)
 * @c: letter to check if it's lowercase
 * Return: Always 0.
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);

}
