#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to a struct dog
 *
 * Description: This function prints the details of a dog, such as its name,
 * age, and owner. If any element of the struct is NULL, it will print (nil)
 * instead.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("owner: %s\n", (d->owner != NULL) ? d->owner: "(nil)");
}
