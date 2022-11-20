#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog type (struct)
 * @name: name of the dog
 * @age: dog's age
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = malloc(sizeof(*name));
	new->owner = malloc(sizeof(*owner));

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
