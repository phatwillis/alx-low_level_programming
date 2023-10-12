#include "main.h"
#include <stdio.h>

/** positive_or_negative - Prints if an integer is positive, negative, or zero
 * @n: The integer to be checked
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("0 is zero\n");
}

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	return (0);
}
