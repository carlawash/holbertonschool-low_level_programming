#include <stdio.h>

/**
 * main - main
 * loop z to a
 * Return: (0)
 */

int main(void)
{
	int a;

	a = 'z';
	while (a  >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}

