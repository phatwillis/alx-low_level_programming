#include "main.h"

/**
 * _puts - it prints a string, followed by a new line
 * @str: pointer to the string to print
 * Return:  to void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
