#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* Create memory space for new dog */
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	/* create memory for name and owner strings */
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	/* Make copy of name and owner strings */
	strcpy(d->name, name);
	strcpy(d->owner, owner);

	/* Create the age member */
	d->age = age;

	return (d);
}
