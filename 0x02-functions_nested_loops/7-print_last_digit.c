/**
 * print_last_digit - function that returns the value of the last digit
 * @c: This is the initial number
 * Return: This program returns the value of the last digit of the number in c
 */

int print_last_digit(int c)
{
	int last;

	if (c < 0)
	{
		c = -c;
		last = c % 10;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = c % 10;
		_putchar(last + '0');
		return (last);
	}
}
