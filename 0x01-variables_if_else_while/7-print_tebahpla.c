#include <stdio.h>

/**
 * main - this program prints the alphabet in reverse
 * Return: 0 if the program runs in a good way
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
