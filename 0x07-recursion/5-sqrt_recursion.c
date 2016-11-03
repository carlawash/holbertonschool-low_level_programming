#include "holberton.h"

/**
 * help - finds the squareroot
 * @n: number multiplied to find squareroot
 * @i: number given by function
 * Return: (n if it's squareroot)
 */
int help(int n, int i)
{
	if (n * n == i)
	{
		return (n);
	}
	if (n * n > i)
	{
		return (-1);
	}
	return (help(n + 1, i));
}
/**
 * _sqrt_recursion - finds squareroot
 * @n: number given by function
 * Return: (squareroot)
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (help(1, n));
}
