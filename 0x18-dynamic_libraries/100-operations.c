/* 100-operations.c */
#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The sum of the two integers.
 */
int add(int a, int b) {
	return a + b;
}

/**
 * sub - Subtracts two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of subtracting the second integer from the first.
 */
int sub(int a, int b) {
	return a - b;
}

/**
 * mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of the two integers.
 */
int mul(int a, int b) {
	return a * b;
}

/**
 * div - Divides two integers.
 * @a: First integer (numerator).
 * @b: Second integer (denominator).
 *
 * Return: The result of dividing the first integer by the second.
 *         If the second integer is 0, prints an error message and returns 0.
 */
int div(int a, int b) {
	if (b == 0) {
		fprintf(stderr, "Error: Division by zero\n");
		return 0; // Handle division by zero error
	}
		return a / b;
}

/**
 * mod - Computes the remainder of the division of two integers.
 * @a: First integer (dividend).
 * @b: Second integer (divisor).
 *
 * Return: The remainder when the first integer is divided by the second.
 *         If the second integer is 0, prints an error message and returns 0.
 */
int mod(int a, int b) {
	if (b == 0) {
		fprintf(stderr, "Error: Modulo by zero\n");
		return 0; // Handle modulo by zero erro
	}
	return a % b;
}

