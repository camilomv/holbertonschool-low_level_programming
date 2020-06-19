#include "holberton.h"

/**
 * jack_bauer - furnction to print every minute of the day
 *
 *
 * return: 0 if everything ok
 */

void jack_bauer(void)
{
	int hh1 = 0;
	int hh2 = 0;
	int mm = 0;

	while ((hh1 / 3) <= 0)
	{
		while ((hh2 / 10) <= 0)
		{
			while ((mm / 10) <= 60)
			{
				_putchar(hh1 % 10 + '0');
				_putchar(hh2 % 10 + '0');
				_putchar(':');
				_putchar(mm % 10 + '0');
				_putchar('\n');
				mm++;
			}
			hh2++;
			mm = 0;
		}
		hh1++;
		hh2 = 0;
	}
}
