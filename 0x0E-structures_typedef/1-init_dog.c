#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  * init_dog - Entry Point
  * @d: Structure
  * @name: Input
  * @age: Input
  * @owner: Input
  * Return: Always 0
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
