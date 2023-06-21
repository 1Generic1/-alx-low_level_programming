#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: pointer to a function that prints a string
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
