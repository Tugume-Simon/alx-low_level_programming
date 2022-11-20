#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_length - counts characters in a string
 * @s: pointer to string
 *
 * Return: length of string
 */
int get_length(char *s)
{
	int i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

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
		free(new);
		return (NULL);
	}

	new->name = malloc(sizeof(char) * get_length(name));
	new->owner = malloc(sizeof(char) * get_length(owner));

	if (new->name == NULL)
	{
		free(new->name);
		return (NULL);
	}
	if (new->owner == NULL)
	{
		free(new->owner);
		return (NULL);
	}

	new->name = name;
	new->owner = owner;
	new->age = age;

	return (new);
}
