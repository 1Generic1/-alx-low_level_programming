#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to the number whose bit will be cleared
 * @index: Index of the bit to be cleared, starting from 0
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1 << index;
	*n = *n & ~mask;
	return (1);
}
