#include <stdio.h>

/**
 * main - prints hexadecimals
 *
 * Return: (0)
 */

int main(void)
{
	int a, b;

	b = '0';
	a = 'a';
	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
