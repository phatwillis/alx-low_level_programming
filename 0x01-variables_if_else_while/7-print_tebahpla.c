#include <stdio.h>

/**
 * main - Entry point
 * author: steven
 * Return: Always 0 (Success)
 */
int main(void)
{
	char steven;

	for (steven = 'z'; steven >= 'a'; steven--)
		putchar(steven);
	putchar('\n');
	return (0);
}
