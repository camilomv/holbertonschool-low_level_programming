#include "holberton.h"

/**
 * _abs(int) - Function that return the absolute value of a number
 * @abs: The number that the function will calculate the Absolute value
 * Return: The absolut value of the number
 */

int _abs(int abs)
{
	if (abs < 0)
	abs = abs * -1;
	return (abs);
}
