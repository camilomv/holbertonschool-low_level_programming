#include <stdio.h>

/**
 * print_to_98 - Function that prints all natural numbers from n to 98
 * @n: given number that is the first number of the sequence
 * Return: void - nothing
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		printf(", ");
		n++;
	}
	while (n > 98)
	{
		printf("%d", n);
		printf(", ");
		n--;
	}
	printf("98\n");
}
