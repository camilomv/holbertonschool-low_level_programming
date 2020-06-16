#include "holberton.h"

/**
 * print_alphabet_x10 - is the function we use to print the alphabet 10 times
 * Return: 0 if the program runs in a good way
 */

int print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		putchar('\n');
	}
	return (0);
}
