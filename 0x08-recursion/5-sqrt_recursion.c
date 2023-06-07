#include "main.h"
/**
 * _sqrt_recursive - calculates the natural square root recursively
 * @n: the number to calculate the square root of
 * @i: the current value to check
 *
 * Return: the natural square root of n, -1 if it does not exist
 */
int _sqrt_recursive(int n, int i)
{
	if (i * i > n)
		return -1;
	if (i * i == n)
	return (i);
	return (_sqrt_recursive(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, -1 if it does not exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	return _sqrt_recursive(n, 0);
}
