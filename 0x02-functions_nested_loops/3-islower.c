#include "holberton.h"

/**
 * _islower - function to check if one character is lowercase
 * Return: 1 if the character is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	return (0);
}
