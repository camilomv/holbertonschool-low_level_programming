#include "holberton.h"

/**
 * jack_bauer - furnction to print every minute of the day
 *
 *
 * return: 0 if everything ok
 */

void jack_bauer(void)
{
	int hh = 0;
	int mm = 0;

	while (hh <= 23)
	{
		while (mm  <= 59)
		{

			_putchar(hh / 10 + '0');
			_putchar(hh % 10 + '0');
			_putchar(':');
			_putchar(mm / 10 + '0');
			_putchar(mm % 10 + '0');
			_putchar('\n');
			mm++;
		}
		hh++;
		mm = 0;
	}
}
