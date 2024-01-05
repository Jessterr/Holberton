#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - stores a new dog
 * @name: the dog's name
 * @age: unused
 * @owner: the dog's pet human
 *
 * Return: pointer to new dog or NULL (if failed)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name_len, owner_len;
	dog_t *new_dog;

	name_len = strlen(name);
	owner_len = strlen(owner);

	new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = (char *)malloc(name_len + 1);
	new_dog->owner = (char *)malloc(owner_len + 1);
	new_dog->age = age;

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	return (new_dog);
}
