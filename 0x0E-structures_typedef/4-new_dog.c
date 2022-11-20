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
	char *nm;
	char *own;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	nm = malloc(sizeof(*name));
	own = malloc(sizeof(*owner));
	if (nm == NULL || own == NULL)
	{
		return (NULL);
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (name[i] != '\0')
	{
		nm[i] = name[i];
		i++;
	}
	i = 0;
	while (owner[i] != '\0')
	{
		own[i] = owner[i];
		i++;
	}

	new->name = nm;
	new->age = age;
	new->owner = owner;

	return (new);
}
