#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * is_valid_number - Checks if a string contains only digits.
 * @str: The string to be checked.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */

int is_valid_number(char *str)
{
	int i;

	for (i = 0; str[i] != '/0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * multiply_numbers - Multiplies two integers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The product of the two numbers.
 */
int multiply_numbers(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 98 on error.
 */

int main(int argc, char *argv[])
{
	char *num1_str, *num2_str;
	int num1, num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1_str = argv[1];
	num2_str = argv[2];

	if (!is_valid_number(num1_str) || !is_valid_number(num2_str))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(num1_str);
	num2 = atoi(num2_str);
	result = multiply_numbers(num1, um2);
	printf("%d\n", result);
	return (0);
}
