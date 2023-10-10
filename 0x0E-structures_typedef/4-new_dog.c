#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
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
		if (newDog->name == NULL)
		{
			free(newDog);
			return (NULL);
		}

		newDog->owner = strdup(owner);
		if (newDog->owner == NULL)
		{
			free(newDog->name);
			free(newDog);
			return (NULL);
		}

		newDog->age = age;

		return (newDog);
	}

	return (NULL);
}
