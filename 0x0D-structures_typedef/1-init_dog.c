#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variable of type struct dog
 *
 * @d: instance of struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owener;
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
