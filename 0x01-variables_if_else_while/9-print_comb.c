#include <stdio.h>

/**
 * main - this program prints numbers from 0 to 9 separate by a comma and space
 * Return: 0 if everything ok
 */

int main(void)
{
	int i = 0;

	while ((i / 10) <= 0)
	{
		putchar(i % 10 + '0');
		if (i < 9)
		{
		putchar(',');
		putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
