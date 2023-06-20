#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure containing description of a dog
 * @name: pointer to the dog's name
 * @age: the dog's age
 * @owner: pointer to the owner's name or contact information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
