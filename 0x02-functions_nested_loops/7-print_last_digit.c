#include "holberton.h"

/**
 * print_last_digit - function that returns the value of the last digit
 * @c: This is the initial number
 * Return: This program returns the value of the last digit of the number in c
 */

int print_last_digit(int c)
{
	int last;

	if (c < 0)
		c = c * (-1);
	last = c % 10;
	_putchar('0' + last);
	return (last);
}
