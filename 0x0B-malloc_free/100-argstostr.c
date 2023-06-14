#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: Array of argument strings.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, k, len;
	int total_len = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
	len = 0;
	while (av[i][len] != '\0')
	len++;
	total_len += len + 1; /* Add 1 for '\n' character */
	}

	/* Allocate memory for the concatenated string */
	str = (char *)malloc(total_len * sizeof(char));
	if (str == NULL)
	return (NULL);

	/* Copy the arguments into the concatenated string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
	len = 0;
	while (av[i][len] != '\0')
	{
	str[k] = av[i][len];
		k++;
		len++;
	}
	str[k] = '\n'; /* Add '\n' character after each argument */
	k++;
	}
	str[k] = '\0'; /* Add null-terminating character at the end */
	return str;
}
