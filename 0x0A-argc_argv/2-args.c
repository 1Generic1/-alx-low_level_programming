#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: number of command argument in the program
 * @argv: actual command argument to the program
 *
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
