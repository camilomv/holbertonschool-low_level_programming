#include <stdio.h>

/**
 * main - this program prints the numbers from 0 to 9
 * i can only use putchar and char variables are not allowed
 * Return: 0 if the program runs correctly
 */

int main(void)
{
	int i = 0;

	while (i / 10 <= 0)
	{
		putchar(i % 10 + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
