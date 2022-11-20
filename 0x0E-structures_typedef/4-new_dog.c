#include "dog.h"
#include <stdlib.h>

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
	char *nm;
	char *own;

	nm = malloc(sizeof(*name));
	own = malloc(sizeof(*owner));

	if (nm == NULL || own == NULL)
	{
		free(nm);
		free(own);
		return (NULL);
	}

	nm = name;
	own = owner;
	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = nm;
	new->age = age;
	new->owner = own;

	return (new);
}
