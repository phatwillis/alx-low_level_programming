#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: is the input stringeturn
 * Return: it returns the length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}
