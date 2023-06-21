#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

**
 * print_opcodes - Prints the opcodes of an array of bytes
 * @bytes: Pointer to the array of bytes
 * @num_bytes: Number of bytes to print
 */
void print_opcodes(char *bytes, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%.2hhx ", bytes[i]);
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 1 or 2 on error
 */

int main(int argc, char *argv[])
{
	int num_bytes;
	char *main_opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	main_opcodes = (char *)main;
	print_ opcodes(main_opcodes, num_bytes);
	return (0);
}




