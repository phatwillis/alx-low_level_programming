#include "main.h"

/**
 * _islower - check for lower characters
 * @c: is going to be checked
 * returns 1 if alphabet is in lowecase
 * returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
