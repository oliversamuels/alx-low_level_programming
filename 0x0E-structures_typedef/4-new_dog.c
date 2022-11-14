#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  * new_dog - Entry Point
  * @name: Input
  * @age: Input
  * @owner: Input
  * Return: Always 0
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name;
	char *cpy_name, *cpy_owner;
	unsigned int x, name_len = 0, owner_len = 0;

	new_name = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);
	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	for (x = 0; name[x] != '\0'; x++)
		name_len++;
	for (x = 0; owner[x] != '\0'; x++)
		owner_len++;

	cpy_name = malloc(sizeof(char) * (name_len + 1));
	if (cpy_name == NULL)
		return (NULL);

	cpy_owner = malloc(sizeof(char) * (owner_len + 1));
	if (cpy_owner == NULL)
		return (NULL);

	for (x = 0; x <= name_len; x++)
		cpy_name[x] = name[x];

	for (x = 0; x <= owner_len; x++)
		cpy_owner[x] = owner[x];

	new_name->name = cpy_name;
	new_name->age = age;
	new_name->owner = cpy_owner;
	return (new_name);
}
