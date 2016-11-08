#include <stdio.h>

int main(int argc, char *argv[])
{
	argv--;
	printf("%d\n", argc - 1);
	return (0);
}
