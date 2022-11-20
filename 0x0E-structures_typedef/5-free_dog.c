#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory held by dog struct
 * @d: pointer to struct of dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(EXIT_SUCCESS);

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
