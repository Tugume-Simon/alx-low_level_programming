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
	int i;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = malloc(sizeof(*name) + 1);
	new->owner = malloc(sizeof(*owner) + 1);

	for (i = 0; name[i] != '\0'; i++)
	{
		new->name[i] = name[i];
	}

	for (i = 0; owner[i] != '\0'; i++)
	{
		new->owner[i] = owner[i];
	}

	new->age = age;

	return (new);
}
