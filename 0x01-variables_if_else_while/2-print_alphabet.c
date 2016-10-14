#include <stdio.h>

/**
 * main - main
 * loop a to z
 * Return: (0)
 */

int main(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);

		a++;
	}
	putchar('\n');
	return (0);
}
