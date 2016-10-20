#include "holberton.h"

/**
 * jack_bauer - prints hours and minutes
 * Description: nested loop
 * Return:(0)
 */

void jack_bauer(void)
{
	int hour_a;
	int hour_b;
	int min_a;
	int min_b;
	int hour;
	int min;

	hour = 0;
	while (hour < 24)
	{
		hour_a = hour / 10;
		hour_b = hour % 10;

		min = 0;
		while (min < 60)
		{
			min_a = min / 10;
			min_b = min % 10;
			_putchar(hour_a + '0');
			_putchar(hour_b + '0');
			_putchar(':');
			_putchar(min_a + '0');
			_putchar(min_b + '0');
			_putchar('\n');
			min++;
		}
		hour++;

	}


}
