#include "main.h"

/**
 * _abs - check n
 * @r: integer input
 * Description: This function returns the absolute value of a number
 * Return: it returns an Absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
