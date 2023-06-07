#include "main.h"
#include <stdio.h>


/**
 * _pow_recursion - function that returns the value of x raised to power y
 * @x: interger input
 * @y: interger input
 *
 * Return: -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		/* function should return -1 */
		return (-1);
	}
	else if (y == 0)
	{
		/* base case for the recursion */
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
