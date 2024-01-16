#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: is the first string to compare
 * @s2: is the second string
 *
 * Return: it returns less than 0 if s1 is less than s2, 0 if they're equal
 * and more than zero if greater
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
