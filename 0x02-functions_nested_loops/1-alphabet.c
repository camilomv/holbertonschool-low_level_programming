#include "holberton.h"

/**
 * main: this program prints the alphabet
 * Return: 0 if the program runs well
 */

int main(void)
{
	char (c);

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	return (0);
}
