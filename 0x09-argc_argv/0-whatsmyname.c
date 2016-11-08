#include <stdio.h>
/**
 * main - print out executable
 * @argc: counter
 * @argv: value 
 *Return: (0)
 */
int main(int argc, char *argv[])
{
        argc--;
        printf("%s\n", argv[0]);
        return (0);
}
