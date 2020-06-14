#include <stdlib.h>
#include <time.h>
/**
 * main - take a ramdom number and say if it is positive, negative or zero
 * Return: 0 if the program runs in a good way
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n); }
	else if (n < 0)
	{
		printf("%d is negative", n); }
	else
	{
		printf("%d is zero", n); }
return (0);
}
