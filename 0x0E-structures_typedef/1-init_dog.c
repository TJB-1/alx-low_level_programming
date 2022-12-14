#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: variable
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: void;
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (d == NULL)
		exit(EXIT_FAILURE);
	d->name = name;
	d->owner = owner;
	d->age = age;
}
