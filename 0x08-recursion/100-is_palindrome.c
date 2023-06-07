#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
	{
		/* this is the base case for the recursion */
		return (1);
	}
	if (*s != *(s + len - 1))
		return (0);
	return (is_palindrome(s + 1) && is_palindrome(s + len - 2));
}
