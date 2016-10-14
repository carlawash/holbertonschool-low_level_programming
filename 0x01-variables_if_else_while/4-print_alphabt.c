#include<stdio.h>

/**
 * main - main
 * if else while
 * Return: (0)
 */

int main(void)

{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
			;
		else
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
