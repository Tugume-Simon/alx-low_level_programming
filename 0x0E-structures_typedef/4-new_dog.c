#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_length - finds the length of a string
 * @str: pointer to the string
 *
 * Return: number of characters in the string
 */
/*
int get_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/
/**
 * cp_str - makes a copy of a string
 * @s: pointer to the string
 * @len: length of the string
 *
 * Return: copy of string addressed by s
 */
/*
char *cp_str(char *s, int len)
{
	int i;
	char *str;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
*/
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
	char *cpname;
	char *cpowner;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	cpname = malloc(sizeof(*name));
	if (cpname == NULL)
	{
		free(cpname);
		return (NULL);
	}
	cpname = name;
	cpowner = malloc(sizeof(*owner));
	if (cpowner == NULL)
	{
		free(cpowner);
		return (NULL);
	}
	cpowner = owner;

	new->name = cpname;
	new->owner = cpowner;
	new->age = age;

	return (new);
}
