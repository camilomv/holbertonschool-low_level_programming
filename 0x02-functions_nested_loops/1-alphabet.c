#include "holberton.h"

/**
 * print_alphabet - this program prints the alphabet
 * Return: 0 if the program runs well
 */

int print_alphabet(void)
{
	char (c);

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return (0);
}
