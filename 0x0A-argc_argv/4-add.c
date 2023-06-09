#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - checks if a string represents a positive number
 * @str: the string to check
 *
 * Return: 1 if the string represents a positive number, 0 otherwise
 */

int is_positive_number(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
