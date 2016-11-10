#include "holberton.h"

/**
 * rot13 - rot13 to strings with only one conditional loop
 * @input: input string
 * Return: c
 */

char *rot13(char *input)
{
	char *c;

	c = input;
	while (*input != '\0')
	{
		if ((*input >= 'n' && *input <= 'z') || (*input >= 'N' && *input <= 'Z'))
		{
			*input = *input - 13;
		}
		else
		{
			while ((*input >= 'a' && *input <= 'm') || (*input >= 'A' && *input <= 'M'))
			{
				*input = *input + 13;
			}
		}
		input++;
	}
	return (c);
}
