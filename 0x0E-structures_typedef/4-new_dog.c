#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the of the dog
 * @owner: the owner of the dog
 *
 * Return: NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenN, len0;
	struct dog *n_dog == NULL;

	lenN = 0;
	while (owner[len0] != '\0')
		len0++;
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(lenN + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(len0 + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= lenN; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= len0; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
