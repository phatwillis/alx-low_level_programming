#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: is the character to be checked
 * Return: it returns 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
