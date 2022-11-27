#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int get_len(char *str);
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
	char *nm, *own;
	int i, nl, ol;
	
	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	nl = get_len(name);
	ol = get_len(owner);
	nm = malloc(sizeof(char) * nl);
	own = malloc(sizeof(char) * ol);

	for (i = 0; i < nl; i++)
	{
		nm[i] = name[i];
	}
	for (i = 0; i < ol; i++)
	{
		own[i] = owner[i];
	}

	new->name = nm;
	new->age = age;
	new->owner = own;

	return (new);
}

/**
 * get_len - counts characters in the string
 * @str: pointer to string
 *
 * Return: length of string
 */
int get_len(char *str)
{
	int i;

	if (str == NULL)
	{
		return (0);
	}
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
