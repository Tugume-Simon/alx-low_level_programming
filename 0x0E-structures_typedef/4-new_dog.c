#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * store_str - stores string into variable
 * @s: address of string
 * @n: length of string
 *
 * Return: string
 */
char store_str(char *s, unsigned int n)
{
	unsigned int i;
	char str[] = "";

	for (i = 0; i < n; i++)
	{
		str[i] = s[i];
	}

	return (str);
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
	char nm[] = store_str(name, sizeof(*name));
	char own[] = store_str(name, sizeof(*owner));

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
