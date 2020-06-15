#include <stdio.h>

/**
 * main - this program prints the numbers from 0 to 9
 * Return: 0 if the program runs correctly
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		(printf("%d", i));
	putchar('\n');
	return (0);
}
