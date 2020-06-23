/**
 * swap_int - function tha switch two int values
 * @a: First Value
 * @b: Second Value
 * Return: void - nothing
 */

void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
