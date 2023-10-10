#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * print_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog != NULL)
	{
		newDog->name = strdup(name);
		newDog->owner = strdup(owner);
		newDog->age = age;

		return (newDog);
	}

	return (NULL);
}
