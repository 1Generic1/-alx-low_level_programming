#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

/**
 * _strlen_recursion - calculates the length of a string using recursion
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
       	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome_recursive - recursive helper function
 * @s: the string to check
 * @start: the starting index
 * @end: the ending index
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	return (1);
	if (s[start] != s[end])
	return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

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
	return (1);

	return (is_palindrome_recursive(s, 0, len - 1));
}
