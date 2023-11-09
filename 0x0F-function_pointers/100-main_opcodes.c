#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/*
 * Prints the opcodes of the main function in hexadecimal format.
 * @param num_bytes The number of bytes to print.
 */
void print_opcodes(int num_bytes);

/*
 * Main function that handles program arguments and calls print_opcodes.
 * @param argc The number of command-line arguments.
 * @param argv An array of strings containing the command-line arguments.
 * @return int The exit status.
 */
int main(int argc, char *argv[])
{
	/* Check if the correct number of arguments is provided */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the argument to an integer */
	int num_bytes = atoi(argv[1]);

	/* Check if the number of bytes is non-negative */
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Print the opcodes of the main function */
	print_opcodes(num_bytes);

	return (0);
}

/*
 * Prints the opcodes of the main function in hexadecimal format.
 * @param num_bytes The number of opcodes to print.
 */
void print_opcodes(int num_bytes)
{
	/* Get the address of the main function */
	unsigned char *main_ptr = (unsigned char *)main;

	/* Print the opcodes in hexadecimal format */
	for (int i = 0; i < num_bytes; ++i)
	{
		printf("%02x ", main_ptr[i]);
	}

	printf("\n");
}
