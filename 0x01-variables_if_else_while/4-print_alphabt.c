#include <stdio.h>

/**
 * main - this program prints the alphabet in lowercase
 * except the letters q and e
 * Return: 0 that is a success status that means the program worked fine
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'e') && (c != 'q'))
		{
		putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
