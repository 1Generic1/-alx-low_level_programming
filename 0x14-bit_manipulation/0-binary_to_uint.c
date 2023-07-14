#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is an invalid character or NULL pointer.
 */

unsigned int binary_to_uint(const char *b)
{
	size_t len = strlen(b);
	unsigned int result = 0;
	unsigned int base = 1;
	int i;

	if (b == NULL)
		return (0);

	for (i = len -1; i >= 0; i--)
	{
		if (b[i] == '0')
			result += 0;
		else if (b[i] == '1')
			result += base;
		else
			return (0);
		base *= 2;
	}
	return (result);
}


