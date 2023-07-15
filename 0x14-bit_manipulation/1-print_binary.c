#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints binary
 * @n: decimal number to convert to binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	printf("%lu", n & 1);
}
