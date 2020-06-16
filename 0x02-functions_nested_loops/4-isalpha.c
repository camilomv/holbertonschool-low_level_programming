#include "holberton.h"

/**
 * _isalpha - Function to check if a character is a letter or not
 * @c: varialbe used to run the function
 * Return: 1 if c is a letter and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
