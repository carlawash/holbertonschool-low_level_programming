#include <stdio.h>
/**
* main - print out executable
* @argc: counter
* @argv: value
* Return: (0)
*/
int main(int agrc, char *agrv[])
{
	if (agrc <= 1)
		printf("%s\n", argv[0]);
	return (0);
}
