#include <stdio.h>

/**
 * main - main
 * numbers
 * Return: (0)
 */

int main(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
