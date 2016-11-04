#include "holberton.h"
/**
 * help - finds the prime number
 * @n: number given by function
 * @i: determines if number is prime
 * Return: (help)
 */
int help(int n, int i)
{
	if (n % i == 0 && n > i)
	{
		return (0);
	}
	if (n % i != 0 && n > i)
	{
		return (help(n, i + 1));
	}
	if (n == i)
	{
		return (1);
	}
	return (0);
}
/**
 * is_prime_number - returns prime number
 * @n: number given by function
 * Return: (n if number is prime)
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	return (help(n, i));
}
