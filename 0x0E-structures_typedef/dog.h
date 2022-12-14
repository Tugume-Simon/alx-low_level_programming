#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - structure to hold dog information
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 *
 * Description: this template will be used to create
 * other dog structs
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H */
