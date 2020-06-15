#include <stdio.h>
/**
 * main - This program prints the alphabet
 * Return: 0 if everything ok
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
