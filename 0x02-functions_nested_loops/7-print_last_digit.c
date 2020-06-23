#include "holberton.h"

/**
 * print_last_digit - function that returns the value of the last digit
 * @n: This is the initial number
 * Return: This program returns the value of the last digit of the number in c
 */

int print_last_digit(int n)
{
	int ls;

	ls = n % 10;
	if (ls < 0)
		ls = -ls;
	_putchar('0' + ls);
	return (ls);
}
