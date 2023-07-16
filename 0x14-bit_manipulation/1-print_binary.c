#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number to be represented in binary form
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int flag = 0;

	while (m)
	{
		if ((n & m) == m)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
		{
			_putchar('0');
		}
		m >>= 1;
	}
	if (!flag)
		_putchar('0');
}
