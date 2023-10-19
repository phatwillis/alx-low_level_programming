#include <unistd.h>

/**
 * _putchar - Custom implementation of the putchar function
 * to output a character
 * @c: The character to be printed.
 * Return: On success returns the character written as an unsigned char cast to
 * an int.
 *         On failure, returns -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
