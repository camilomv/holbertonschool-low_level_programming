#include <stdio.h>

/**
 * main - this program prints all numbers in hexadecimal base
 * Return: 0 if everything ok
 */

int main(void)
{
	int i;

	for (i = 0; (i / 10) <= 0; i++)
		putchar(i % 16 + '0');
	for (i = 0; (i / 6) <= 0; i++)
		putchar(i % 16 + 'a');
	putchar('\n');
	return (0);
}
