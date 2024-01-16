#include "main.h"

/**
 * _isupper - check for uppercase characters
 * @c: is going to be checked
 *
 * Returns: 1 if alphabet is in uppercase and returns 0 otherwise
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
