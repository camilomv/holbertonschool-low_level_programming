#include <stdio.h>

/**
 * main - this program prints numbers from 00 to 99
 * Return: 0 if the program runs well
 */

int main(void)
{
	int i = 0;
	int j = 0;

	while ((i / 10) <= 0)
	{
		while ((j / 10) <= 0)
		{
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');
			if ((i + j) != 18) /* to avoid the 99 comma */
			{
			putchar(',');
			putchar(' ');
			}
			j++;
		}
		i++;
		j = 0;
	}
	putchar('\n');
	return (0);
}
