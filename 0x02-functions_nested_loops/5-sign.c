#include "holberton.h"

/**
 * print_sign - function for decide if a character is greater than zero,
 * or zero,  or less than zero
 * @n: Variable use in the function
 * Return: 1 if it is greater, 0 if is zero and -1 if it is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
