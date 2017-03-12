#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 *
 *@s: character array to count
 *
 * Return: number of characters
 */

int _strlen(char *s)
{
	int i, c;

	i = 0;
	c = -1;
	while (c != 0)
	{
		c = s[i];
		if (c != 0)
		{
			i++;
		}
	}
	return (i);
}

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed to by
 * dest.
 *
 *@dest: src is copied into here
 *@src: copied into dest
 *
 * Return: pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != 0)
	{
		if (src[i] != 0)
		{
			dest[i] = src[i];
			i++;
		}
		if (src[i] == 0)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}

/**
 * new_dog - creates a new instance of dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: always return 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(sizeof(char) * (_strlen(name) + 1));
	_strcpy(name_copy, name);
	owner_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
	_strcpy(owner_copy, owner);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
