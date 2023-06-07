#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number
 * @n: integer input
 *
 * Return: -1 to indicate an error, 1 if n = 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		/* Return -1 to indicate an error for negative numbers */
		return (-1);
	}
	else if (n == 0)
	{
		/* base case: factorial of 0 is 1 */
		return (1);
	}
	else
	{
		/* Recursive case: multiply n with factorial of (n-1) */
		return (n * factorial(n - 1));
	}
}
