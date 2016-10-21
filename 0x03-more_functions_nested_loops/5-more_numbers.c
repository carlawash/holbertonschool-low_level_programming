#include "holberton.h"

/**
 * more_numbers - print more numbers
 *
 *
 */

void more_numbers(void)

{
	int num;
	char i;

	i = 0;
	while (i < 10)
	{

		num = 0;
		while (num <= 14)
		{
			if (num > 9)
			{
				_putchar(num / 10 + 48);
			}
			_putchar(num % 10 + 48);
			num++;
		}
		_putchar('\n');
		i++;
	}
}
