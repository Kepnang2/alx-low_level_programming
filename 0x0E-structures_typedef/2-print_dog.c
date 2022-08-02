#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print all data of dog
 * @d: A dog structure
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
