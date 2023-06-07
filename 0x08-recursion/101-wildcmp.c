#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if identical
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		/* this is the base condition for this function */
		return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else
		return (0);
}
