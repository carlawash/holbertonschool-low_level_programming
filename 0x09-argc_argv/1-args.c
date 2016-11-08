#include <stdio.h>
/**
 * main - print out number of arguments
 * @argv: value
 * @argc: counter
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	argv--;
	printf("%d\n", argc - 1);
	return (0);
}
