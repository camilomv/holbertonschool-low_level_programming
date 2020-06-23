#include "holberton.h"
/**
 * times_table - function that prints the 9 times table
 *
 * Return: nothing (void)
 */
void times_table(void)
{
	int n;
	int mult;
	int rs;

	for (n = 0; n <= 9; n++)
	{
		for (mult = 0; mult <= 9; mult++)
		{	rs = n * mult;
			if (mult == 0)
			{	_putchar(rs % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((rs < 10) && (mult != 0) && (mult != 9))
			{	_putchar(' ');
				_putchar(rs % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((rs >= 10) && (mult != 9))
			{	_putchar(rs / 10 + '0');
				_putchar(rs % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (mult == 9)
			{
				if (rs > 9)
				{	_putchar(rs / 10 + '0');
					_putchar(rs % 10 + '0');
				}
				else if (rs <= 9)
				{
					_putchar(' ');
					_putchar(rs % 10 + '0');
				}
			}
		}
		_putchar('\n');
	}
}
