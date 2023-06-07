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
	// If the current characters match or s2 has a wildcard '*', move to the next characters
    if (*s1 == *s2 || *s2 == '*')
        return wildcmp(s1 + 1, s2 + 1);

    // If s2 has a wildcard '*', try to match s1 with the next character of s2 or skip the wildcard
    if (*s2 == '*')
        return wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2);

    // If none of the above conditions are met, the strings are not identical
    return 0;
}
