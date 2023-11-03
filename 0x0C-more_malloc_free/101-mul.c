#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * Check if a string is composed of digits
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
 * Multiply two positive numbers
 */
void multiply(char *num1, char *num2)
{
	char *result;
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int len_result = len1 + len2;
	int carry, i, j, k;

	result = (char *)malloc(len_result + 1);

	for (i = 0; i <= len_result; i++)
	{
		result[i] = '0';
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1, k = i + len2; j >= 0; j--, k--)
		{
			int temp = (num1[i] - '0') * (num2[j] - '0') + (result[k] - '0') + carry;

			carry = temp / 10;
			result[k] = (temp % 10) + '0';
		}
		result[k] = (result[k] - '0') + carry + '0';
	}

	/*
	 * Remove leading zeros
	 */
	for
		(i = 0; result[i] == '0'; i++);

	if (result[i] == '\0')
	{
		printf("0\n");
	} else
	{
		printf("%s\n", result + i)
	}

	free(result);
}

/*
 * Command-line argument validation and program logic
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2);

	return (0);
}
