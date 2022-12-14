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
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = malloc(sizeof(char) * n);
	new->owner = malloc(sizeof(char) * o);

	if (!new->name || !new->owner)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
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
		return (0);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (++i);
}
