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

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->name = name;
	new->age = age;
	new->owner = owner;

	return new;
}
