#include <stdio.h>

/**
 * main - printcombo
 *
 * Return: (0)
 */

int main(void)
{
	int a;

	a = 0;
	while (a <= 99)
	{
		putchar(a / 10 + '0');
		putchar(a % 10 + '0');
		if (a != 99)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
