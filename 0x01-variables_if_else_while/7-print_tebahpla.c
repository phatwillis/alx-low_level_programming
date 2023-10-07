#include <stdio.h>
/**
 * main - main function
 *
 * Return: Return: Always 0 (Success)
 */

int main(void)
	{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		{
		putchart(alphabet);
		}
	putchar('\n');
	return (0);
	}
