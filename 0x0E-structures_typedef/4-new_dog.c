#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int get_length(char *str);
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
	int n, o, i;

	n = get_length(name);
	o = get_length(owner);
	new = malloc(sizeof(dog_t));
	new->name = malloc(sizeof(char) * n);
	new->owner = malloc(sizeof(char) * o);

	if (new == NULL || !new->name || !new->owner || new->owner == NULL
			|| new->name == NULL)
	{
		if (!new->name || new->name == NULL)
			free(new->name);
		if (!new->owner || new->owner == NULL)
			free(new->owner);
		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	for (i = 0; i < n; i++)
	{
		new->name[i] = name[i];
	}
	for (i = 0; i < o; i++)
	{
		new->owner[i] = owner[i];
	}
	new->age = age;

	return (new);
}

/**
 * get_length - counts characters in a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
int get_length(char *str)
{
	int i;

	if (str == NULL)
	{
		return (-1);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (++i);
}
