#include<stdio.h>

/**
 * main - main
 * while loop
 * Return: (0)
 */

int main(void)

{
	int a, A;

	a = 'a';
	A = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
